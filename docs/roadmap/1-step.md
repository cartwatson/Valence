# Valence: Requirements Gathering and Analysis

This document outlines the requirements gathering and analysis step.

## **1. Define the Scope and Goals:**

### **Project Scope:**

- **Objective:** Develop a system capable of tracking vehicles and potentially individuals in a given area using a combination of FPGA, Raspberry Pi, sensors, while maintaining a hardware agnostic architecture.
- **Functionality:** The system should be able to capture, process, and analyze real-time data to identify and track targets.

### **Goals:**

- **Real-time Tracking:** The system should provide real-time tracking capabilities.
- **Accuracy:** Prioritize accurate tracking and minimize false positives/negatives.
- **Extensibility:** Design the system to be scalable and completely hardware agnostic throught the use of interfaces.

## **2. Understand Hardware Capabilities:**

### **Hardware Components:**

- **FPGA (Xilinx Basys 3):** For image processing and complex computations.
- **Raspberry Pi 2:** To coordinate between sensors and FPGA, and for communication.
- **Sensors:** Various sensors for capturing data (e.g., cameras, motion sensors).

### **Capabilities:**

- **Ensure ease of integration.**
- Assess the processing power, memory, and capabilities of each hardware component.
- Ensure compatibility between components.

## **3. Software Requirements:**

### **Programming Language:**

- **C++:** Chosen for its performance and compatibility with embedded systems.

### **Image Processing Algorithms:**

- Research suitable image processing and tracking algorithms.
- Ensure algorithms can run efficiently on the chosen hardware.

## **4. Performance Metrics and Goals:**

[Metrics](/docs/roadmap/1-step-metrics.md)

## **5. Constraints and Limitations:**

- Evaluate any limitations in hardware, software, or time constraints.
- Plan for mitigations or alternatives where possible.
