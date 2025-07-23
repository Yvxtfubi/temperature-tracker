
# Temperature-Based State Tracker

## Description
An Arduino-based project that simulates a heater system using a temperature-based state tracker. It reads analog input from a potentiometer to simulate temperature, controls a simulated heater (LED), and logs the system state to the serial monitor.

## System States
- **Idle:** Temperature < 25°C
- **Heating:** 25°C ≤ Temperature < 45°C
- **Stabilizing:** 45°C ≤ Temperature < 49°C
- **Target Reached:** 49°C ≤ Temperature ≤ 51°C
- **Overheat:** Temperature > 51°C

## Features
- Real-time temperature reading using analog input
- State machine logic for heater control
- Serial logging of temperature and current state
- LED indicator for heater ON/OFF status
- (Optional) LCD/Buzzer for user interface

## How It Works
- A potentiometer is used to simulate varying temperatures on analog pin A0
- Based on temperature range, the system determines its state and updates the heater and LED accordingly
- Temperature and current state are printed to the Serial Monitor every 1 second

## Hardware Setup
- **Potentiometer:** Middle pin to A0, sides to 5V and GND
- **Heater (LED):** Digital Pin 7
- **Status LED:** Digital Pin 13

## Simulation Link
[Click here to view Wokwi simulation](https://wokwi.com/projects/YOUR-LINK-HERE)
