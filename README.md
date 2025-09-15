# Arduino Temperature Controlled Fan

This project simulates a **temperature-controlled fan** using an Arduino Uno, a **3-pin NTC temperature sensor**, and an LED as the fan.  

![Project Screenshot](Screenshot%202025-09-15%20130730.png)

## Features
- Fan OFF when temperature < 25°C  
- Fan runs at 50% speed when 25°C ≤ temperature < 30°C  
- Fan runs at 100% speed when temperature ≥ 30°C  
- Live temperature and fan state printed on Serial Monitor  

## Components
- Arduino Uno  
- 3-pin NTC Thermistor  
- LED (simulating fan)  
- Optional resistor for LED protection  

## Wokwi Simulation
You can view and run this project directly in Wokwi:  
[Open in Wokwi](https://wokwi.com/projects/442145903738942465)

## Connections
- NTC VCC → +5V  
- NTC GND → GND  
- NTC OUT → A0  
- LED Anode → D13  
- LED Cathode → GND  

## How to Run
1. Open the `.ino` file in Arduino IDE or use Wokwi simulation link.  
2. Upload the code to Arduino Uno (or simulate in Wokwi).  
3. Monitor the Serial output to see live temperature and fan state.
