# 🩸 Arduino-Based Hemodialysis Simulation Hardware

An open-source **Arduino-powered hemodialysis simulation system** designed for biomedical education and device prototyping. This project enables **real-time monitoring of fluid status, vital signs, and environmental conditions**, and features **automated pump and alarm control**, simulating essential aspects of clinical hemodialysis. 🏥⚙️

---

## 📷 Project Overview

![WhatsApp Image 2025-05-03 at 01 09 07_4ff20c40](https://github.com/user-attachments/assets/741a0906-68f7-4cef-9c1e-d2a08f2c86dd)


🔹 **Microcontroller**: Arduino Uno  
🔹 **Fluid Management**: Dual pump relay system  
🔹 **Sensors**: DHT11 (Temperature & Humidity), IR Proximity (Fluid Detection), Pulse Sensor (Heart Rate)  
🔹 **Display**: 16x2 LCD with I2C  
🔹 **User Alerts**: Buzzer for abnormal readings  
🔹 **Automated Control**: Relay switches for pumps and fail-safes  

---

## 🛠️ Features

✅ **Simulated Fluid Monitoring** – Infrared sensor detects fluid presence and approximates volume  
✅ **Vital Sign Monitoring** – Pulse sensor tracks simulated patient heart rate  
✅ **Environment Sensing** – DHT11 monitors temperature and humidity  
✅ **Automated Safety Protocols** – Activates buzzer and stops pumps on abnormal readings  
✅ **Real-time Display** – LCD provides live data readouts  
✅ **Educational & Modular** – Excellent for research, prototyping, and classroom demos  

---

## 🔩 Hardware & Components

| Component         | Quantity | Description                    |
|-------------------|----------|--------------------------------|
| Arduino Uno       | 1        | Main controller                |
| Peristaltic Pump  | 3        | Fluid in/out simulation        |
| DHT11 Sensor      | 1        | Temperature & Humidity         |
| IR Sensor         | 1        | Fluid/Proximity detection      |
| LCD 16x2 (I2C)    | 1        | User interface display         |
| Relay Module      | 4        | Pump activation/control        |
| Buzzer            | 1        | Abnormal parameter alarm       |
| Power Supply      | 1        | 12V adapter                    |

📌 **Frame & Tubing Setup**:  
- Use custom supports and fluid containers to simulate the dialysis environment.

![WhatsApp Image 2025-05-03 at 01 11 24_bb2efa43](https://github.com/user-attachments/assets/fe67a55b-5b3b-4803-b2a5-528cf2d5f481)

---

## 🔌 Circuit Diagram

![Circuit Diagram](https://github.com/user-attachments/assets/dd1adc35-467b-4bb7-ade1-eb80379e7cf0)

---

## 🚀 How to Set Up

### **1️⃣ Hardware Setup**
- Assemble pumps, relays, and sensors as shown in the **circuit diagram**  
- Secure all fluid lines and reservoir containers  
- Connect the Arduino board and ensure stable power  

### **2️⃣ Software Installation**
- Install **Arduino IDE** and required libraries:
  ```bash
  Install LiquidCrystal_I2C.h
  Install PulseSensorPlayground.h
  Install Bonezegei_DHT11.h
  ```

### **3️⃣ Operating the Simulator**
- **Automated Fluid Cycling** → Pumps operate based on sensor readings  
- **Patient Simulation** → Pulse and environmental data displayed in real time  
- **Safety Alerts** → Buzzer sounds and pumps halt on unsafe vitals or environmental parameters  

---

## 🎉 Special Thanks
Special thanks to our highly talented team for their expertise across software and hardware development:  
**Ward Selkini, Hassan Badawy, Ziad Osama, Mostafa Hany.**  
This simulator exists thanks to your creativity, commitment, and technical excellence! 👏

---

## 🔗 Contact & Social Media

📩 **Email**: anas.bayoumi05@eng-st.cu.edu.eg  
🌐 **LinkedIn**: [Connect with me](https://www.linkedin.com/in/anas-mohamed-716959313/)  
📱 **WhatsApp**: [201143896165](https://wa.me/+201143896165)
