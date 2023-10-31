# Valence: Performance Metrics

This document outlines key performance metrics for the Valence project, focusing on tracking accuracy, data integrity, and system performance.

## **1. Tracking Metrics**

### **Tracking Precision**

- **Definition:** The ratio of true positive tracks to the sum of true positives and false positives.
- **Formula:** Precision = $\frac{True Positives}{True Positives + False Positives}$
- **Target:** Achieve a precision rate above 95%.

### **Tracking Recall**

- **Definition:** The ratio of true positive tracks to the sum of true positives and false negatives.
- **Formula:** Recall = $\frac{True Positives}{True Positives + False Negatives}$
- **Target:** Maintain a recall rate above 90%.

## **2. Performance Metrics**

### **Frame Processing Time**

- **Definition:** Time taken to process a single frame of data from the sensors.
- **Unit:** Milliseconds per frame.
- **Target:** Keep processing time under 20 ms/frame.

### **Latency**

- **Definition:** Time elapsed between capturing data and displaying processed results.
- **Unit:** Milliseconds.
- **Target:** Median latency below 100 ms.

## **3. Reliability Metrics**

### **Data Integrity**

- **Definition:** The accuracy and consistency of data recorded and processed by the system.
- **Unit:** Error count or percentage.
- **Target:** Zero data integrity errors.
