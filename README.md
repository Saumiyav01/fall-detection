```markdown
# ESP32-Based Edge AI Fall Detection System

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Platform: ESP32](https://img.shields.io/badge/Platform-ESP32-blue.svg)](https://www.espressif.com/)
[![Framework: FreeRTOS](https://img.shields.io/badge/OS-FreeRTOS-green.svg)](https://www.freertos.org/)
[![AI: TensorFlow Lite](https://img.shields.io/badge/AI-TensorFlow%20Lite%20Micro-orange.svg)](https://www.tensorflow.org/lite/micro)

An autonomous, real-time edge AI fall detection and environmental monitoring system powered by a dual-core ESP32 microcontroller. The device executes a quantized **1D Convolutional Neural Network (1D-CNN)** locally on-device using TensorFlow Lite for Microcontrollers, achieving high accuracy without relying on continuous cloud connectivity or privacy-invasive video cameras.

---

## 🚀 Key Features

* **Autonomous Edge Intelligence:** Executes 1D-CNN tensor inference directly on-device in $\sim 20\text{ ms}$, ensuring complete user data privacy and zero dependence on cloud servers.
* **Dual-Core FreeRTOS Task Isolation:** 
  * *Core 1:* Handles high-frequency 50 Hz motion data sampling from the MPU6050 accelerometer/gyroscope and real-time inference.
  * *Core 0:* Manages asynchronous Wi-Fi/MQTT telemetry bursts, DHT11 environmental polling, and manual SOS button monitoring.
* **Low False-Positive Rate:** Successfully differentiates between high-impact Activities of Daily Living (ADLs) and true falls, reducing false alarms to $\sim 4.1\%$.
* **Multi-Parametric Safety:** Includes a tactile physical emergency push-button (manual SOS) and real-time room temperature/humidity tracking via the DHT11 sensor.
* **Instant Event-Driven Telemetry:** Transmits high-priority emergency JSON payloads via MQTT over local Wi-Fi the moment a fall or distress event is verified.

---

## 🛠️ Hardware Architecture & Components

| Component | Function / Role |
| :--- | :--- |
| **ESP32 NodeMCU / DevKit** | Dual-core Tensilica Xtensa microcontroller (FreeRTOS, Wi-Fi). |
| **MPU6050 Sensor** | Tri-axial accelerometer and gyroscope (50 Hz motion data collection). |
| **DHT11 Sensor** | Ambient temperature and humidity environmental monitoring. |
| **TP4056 Module** | Lithium-Polymer battery charger and power management circuit. |
| **Tactile Push Button** | Physical manual override trigger for instant emergency SOS. |

---

## 📊 Performance Summary

| Evaluation Parameter | Threshold-Based | Cloud-Dependent | Proposed Edge AI 1D-CNN |
| :--- | :--- | :--- | :--- |
| **Processing Location** | Microcontroller | Remote Cloud Server | **ESP32 Dual-Core (Edge)** |
| **Average Latency** | $< 5\text{ ms}$ | $1200\text{ ms}$ | **$20\text{ ms}$** |
| **Classification Accuracy**| $71.0\%$ | $95.2\%$ | **$94.8\%$** |
| **False Positive Rate** | $19.5\%$ | $4.2\%$ | **$4.1\%$** |
| **Network Dependency** | None | High (Continuous stream) | **Autonomous (Event bursts)** |

---

## 📂 Repository Structure

```text
├── firmware/
│   ├── src/                 # C++ FreeRTOS tasks and sensor drivers
│   ├── model/               # Quantized TensorFlow Lite model (.tflite arrays)
│   └── include/             # Pin configurations and network headers
├── dataset/                 # Sample accelerometer/gyroscope training data
├── docs/                    # Complete PBL project report and schematics
└── README.md

```

---

## ⚙️ Getting Started & Installation

### Prerequisites

* [Arduino IDE](https://www.arduino.cc/) or [PlatformIO](https://platformio.org/) installed.
* ESP32 Board Support package installed in your development environment.
* Required Libraries:
* `TensorFlowLite_ESP32`
* `Adafruit_MPU6050`
* `DHT sensor library`
* `PubSubClient` (for MQTT communication)



### Pin Configuration

* **MPU6050 (I2C):** SDA $\rightarrow$ GPIO 21, SCL $\rightarrow$ GPIO 22
* **DHT11 (Data):** GPIO 4
* **Manual SOS Button:** GPIO 18 (configured with internal pull-up)

### Flashing the Firmware

1. Clone this repository:
```bash
git clone [https://github.com/your-username/esp32-edge-ai-fall-detection.git](https://github.com/your-username/esp32-edge-ai-fall-detection.git)

```


2. Open the `firmware/` directory in your IDE.
3. Configure your Wi-Fi credentials and MQTT Broker IP in `include/config.h`.
4. Compile and flash the code to your ESP32 development board.

---

## 📄 License

This project is licensed under the terms of the [MIT License](https://www.google.com/search?q=LICENSE).

```

```
