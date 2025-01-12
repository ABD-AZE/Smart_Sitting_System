# Smart_Sitting_System 

The **Smart Sitting System** is an Arduino-based project designed to monitor and improve sitting posture by analyzing spine and leg alignment. It uses force-sensitive resistors (FSRs) and ultrasonic sensors to detect improper posture and alerts the user through a buzzer.  

## Features  
- **Posture Monitoring**: Detects spine and leg posture using FSRs and ultrasonic sensors.  
- **Real-time Alerts**: Activates a buzzer when improper posture is detected, prompting the user to correct it.  
- **Compact Design**: Integrates seamlessly with a chair for continuous posture feedback.  

## Components  
- Arduino board  
- 4 Force-Sensitive Resistors (FSRs)  
- 2 Ultrasonic Sensors (HC-SR04)  
- 1 Buzzer  
- Connecting wires  

## How It Works  
1. **FSR Sensors**: Measure pressure distribution to detect uneven sitting or leg placement.  
2. **Ultrasonic Sensors**: Measure distances to identify spine misalignment.  
3. **Alert System**: If a significant posture deviation is detected, the buzzer sounds to notify the user.  

## Code Explanation  
- **Posture Analysis**: The Arduino reads data from FSRs and ultrasonic sensors.  
- **Threshold Checks**: If pressure or distance values exceed predefined limits, the system identifies it as poor posture.  
- **Alert Mechanism**: A buzzer is triggered for real-time feedback.  

## Setup Instructions  
1. Connect the components to the Arduino as per the pin configuration in the code.  
2. Upload the provided Arduino code to the board.  
3. Place the sensors appropriately on the chair to monitor spine and leg posture.  
4. Power the system and observe posture corrections through buzzer alerts.  

This project provides a simple yet effective solution to encourage better sitting habits and prevent posture-related issues.
