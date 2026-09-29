#include <Wire.h>
#include <WiFi.h>
#include <WebServer.h>
#include "model.h"

#define SOS_BUTTON_PIN  13
#define MPU_SDA         21
#define MPU_SCL         22
#define MPU6050_ADDR    0x68

const char* ssid     = "ESP32TEST";
const char* password = "12345678";

WebServer server(80);

String currentStatus = "NORMAL"; // NORMAL, PRE_FALL_GAIT, SOS, FALL
String currentRoom   = "Room 102 - East Wing";
String lastAlertTime = "None";
float currentVariance = 0.00;
float currentSway     = 0.00;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 300;
int16_t ax, ay, az, gx, gy, gz;

#define GAIT_WINDOW_SIZE 50
float accelBuffer[GAIT_WINDOW_SIZE];
int bufferIndex = 0;

const char INDEX_HTML[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>CarePulse | Telemetry Portal</title>
  <style>
    * { box-sizing: border-box; margin: 0; padding: 0; }
    body { background-color: #0b132b; color: #f8fafc; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, sans-serif; padding: 20px; }
    .container { max-width: 500px; margin: auto; }
    .header { text-align: center; margin-bottom: 20px; }
    .header h1 { font-size: 1.5rem; color: #38bdf8; font-weight: 700; }
    .header p { font-size: 0.85rem; color: #94a3b8; }
    .card { background: #1c2541; border-radius: 16px; padding: 20px; border: 1px solid #3a506b; box-shadow: 0 10px 25px -5px rgba(0, 0, 0, 0.3); margin-bottom: 15px; }
    .status-banner { padding: 18px; border-radius: 12px; font-weight: 700; text-align: center; font-size: 1.1rem; letter-spacing: 0.5px; transition: all 0.3s ease; }
    .status-normal { background: rgba(16, 185, 129, 0.15); color: #10b981; border: 1px solid #10b981; }
    .status-warning { background: rgba(245, 158, 11, 0.2); color: #f59e0b; border: 1px solid #f59e0b; animation: pulse 1.5s infinite; }
    .status-danger { background: rgba(239, 68, 68, 0.2); color: #ef4444; border: 1px solid #ef4444; animation: pulse 0.8s infinite; }
    @keyframes pulse { 0%{opacity: 1;} 50%{opacity: 0.5;} 100%{opacity: 1;} }
    .grid { display: grid; grid-template-columns: 1fr 1fr; gap: 12px; margin-top: 15px; }
    .metric { background: #0b132b; padding: 12px; border-radius: 10px; border: 1px solid #1c2541; }
    .metric-title { font-size: 0.75rem; color: #64748b; text-transform: uppercase; font-weight: 600; }
    .metric-val { font-size: 1rem; color: #f1f5f9; font-weight: 600; margin-top: 4px; }
    .row { display: flex; justify-content: space-between; padding: 12px 0; border-bottom: 1px solid #3a506b; font-size: 0.9rem; }
    .row:last-child { border-bottom: none; }
    .btn { background: #38bdf8; color: #0b132b; border: none; padding: 14px; width: 100%; border-radius: 10px; font-weight: 700; cursor: pointer; margin-top: 15px; transition: background 0.2s; font-size: 0.95rem; }
    .btn:active { transform: scale(0.98); }
    .audio-notice { font-size: 0.75rem; color: #f59e0b; text-align: center; margin-top: 8px; }
  </style>
</head>
<body>
  <div class="container">
    <div class="header">
      <h1>CarePulse Telemetry</h1>
      <p>AI Wearable & Gait Analysis Platform</p>
    </div>

    <div class="card">
      <div id="status-box" class="status-banner status-normal">PATIENT STABLE</div>
      <div id="audio-hint" class="audio-notice">Tap anywhere on the screen once to enable audio alarms!</div>
      
      <div class="grid">
        <div class="metric">
          <div class="metric-title">Gait Variance</div>
          <div id="var-val" class="metric-val">0.00 g²</div>
        </div>
        <div class="metric">
          <div class="metric-title">Body Sway RMS</div>
          <div id="sway-val" class="metric-val">0.00 deg/s</div>
        </div>
      </div>
    </div>

    <div class="card">
      <div class="row">
        <span style="color: #94a3b8;">Assigned Location</span>
        <span id="room-val" style="font-weight: 600; color: #38bdf8;">-</span>
      </div>
      <div class="row">
        <span style="color: #94a3b8;">Last System Event</span>
        <span id="time-val" style="font-weight: 600;">None</span>
      </div>
      <button class="btn" onclick="clearAlert()">Acknowledge / Clear Alert</button>
    </div>
  </div>

  <script>
    let audioCtx = null;
    let alarmInterval = null;
    let isAlarmPlaying = false;

    // Enable Web Audio API on first user touch/click
    document.body.addEventListener('click', () => {
      if (!audioCtx) {
        audioCtx = new (window.AudioContext || window.webkitAudioContext)();
        document.getElementById('audio-hint').style.display = 'none';
      }
    }, { once: true });

    function startSiren() {
      if (isAlarmPlaying || !audioCtx) return;
      isAlarmPlaying = true;
      
      alarmInterval = setInterval(() => {
        if (!isAlarmPlaying) return;
        let osc = audioCtx.createOscillator();
        let gain = audioCtx.createGain();
        osc.type = 'sawtooth';
        
        // Alternating pitch siren effect (880Hz to 440Hz)
        osc.frequency.setValueAtTime(880, audioCtx.currentTime);
        osc.frequency.exponentialRampToValueAtTime(440, audioCtx.currentTime + 0.25);
        
        gain.gain.setValueAtTime(0.3, audioCtx.currentTime);
        gain.gain.exponentialRampToValueAtTime(0.01, audioCtx.currentTime + 0.25);
        
        osc.connect(gain);
        gain.connect(audioCtx.destination);
        
        osc.start();
        osc.stop(audioCtx.currentTime + 0.25);
      }, 300);
    }

    function stopSiren() {
      isAlarmPlaying = false;
      if (alarmInterval) clearInterval(alarmInterval);
    }

    function clearAlert() {
      stopSiren();
      fetch('/clear');
    }

    setInterval(() => {
      fetch('/telemetry')
        .then(res => res.json())
        .then(data => {
          let box = document.getElementById("status-box");
          document.getElementById("room-val").innerText = data.room;
          document.getElementById("time-val").innerText = data.last_time;
          document.getElementById("var-val").innerText = data.variance + " g²";
          document.getElementById("sway-val").innerText = data.sway + " deg/s";

          if (data.status === "NORMAL") {
            box.innerText = "PATIENT STABLE";
            box.className = "status-banner status-normal";
            stopSiren();
          } else {
            if (data.status === "PRE_FALL_GAIT") {
              box.innerText = "GAIT INSTABILITY DETECTED!";
              box.className = "status-banner status-warning";
            } else if (data.status === "SOS") {
              box.innerText = "MANUAL SOS TRIGGERED!";
              box.className = "status-banner status-danger";
            } else if (data.status === "FALL") {
              box.innerText = "FALL IMPACT DETECTED!";
              box.className = "status-banner status-danger";
            }
            startSiren(); // Play noise on phone
          }
        });
    }, 400);
  </script>
</body>
</html>
)rawliteral";

void readMPU6050();
void processGaitAnalysis(float total_acc, float gyro_mag);
String determineRoomLocation();

void handleRoot() { server.send(200, "text/html", INDEX_HTML); }

void handleTelemetry() {
  String json = "{\"status\":\"" + currentStatus + 
                "\",\"room\":\"" + currentRoom + 
                "\",\"last_time\":\"" + lastAlertTime + 
                "\",\"variance\":\"" + String(currentVariance, 2) + 
                "\",\"sway\":\"" + String(currentSway, 2) + "\"}";
  server.send(200, "application/json", json);
}

void handleClear() {
  currentStatus = "NORMAL";
  server.send(200, "text/plain", "OK");
}

void setup() {
  Serial.begin(115200);
  pinMode(SOS_BUTTON_PIN, INPUT_PULLUP);

  Wire.begin(MPU_SDA, MPU_SCL);
  Wire.beginTransmission(MPU6050_ADDR);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);

  for (int i = 0; i < GAIT_WINDOW_SIZE; i++) accelBuffer[i] = 1.0;

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\n[SYSTEM READY]");
  Serial.print("Open Portal at: http://");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.on("/telemetry", handleTelemetry);
  server.on("/clear", handleClear);
  server.begin();
}

void loop() {
  server.handleClient();

  if (digitalRead(SOS_BUTTON_PIN) == LOW) {
    if (millis() - lastDebounceTime > debounceDelay) {
      lastDebounceTime = millis();
      currentStatus = "SOS";
      currentRoom = determineRoomLocation();
      lastAlertTime = "Just Now";
      Serial.println("[ALERT] SOS Triggered!");
    }
  }

  readMPU6050();
  
  float ax_g = ax / 16384.0;
  float ay_g = ay / 16384.0;
  float az_g = az / 16384.0;
  float total_acc = sqrt(ax_g * ax_g + ay_g * ay_g + az_g * az_g);

  float gx_dps = gx / 131.0;
  float gy_dps = gy / 131.0;
  float gz_dps = gz / 131.0;
  float gyro_mag = sqrt(gx_dps * gx_dps + gy_dps * gy_dps + gz_dps * gz_dps);

  // ---------------- REAL / FAKE FALL DETECTION ----------------
static bool inFreeFall = false;
static unsigned long freeFallStart = 0;

// Detect free fall
if (total_acc < 0.35) {
    if (!inFreeFall) {
        inFreeFall = true;
        freeFallStart = millis();
    }
}

// Detect impact
if (total_acc > 2.8 && inFreeFall) {

    unsigned long airTime = millis() - freeFallStart;

    if (airTime >= 200) {
        // REAL FALL (higher drop)
        currentStatus = "FALL";
        currentRoom = determineRoomLocation();
        lastAlertTime = "Just Now";
        Serial.println("[ALERT] REAL FALL DETECTED!");
        delay(1000);
    }
    else {
        // FAKE FALL (small throw)
        Serial.println("[INFO] Fake Fall Detected - Ignored");
    }

    inFreeFall = false;
}
else {
    processGaitAnalysis(total_acc, gyro_mag);
}

  delay(10);
}

void processGaitAnalysis(float total_acc, float gyro_mag) {
  accelBuffer[bufferIndex] = total_acc;
  bufferIndex = (bufferIndex + 1) % GAIT_WINDOW_SIZE;

  float mean = 0.0;
  for (int i = 0; i < GAIT_WINDOW_SIZE; i++) mean += accelBuffer[i];
  mean /= (float)GAIT_WINDOW_SIZE;

  float varSum = 0.0;
  for (int i = 0; i < GAIT_WINDOW_SIZE; i++) {
    varSum += (accelBuffer[i] - mean) * (accelBuffer[i] - mean);
  }
  currentVariance = varSum / (float)GAIT_WINDOW_SIZE;
  currentSway = gyro_mag;

  if (currentVariance > 0.35 && currentVariance < 1.6 && currentStatus == "NORMAL") {
    currentStatus = "PRE_FALL_GAIT";
    currentRoom = determineRoomLocation();
    lastAlertTime = "Just Now";
    Serial.println("[GAIT] Instability Warning Triggered!");
  }
}

void readMPU6050() {
  Wire.beginTransmission(MPU6050_ADDR);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU6050_ADDR, 14, true);

  ax = Wire.read() << 8 | Wire.read();
  ay = Wire.read() << 8 | Wire.read();
  az = Wire.read() << 8 | Wire.read();
  Wire.read() << 8 | Wire.read();
  gx = Wire.read() << 8 | Wire.read();
  gy = Wire.read() << 8 | Wire.read();
  gz = Wire.read() << 8 | Wire.read();
}

String determineRoomLocation() {
  if (WiFi.status() != WL_CONNECTED) return "Room 102 - East Wing";
  int rssi = WiFi.RSSI();
  if (rssi > -60) return "Room 101 - Living Room";
  if (rssi > -75) return "Room 102 - Bedroom";
  return "Hallway Area";
}