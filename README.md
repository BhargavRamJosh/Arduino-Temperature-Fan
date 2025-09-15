# Arduino-Temperature-Fan
# Arduino Temperature Controlled Fan

This project simulates a temperature-controlled fan using an **Arduino Uno**, a **3-pin NTC sensor**, and an **LED** as the fan.

## Features
- Fan OFF when temperature < 25°C
- Fan runs at 50% speed when 25°C ≤ temperature < 30°C
- Fan runs at 100% speed when temperature ≥ 30°C
- Live temperature and fan state printed on Serial Monitor

## Components
- Arduino Uno
- 3-pin NTC Thermistor
- LED (simulating fan)
- Resistor (optional for LED protection)

## Wokwi Simulation
You can view and run this project directly in Wokwi:  
[Open in Wokwi]([https://wokwi.com/projects/new](https://wokwi.com/projects/442145903738942465))

## Connections
- NTC VCC → +5V  
- NTC GND → GND  
- NTC OUT → A0  
- LED Anode → D13  
- LED Cathode → GND
