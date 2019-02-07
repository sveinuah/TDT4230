#pragma once

// I recommend closing this file right now.
// You'll only find despair here
// And cries of "WHY"
// Proceed at your own risk.

const std::vector<double> keyFrameTimeStamps =
        {0, 0.98,

         1.570, 2.102, // block 0
         2.658, 3.229,
         3.781, 4.349,
         4.926, 5.562,
         6.083, 6.630,
         7.177, 7.733,
         8.343, 8.838,
         9.436, 9.974,
         10.506, 11.086,
         11.660, 12.210,

         12.729, 13.333,
         13.916, 14.402,
         14.979, 15.526,
         16.102, 16.611,
         17.158, 17.725,
         18.285, 18.864,
         19.408, 19.963,
         20.482, 21.041,
         21.585, 22.141,
         22.697, 23.286,

         23.808, 24.340,
         24.750, 25.447,
         26.000, 26.575,
         27.134, 27.684,
         28.227, 28.775,
         29.359, 29.928,
         30.485, 31.076,
         31.603, 32.176,
         32.721, 33.284,
         33.808, 34.388,

         34.962, 35.514,
         36.125, 36.704,
         37.281, 37.849,
         38.370, 38.948,
         39.500, 40.009,
         40.551, 41.198,
         41.692, 42.274,
         42.840, 43.383,
         43.940, 44.516,
         45.062, 45.610,

         46.189, 46.732,
         47.314, 47.875,
         48.441, 49.023,
         49.589, 50.138,
         50.675, 51.237,
         51.767, 52.312,
         52.882, 53.439,
         53.970, 54.578,
         55.121, 55.592,
         56.112, 56.691,

         57.179, 57.663, // block 5
         58.223, 58.735,
         59.293, 59.790,
         60.327, 60.822,
         61.328, 61.862,
         62.375, 62.869,
         63.362, 63.830,
         64.365, 64.880,
         65.342, 65.900,
         66.386, 66.883,

         67.375, 67.860,
         68.364, 68.835,
         69.343, 69.970,
         70.340, 70.857,
         71.301, 71.860,
         72.301, 72.768,
         73.257, 73.732,
         74.213, 74.685,
         75.148, 75.649,
         76.127, 76.573,

         77.049, 77.514,
         77.986, 78.433,
         78.898, 79.384,
         79.850, 80.309,
         80.746, 81.208,
         81.638, 82.057,
         82.503, 82.946,
         83.410, 83.847,
         84.263, 84.683,
         85.169, 85.551,

         85.979, 86.417,
         86.862, 87.272,
         87.715, 88.121,
         88.538, 88.944,
         89.404, 89.761,
         90.214, 90.610,
         91.034, 91.427,
         91.842, 92.239,
         92.645, 92.991,
         93.359, 93.722,

         94.095, 94.495,
         94.874, 95.242,
         95.605, 95.978,
         96.351, 96.714,
         97.098, 97.461,
         97.883, 98.240,
         98.602, 98.986,
         99.468, 99.760,
         100.123, 100.442,
         100.831, 101.189,

         101.611, 102.011, // Block 10
         102.336, 102.612,
         102.953, 103.331,
         103.710, 104.046,
         104.408, 104.787,
         105.187, 105.479,
         105.847, 106.188,
         106.475, 106.854,
         107.162, 107.536,
         107.968, 108.239,

         108.661, 108.953,
         109.262, 109.581,
         109.927, 110.273,
         110.652, 110.988,
         111.312, 111.642,
         112.000, 112.330,
         112.660, 113.033,
         113.314, 113.639,
         113.958, 114.310,
         114.656, 115.040,

         115.365, 115.690,
         116.031, 116.350,
         116.669, 116.999,
         117.302, 117.638,
         117.962, 118.287,
         118.628, 118.925,
         119.250, 119.569,
         119.937, 120.257,
         120.565, 120.868,
         121.252, 121.533,

         121.880, 122.210,
         122.540, 122.827,
         123.146, 123.427,
         123.757, 124.060,
         124.407, 124.715,
         125.023, 125.364,
         125.673, 125.927,
         126.273, 126.555,
         126.896, 127.204,
         127.491, 127.788,

         128.097, 128.378,
         128.714, 128.963,
         129.325, 129.569,
         129.872, 130.164,

         130.667, 130.877, 131.132,
         133.654, 133.842, 134.054,
         134.568, 134.768, 135.034,
         137.468, 137.707, 137.939,
         138.388, 138.648, 138.902,
         139.346, 139.590, 139.908,
         139.379, 139.590, 139.871,

         140.098, 140.352,
         140.574, 140.850,
         141.105, 141.343,

         144.286, 144.367, 144.595,

         9999999};
const std::vector<KeyFrameAction> keyFrameDirections =
        {BOTTOM, TOP,

         BOTTOM, TOP, // Block 0
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP, // Block 5
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP, // Block 10
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         TOP, BOTTOM, TOP,
         TOP, BOTTOM, TOP,
         TOP, BOTTOM, TOP,
         TOP, BOTTOM, TOP,
         TOP, BOTTOM, TOP,
         TOP, BOTTOM, TOP,
         TOP, BOTTOM, TOP,

         BOTTOM, TOP,
         BOTTOM, TOP,
         BOTTOM, TOP,

         TOP, BOTTOM, TOP,

         BOTTOM,};