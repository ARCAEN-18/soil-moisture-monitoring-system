# Soil Moisture Monitoring System using Arduino


## 📌 Overview
This project demonstrates a **Soil Moisture Monitoring System** using an **Arduino Uno**. The system measures soil moisture levels using a soil moisture sensor and displays the readings on an **LCD screen**. Based on the moisture value, different **LED indicators** are activated, and a **buzzer alarm** is triggered in dry conditions.

This project is useful in **smart agriculture** and **automated irrigation systems** to monitor soil health and prevent crop damage.

---

## 🎯 Objectives
- Measure soil moisture levels accurately
- Display real-time moisture values on an LCD
- Indicate soil condition using LEDs
- Trigger an alarm during critical dry conditions

---
## 🧪 Simulation (Tinkercad)
The complete circuit and working simulation of this project was implemented and tested using Tinkercad.

🔗 **Tinkercad Project Link:**  
https://www.tinkercad.com/things/lB5zjp6IaZY-frantic-jabanblorr?sharecode=5Ky8xPo0IINr8nFFdUKR83KbrlZ9vp5e4gFfW6hA7z0

## 🛠️ Components Used
- Arduino Uno  
- Soil Moisture Sensor  
- 16x2 LCD Display  
- Blue LED (WET condition)  
- Orange LED (NORMAL condition)  
- Red LED (DRY condition)  
- Buzzer  
- Resistors  
- Jumper Wires  
- Breadboard  

---

## ⚙️ Working Principle
1. The soil moisture sensor reads the moisture content of the soil.
2. The Arduino processes the sensor value and displays it on the LCD.
3. Based on predefined thresholds, LEDs and buzzer respond accordingly.

---

## 🚦 Moisture Conditions & Output

| Moisture Value | Soil Condition | Output |
|---------------|---------------|--------|
| > 500 | WET | Blue LED ON |
| 151 – 499 | NORMAL | Orange LED ON |
| < 150 | DRY | Red LED ON + Buzzer ON |

---

## 🧪 Experimental Results
- The system accurately distinguishes between **wet, normal, and dry** soil conditions.
- Visual feedback through LEDs allows quick identification of soil status.
- The buzzer provides an alert during dry conditions to indicate immediate action is required.

---

## 📊 Applications
- Smart agriculture systems
- Automated irrigation control
- Plant monitoring systems
- Home gardening automation

---

## 🔮 Future Improvements
- Integrate a relay to automatically control a water pump
- Add IoT connectivity for remote monitoring
- Display soil status on a mobile app or web dashboard
- Use solar power for energy efficiency

---

## 💻 Technologies Used
- Arduino Programming (C/C++)
- Embedded Systems
- Sensors and Actuators

---

## 📄 License
This project is developed for academic and learning purposes.
