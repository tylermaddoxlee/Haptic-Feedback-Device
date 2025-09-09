# Haptic Feedback Navigation System
A wearable assistive device designed to help visually impaired users safely navigate stairs, drop-offs, obstacles, and approaching individuals using ultrasonic sensors and vibration feedback.

## About
This project was developed as part of a semester-long team course (8 members, Fall 2024). 
The device is a hands-free wearable designed to assist visually impaired users in safely navigating their environment. 
It uses ultrasonic sensors to detect drop-offs, stairs, and obstacles, with vibration motors providing intuitive haptic feedback.
My contributions focused on programming Arduino firmware in C++, integrating ultrasonic sensors, and refining vibration patterns for intuitive guidance.

## Features

- Detects obstacles in front, left, right, and rear.

- Identifies stairs and drop-offs.

- Relays haptic feedback to user via vibration motors.

Portable and hands-free design.
## Tech Stack
- Arduino Uno  
- C++ (Arduino IDE)  
- HC-SR04 ultrasonic sensors  
- Vibration motors  
- 3D-printed housing (if applicable)

## Results
- Successfully detected stairs, drop-offs, and approaching individuals in controlled tests.
- Iteratively refined sensor placement and vibration feedback to improve accuracy and user clarity.
- Device consistently provided timely warnings for front, left, right, and rear obstacles.

## Code Snippet
Below is a simplified Arduino C++ loop used for reading ultrasonic sensors and triggering vibration motors:
<img width="586" height="731" alt="image" src="https://github.com/user-attachments/assets/f2485c24-9683-4c6d-9bf6-45c53153c086" />


## Credits
Developed as part of an 8-person academic project (Fall 2024).  
My contributions included programming Arduino firmware in C++, integrating ultrasonic sensors, and refining vibration patterns.  
