# Smart Parking Management System 🚗

An Arduino-based embedded systems project designed to manage a smart parking entry gate. [cite_start]The system integrates hardware sensors and software logic to automate vehicle detection and access control. [cite: 4]

## 🌟 Overview
[cite_start]This project demonstrates the integration of multiple sensors and actuators to create a functional real-time system. [cite: 4] [cite_start]It manages a barrier (servo motor), provides audio-visual feedback, and monitors vehicle positioning. [cite: 11, 13]

## 🛠️ Hardware Components
The system utilizes the following components:
* [cite_start]**Microcontroller:** Arduino Board. [cite: 4]
* [cite_start]**Actuators:** * **Servo Motor:** Controls the parking barrier gate. [cite: 11]
  * [cite_start]**Buzzer:** Provides audible alerts upon vehicle detection. [cite: 11]
* [cite_start]**Sensors:** * **Analog Photo/Distance Sensors:** Detect vehicle presence and entry status. [cite: 11]
* [cite_start]**Indicators:** * **RGB LED:** Indicates system state changes. [cite: 11, 16]
  * [cite_start]**Status LED:** Toggles based on specific sensor input. [cite: 11, 16]

## 🔌 Pin Mapping
| Component | Pin | Function |
| :--- | :--- | :--- |
| **Servo** | 10 | [cite_start]Gate Mechanism [cite: 11] |
| **Buzzer** | 8 | [cite_start]Audio Alerts [cite: 11] |
| **RGB (R, G, B)** | 3, 5, 6 | [cite_start]Status Lighting [cite: 11] |
| **LED** | 4 | [cite_start]Occupancy Indicator [cite: 11] |
| **Sensor (Open)** | A0 | [cite_start]Gate Trigger [cite: 11] |
| **Sensor (Enter)**| A1 | [cite_start]Position Detection [cite: 11] |

## 🧠 Logic Flow
1. **Detection:** The system monitors the analog sensors. [cite_start]When a value drops below the threshold (550), it identifies a vehicle. [cite: 13, 16]
2. [cite_start]**Alert:** A buzzer sounds to notify the system of a new entry. [cite: 13]
3. [cite_start]**Barrier Action:** The Servo motor rotates from 0° to 90° to open the gate and then returns to close it. [cite: 14, 15]
4. [cite_start]**Visual Feedback:** * The **RGB LED** toggles between colors to indicate state changes. [cite: 16]
   * [cite_start]The **Status LED** lights up if the vehicle is actively on the entrance sensor. [cite: 16]

## 💻 Professional Background
[cite_start]This project was developed as part of a practical training in embedded systems, receiving a **perfect score of 100**. [cite: 4] [cite_start]It showcases proficiency in C/C++ for Arduino, hardware-software integration, and real-time logic design. [cite: 4]
