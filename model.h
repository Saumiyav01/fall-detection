#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[3];
    double var1[3];
    double var2[3];
    double var3[3];
    double var4[3];
    double var5[3];
    double var6[3];
    double var7[3];
    double var8[3];
    double var9[3];
    double var10[3];
    double var11[3];
    double var12[3];
    if (input[2] <= 3.3578743934631348) {
        if (input[1] <= 32.276546478271484) {
            if (input[4] <= 0.889794647693634) {
                if (input[0] <= 9.97873592376709) {
                    if (input[2] <= 0.032426923513412476) {
                        memcpy(var12, (double[]){0.0, 0.07462686567164178, 0.9253731343283582}, 3 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.30337078651685395, 0.0449438202247191, 0.651685393258427}, 3 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 12.102817058563232) {
                        memcpy(var12, (double[]){0.9166666666666666, 0.05555555555555555, 0.027777777777777776}, 3 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.3333333333333333, 0.0, 0.6666666666666666}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 179.75344848632812) {
                    if (input[2] <= 0.6447467505931854) {
                        memcpy(var12, (double[]){0.19696969696969696, 0.0, 0.803030303030303}, 3 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.02564102564102564, 0.0, 0.9743589743589743}, 3 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 2.552037477493286) {
                        memcpy(var12, (double[]){0.7777777777777778, 0.05555555555555555, 0.16666666666666666}, 3 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.23076923076923078, 0.11538461538461539, 0.6538461538461539}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var12, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
        }
    } else {
        if (input[2] <= 8.50497817993164) {
            if (input[3] <= 1299.2918090820312) {
                if (input[1] <= 18.29869842529297) {
                    memcpy(var12, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[0] <= 9.487436771392822) {
                        memcpy(var12, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.038461538461538464, 0.9615384615384616, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 46.49862098693848) {
                    memcpy(var12, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[2] <= 6.423699617385864) {
                        memcpy(var12, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 4.536978006362915) {
                memcpy(var12, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                if (input[4] <= 9.113923072814941) {
                    if (input[4] <= 9.08412790298462) {
                        memcpy(var12, (double[]){0.8809523809523809, 0.047619047619047616, 0.07142857142857142}, 3 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 9.903746128082275) {
                        memcpy(var12, (double[]){0.6, 0.0, 0.4}, 3 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.98125, 0.0, 0.01875}, 3 * sizeof(double));
                    }
                }
            }
        }
    }
    double var13[3];
    if (input[1] <= 15.451623916625977) {
        if (input[0] <= 9.962826251983643) {
            if (input[4] <= 0.9476657807826996) {
                if (input[2] <= 0.1090802513062954) {
                    memcpy(var13, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    if (input[3] <= 43.24144172668457) {
                        memcpy(var13, (double[]){0.65, 0.15, 0.2}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.1346153846153846, 0.0, 0.8653846153846154}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 179.75344848632812) {
                    if (input[0] <= 9.55654001235962) {
                        memcpy(var13, (double[]){0.2222222222222222, 0.0, 0.7777777777777778}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.012307692307692308, 0.0, 0.9876923076923076}, 3 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 184.2279815673828) {
                        memcpy(var13, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.2, 0.0, 0.8}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 0.7879093289375305) {
                if (input[2] <= 0.37400612235069275) {
                    if (input[1] <= 10.028396129608154) {
                        memcpy(var13, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.8378378378378378, 0.08108108108108109, 0.08108108108108109}, 3 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 1.4977505207061768) {
                        memcpy(var13, (double[]){0.9, 0.0, 0.1}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.08, 0.0, 0.92}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 167.6448745727539) {
                    if (input[4] <= 2.285037636756897) {
                        memcpy(var13, (double[]){0.021621621621621623, 0.0, 0.9783783783783784}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.2, 0.0, 0.8}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 10.091708660125732) {
                        memcpy(var13, (double[]){0.3, 0.0, 0.7}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[4] <= 8.137676477432251) {
            if (input[3] <= 1577.8336181640625) {
                if (input[1] <= 24.328245162963867) {
                    if (input[2] <= 4.063459873199463) {
                        memcpy(var13, (double[]){0.5, 0.13333333333333333, 0.36666666666666664}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.1, 0.9, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 10.890026569366455) {
                        memcpy(var13, (double[]){0.16666666666666666, 0.8333333333333334, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 5.723956346511841) {
                    if (input[4] <= 5.88602089881897) {
                        memcpy(var13, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 12.148783206939697) {
                        memcpy(var13, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 11.566317081451416) {
                if (input[3] <= 3751.5411376953125) {
                    memcpy(var13, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[0] <= 10.607179164886475) {
                        memcpy(var13, (double[]){0.7142857142857143, 0.0, 0.2857142857142857}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var13, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var12, var13, 3, var11);
    double var14[3];
    if (input[3] <= 190.5630645751953) {
        if (input[1] <= 27.614299297332764) {
            if (input[2] <= 0.6150904297828674) {
                if (input[0] <= 9.95589303970337) {
                    if (input[4] <= 0.04661509208381176) {
                        memcpy(var14, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.36363636363636365, 0.0, 0.6363636363636364}, 3 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 0.026088706217706203) {
                        memcpy(var14, (double[]){0.09090909090909091, 0.9090909090909091, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.7049180327868853, 0.06557377049180328, 0.22950819672131148}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 10.337416648864746) {
                    if (input[4] <= 0.6931353807449341) {
                        memcpy(var14, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.013059701492537313, 0.0, 0.9869402985074627}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 10.47101640701294) {
                        memcpy(var14, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var14, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
        }
    } else {
        if (input[3] <= 1279.5643920898438) {
            if (input[0] <= 11.038522243499756) {
                if (input[3] <= 201.72614288330078) {
                    memcpy(var14, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[2] <= 4.0862016677856445) {
                        memcpy(var14, (double[]){0.38461538461538464, 0.11538461538461539, 0.5}, 3 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.15789473684210525, 0.8421052631578947, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 2.949488043785095) {
                    if (input[4] <= 4.5720566511154175) {
                        memcpy(var14, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var14, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            }
        } else {
            if (input[4] <= 7.197258710861206) {
                if (input[0] <= 12.155959129333496) {
                    if (input[4] <= 6.620019435882568) {
                        memcpy(var14, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.25, 0.0, 0.75}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var14, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                if (input[3] <= 3898.7532958984375) {
                    memcpy(var14, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[1] <= 86.81488418579102) {
                        memcpy(var14, (double[]){0.6956521739130435, 0.0, 0.30434782608695654}, 3 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var11, var14, 3, var10);
    double var15[3];
    if (input[1] <= 15.451623916625977) {
        if (input[1] <= 11.023396492004395) {
            if (input[0] <= 9.95589303970337) {
                if (input[2] <= 0.04775454290211201) {
                    if (input[3] <= 5.905674934387207) {
                        memcpy(var15, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.05555555555555555, 0.0, 0.9444444444444444}, 3 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.6840444207191467) {
                        memcpy(var15, (double[]){0.5714285714285714, 0.19047619047619047, 0.23809523809523808}, 3 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.038461538461538464, 0.0, 0.9615384615384616}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.036062030121684074) {
                    memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[2] <= 0.4750816076993942) {
                        memcpy(var15, (double[]){0.8333333333333334, 0.0625, 0.10416666666666667}, 3 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 10.238128185272217) {
                if (input[4] <= 0.7317530810832977) {
                    if (input[2] <= 0.8319413363933563) {
                        memcpy(var15, (double[]){0.14285714285714285, 0.0, 0.8571428571428571}, 3 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 179.75344848632812) {
                        memcpy(var15, (double[]){0.023593466424682397, 0.0, 0.9764065335753176}, 3 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.3684210526315789, 0.0, 0.631578947368421}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 13.008018016815186) {
                    if (input[1] <= 12.093356132507324) {
                        memcpy(var15, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.6666666666666666, 0.0, 0.3333333333333333}, 3 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 171.95983123779297) {
                        memcpy(var15, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[3] <= 1155.7454833984375) {
            if (input[0] <= 11.116656303405762) {
                if (input[2] <= 4.0862016677856445) {
                    if (input[3] <= 321.84521484375) {
                        memcpy(var15, (double[]){0.38461538461538464, 0.6153846153846154, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.6363636363636364, 0.0, 0.36363636363636365}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        } else {
            if (input[0] <= 20.959859371185303) {
                if (input[4] <= 3.1945680379867554) {
                    memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[4] <= 9.113923072814941) {
                        memcpy(var15, (double[]){0.8870967741935484, 0.0, 0.11290322580645161}, 3 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var10, var15, 3, var9);
    double var16[3];
    if (input[3] <= 286.10902404785156) {
        if (input[1] <= 18.29869842529297) {
            if (input[2] <= 0.6150904297828674) {
                if (input[2] <= 0.04531107842922211) {
                    if (input[0] <= 9.963120460510254) {
                        memcpy(var16, (double[]){0.02040816326530612, 0.0, 0.9795918367346939}, 3 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.4666666666666667, 0.5333333333333333, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 1.360270082950592) {
                        memcpy(var16, (double[]){0.6565656565656566, 0.06060606060606061, 0.2828282828282828}, 3 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 183.63634490966797) {
                    if (input[1] <= 10.659780502319336) {
                        memcpy(var16, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.020072992700729927, 0.0, 0.9799270072992701}, 3 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 12.913742542266846) {
                        memcpy(var16, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.42857142857142855, 0.0, 0.5714285714285714}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var16, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
        }
    } else {
        if (input[4] <= 6.836940050125122) {
            if (input[1] <= 15.689754486083984) {
                if (input[4] <= 2.552037477493286) {
                    memcpy(var16, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[1] <= 14.626923084259033) {
                        memcpy(var16, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 11.139519214630127) {
                    if (input[3] <= 651.4622802734375) {
                        memcpy(var16, (double[]){0.09090909090909091, 0.9090909090909091, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.6206896551724138, 0.0, 0.3793103448275862}, 3 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 4313.4146728515625) {
                        memcpy(var16, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 27.762115001678467) {
                if (input[3] <= 3838.935302734375) {
                    memcpy(var16, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[2] <= 10.741090297698975) {
                        memcpy(var16, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var16, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var9, var16, 3, var8);
    double var17[3];
    if (input[4] <= 3.654043674468994) {
        if (input[3] <= 179.75344848632812) {
            if (input[1] <= 27.614299297332764) {
                if (input[4] <= 0.9471257925033569) {
                    if (input[2] <= 0.04531107842922211) {
                        memcpy(var17, (double[]){0.05263157894736842, 0.06315789473684211, 0.8842105263157894}, 3 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.38666666666666666, 0.04666666666666667, 0.5666666666666667}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 10.353792667388916) {
                        memcpy(var17, (double[]){0.02676864244741874, 0.0, 0.9732313575525813}, 3 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.3333333333333333, 0.0, 0.6666666666666666}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var17, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        } else {
            if (input[1] <= 15.868898391723633) {
                if (input[0] <= 9.952383041381836) {
                    if (input[0] <= 9.706840515136719) {
                        memcpy(var17, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.38461538461538464, 0.0, 0.6153846153846154}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 10.030301570892334) {
                        memcpy(var17, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.7, 0.0, 0.3}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 2.8960412740707397) {
                    memcpy(var17, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[4] <= 2.6337084770202637) {
                        memcpy(var17, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.07692307692307693, 0.9230769230769231, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= 35.35698699951172) {
            if (input[1] <= 25.12088966369629) {
                if (input[2] <= 5.303978443145752) {
                    if (input[0] <= 10.298397541046143) {
                        memcpy(var17, (double[]){0.2727272727272727, 0.09090909090909091, 0.6363636363636364}, 3 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.9090909090909091, 0.09090909090909091, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var17, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                if (input[2] <= 6.086429595947266) {
                    memcpy(var17, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    memcpy(var17, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 5.264405012130737) {
                memcpy(var17, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                if (input[0] <= 26.809503078460693) {
                    if (input[2] <= 5.875417947769165) {
                        memcpy(var17, (double[]){0.6, 0.0, 0.4}, 3 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.9866666666666667, 0.0, 0.013333333333333334}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var17, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var8, var17, 3, var7);
    double var18[3];
    if (input[1] <= 15.451623916625977) {
        if (input[4] <= 0.785873144865036) {
            if (input[0] <= 9.958073139190674) {
                if (input[2] <= 0.049790022894740105) {
                    if (input[2] <= 0.03154012467712164) {
                        memcpy(var18, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.1111111111111111, 0.0, 0.8888888888888888}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 9.888720989227295) {
                        memcpy(var18, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.6774193548387096, 0.0, 0.3225806451612903}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.036062030121684074) {
                    memcpy(var18, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[3] <= 260.4441680908203) {
                        memcpy(var18, (double[]){0.9302325581395349, 0.06976744186046512, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.25, 0.0, 0.75}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 11.126312255859375) {
                if (input[4] <= 0.9168171882629395) {
                    memcpy(var18, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[1] <= 11.042309761047363) {
                        memcpy(var18, (double[]){0.07692307692307693, 0.0, 0.9230769230769231}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.5, 0.0, 0.5}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 170.9626922607422) {
                    if (input[2] <= 0.6042979657649994) {
                        memcpy(var18, (double[]){0.5, 0.0, 0.5}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.018281535648994516, 0.0, 0.9817184643510055}, 3 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 1.2215652465820312) {
                        memcpy(var18, (double[]){0.7333333333333333, 0.0, 0.26666666666666666}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[4] <= 6.836940050125122) {
            if (input[3] <= 759.9535217285156) {
                if (input[2] <= 4.8169403076171875) {
                    if (input[0] <= 9.83619499206543) {
                        memcpy(var18, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.03773584905660377, 0.8490566037735849, 0.11320754716981132}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var18, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                if (input[0] <= 12.077088832855225) {
                    if (input[4] <= 6.276469469070435) {
                        memcpy(var18, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var18, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 2.7309166193008423) {
                memcpy(var18, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                if (input[2] <= 11.56601095199585) {
                    if (input[3] <= 3713.1607666015625) {
                        memcpy(var18, (double[]){0.9878048780487805, 0.012195121951219513, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.2727272727272727, 0.0, 0.7272727272727273}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var18, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var7, var18, 3, var6);
    double var19[3];
    if (input[4] <= 3.6254899501800537) {
        if (input[3] <= 180.6475372314453) {
            if (input[2] <= 0.6009297966957092) {
                if (input[4] <= 0.04586536064743996) {
                    if (input[4] <= 0.03405142389237881) {
                        memcpy(var19, (double[]){0.0, 0.6153846153846154, 0.38461538461538464}, 3 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.05555555555555555, 0.05555555555555555, 0.8888888888888888}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 9.903913021087646) {
                        memcpy(var19, (double[]){0.225, 0.0, 0.775}, 3 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.6407766990291263, 0.14563106796116504, 0.21359223300970873}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.675727128982544) {
                    if (input[2] <= 0.7474745213985443) {
                        memcpy(var19, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 1.0750605463981628) {
                        memcpy(var19, (double[]){0.05982905982905983, 0.004273504273504274, 0.9358974358974359}, 3 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.003194888178913738, 0.0, 0.9968051118210862}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 15.868898391723633) {
                if (input[0] <= 9.706840515136719) {
                    memcpy(var19, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    if (input[2] <= 0.5676172077655792) {
                        memcpy(var19, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.8846153846153846, 0.0, 0.11538461538461539}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        }
    } else {
        if (input[1] <= 30.68074131011963) {
            if (input[1] <= 24.38478374481201) {
                if (input[3] <= 798.8251953125) {
                    if (input[1] <= 19.07860565185547) {
                        memcpy(var19, (double[]){0.7, 0.0, 0.3}, 3 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.0, 0.5, 0.5}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var19, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                if (input[3] <= 956.9168090820312) {
                    memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    memcpy(var19, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                }
            }
        } else {
            if (input[4] <= 8.137676477432251) {
                if (input[2] <= 6.423922777175903) {
                    if (input[2] <= 5.274792909622192) {
                        memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.2, 0.0, 0.8}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 27.088707447052002) {
                        memcpy(var19, (double[]){0.9142857142857143, 0.0, 0.08571428571428572}, 3 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 11.56601095199585) {
                    if (input[3] <= 3751.5411376953125) {
                        memcpy(var19, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.5555555555555556, 0.0, 0.4444444444444444}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var19, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var6, var19, 3, var5);
    double var20[3];
    if (input[2] <= 2.1647136211395264) {
        if (input[1] <= 30.03412914276123) {
            if (input[1] <= 11.121498107910156) {
                if (input[1] <= 10.014702796936035) {
                    if (input[4] <= 0.045204680413007736) {
                        memcpy(var20, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){0.25, 0.0, 0.75}, 3 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 40.26105308532715) {
                        memcpy(var20, (double[]){0.5789473684210527, 0.15789473684210525, 0.2631578947368421}, 3 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){0.2833333333333333, 0.016666666666666666, 0.7}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 0.6042979657649994) {
                    if (input[0] <= 9.949089527130127) {
                        memcpy(var20, (double[]){0.07692307692307693, 0.0, 0.9230769230769231}, 3 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){0.875, 0.0, 0.125}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 9.985745429992676) {
                        memcpy(var20, (double[]){0.005763688760806916, 0.0, 0.9942363112391931}, 3 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){0.08571428571428572, 0.0, 0.9142857142857143}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var20, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
        }
    } else {
        if (input[3] <= 1535.271484375) {
            if (input[0] <= 11.580314636230469) {
                if (input[3] <= 645.7693176269531) {
                    if (input[2] <= 5.076882362365723) {
                        memcpy(var20, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 10.300485610961914) {
                        memcpy(var20, (double[]){0.375, 0.0, 0.625}, 3 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var20, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        } else {
            if (input[0] <= 28.67570924758911) {
                if (input[4] <= 3.7831664085388184) {
                    memcpy(var20, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[0] <= 10.838152885437012) {
                        memcpy(var20, (double[]){0.8627450980392157, 0.0, 0.13725490196078433}, 3 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var20, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var5, var20, 3, var4);
    double var21[3];
    if (input[1] <= 15.464745044708252) {
        if (input[0] <= 9.95589303970337) {
            if (input[2] <= 3.677375316619873) {
                if (input[2] <= 0.4982965439558029) {
                    if (input[2] <= 0.049790022894740105) {
                        memcpy(var21, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.4166666666666667, 0.027777777777777776, 0.5555555555555556}, 3 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.8911727368831635) {
                        memcpy(var21, (double[]){0.05714285714285714, 0.0, 0.9428571428571428}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.0030581039755351682, 0.0, 0.9969418960244648}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var21, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
            }
        } else {
            if (input[3] <= 40.56600570678711) {
                if (input[0] <= 9.98341178894043) {
                    if (input[1] <= 10.037201881408691) {
                        memcpy(var21, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 10.428173542022705) {
                        memcpy(var21, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.6666666666666666, 0.0, 0.3333333333333333}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 0.7267292737960815) {
                    if (input[4] <= 1.7542133927345276) {
                        memcpy(var21, (double[]){0.7941176470588235, 0.058823529411764705, 0.14705882352941177}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 10.242291450500488) {
                        memcpy(var21, (double[]){0.05405405405405406, 0.0, 0.9459459459459459}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.4166666666666667, 0.0, 0.5833333333333334}, 3 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[4] <= 6.836940050125122) {
            if (input[3] <= 1341.0184936523438) {
                if (input[0] <= 10.632120132446289) {
                    if (input[4] <= 6.452136278152466) {
                        memcpy(var21, (double[]){0.5833333333333334, 0.2916666666666667, 0.125}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 24.233763694763184) {
                        memcpy(var21, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 6.165204048156738) {
                    if (input[0] <= 19.900249481201172) {
                        memcpy(var21, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 26.6866397857666) {
                        memcpy(var21, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 27.0643572807312) {
                if (input[3] <= 3898.7532958984375) {
                    memcpy(var21, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[2] <= 11.98206901550293) {
                        memcpy(var21, (double[]){0.5, 0.0, 0.5}, 3 * sizeof(double));
                    } else {
                        memcpy(var21, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var21, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var4, var21, 3, var3);
    double var22[3];
    if (input[1] <= 15.451623916625977) {
        if (input[4] <= 0.889794647693634) {
            if (input[1] <= 10.014302730560303) {
                if (input[0] <= 9.930867195129395) {
                    if (input[4] <= 0.043013762682676315) {
                        memcpy(var22, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.5, 0.0, 0.5}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var22, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                }
            } else {
                if (input[2] <= 0.7855504155158997) {
                    if (input[4] <= 0.4653094708919525) {
                        memcpy(var22, (double[]){0.391304347826087, 0.08695652173913043, 0.5217391304347826}, 3 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.896551724137931, 0.034482758620689655, 0.06896551724137931}, 3 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 154.91063690185547) {
                        memcpy(var22, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.2, 0.0, 0.8}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 3.7474993467330933) {
                if (input[3] <= 183.63634490966797) {
                    if (input[1] <= 11.023396492004395) {
                        memcpy(var22, (double[]){0.19230769230769232, 0.0, 0.8076923076923077}, 3 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.028397565922920892, 0.0, 0.9716024340770791}, 3 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 1.2215652465820312) {
                        memcpy(var22, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 0.8970868289470673) {
                    memcpy(var22, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    memcpy(var22, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                }
            }
        }
    } else {
        if (input[3] <= 1279.5643920898438) {
            if (input[4] <= 6.535301208496094) {
                if (input[3] <= 365.7008819580078) {
                    if (input[1] <= 18.29869842529297) {
                        memcpy(var22, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 3.307003974914551) {
                        memcpy(var22, (double[]){0.4166666666666667, 0.5833333333333334, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.020833333333333332, 0.9791666666666666, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 10.676801204681396) {
                    memcpy(var22, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    if (input[1] <= 47.48480033874512) {
                        memcpy(var22, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[3] <= 2145.9443359375) {
                if (input[3] <= 2064.606689453125) {
                    memcpy(var22, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    memcpy(var22, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                }
            } else {
                if (input[0] <= 28.67570924758911) {
                    if (input[0] <= 10.84970998764038) {
                        memcpy(var22, (double[]){0.896551724137931, 0.0, 0.10344827586206896}, 3 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var22, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var3, var22, 3, var2);
    double var23[3];
    if (input[2] <= 2.5943104028701782) {
        if (input[0] <= 24.99589776992798) {
            if (input[2] <= 0.5841719806194305) {
                if (input[1] <= 10.014702796936035) {
                    memcpy(var23, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    if (input[0] <= 9.953782081604004) {
                        memcpy(var23, (double[]){0.25, 0.013157894736842105, 0.7368421052631579}, 3 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){0.64, 0.17333333333333334, 0.18666666666666668}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 170.9626922607422) {
                    if (input[0] <= 10.346778392791748) {
                        memcpy(var23, (double[]){0.015444015444015444, 0.0, 0.9845559845559846}, 3 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){0.2857142857142857, 0.0, 0.7142857142857143}, 3 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 1.2215652465820312) {
                        memcpy(var23, (double[]){0.84, 0.0, 0.16}, 3 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){0.22727272727272727, 0.045454545454545456, 0.7272727272727273}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var23, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
        }
    } else {
        if (input[4] <= 6.836940050125122) {
            if (input[4] <= 6.563399791717529) {
                if (input[3] <= 1345.6799926757812) {
                    if (input[0] <= 9.83619499206543) {
                        memcpy(var23, (double[]){0.8947368421052632, 0.0, 0.10526315789473684}, 3 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){0.01694915254237288, 0.9830508474576272, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 19.90742540359497) {
                        memcpy(var23, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var23, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        } else {
            if (input[4] <= 7.813459157943726) {
                if (input[2] <= 8.88518738746643) {
                    memcpy(var23, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    memcpy(var23, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                }
            } else {
                if (input[4] <= 9.113923072814941) {
                    if (input[3] <= 3944.2081298828125) {
                        memcpy(var23, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){0.6666666666666666, 0.0, 0.3333333333333333}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 9.903746128082275) {
                        memcpy(var23, (double[]){0.9, 0.0, 0.1}, 3 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var2, var23, 3, var1);
    mul_vector_number(var1, 0.08333333333333333, 3, var0);
    memcpy(output, var0, 3 * sizeof(double));
}
