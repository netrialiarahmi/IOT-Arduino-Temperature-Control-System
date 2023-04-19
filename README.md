# IOT-Temperature-Monitoring-Device
This project is a simple temperature control system using an Arduino board and a DHT22 temperature and humidity sensor. The system controls a heater using a relay module, and turns it on or off depending on the temperature reading from the sensor.

## Hardware Requirements
* Arduino board
* DHT22 temperature and humidity sensor
* Relay module
* Jumper wires
* Breadboard
## Software Requirements
* Arduino IDE
## Installation
1. Connect the DHT22 sensor to the Arduino board using jumper wires as follows:
* VCC to 5V
* GND to GND
* Data to pin 2
2. Connect the relay module to the Arduino board using jumper wires as follows:
* VCC to 5V
* GND to GND
* IN to pin 13
3. Download and install the Arduino IDE from the official website.
4. Open the IDE and copy the code from the arduino_temperature_control.ino file in this repository.
5. Upload the code to the Arduino board using the IDE.

## Usage
1. Open the Serial Monitor in the IDE to see the temperature readings from the sensor.
2. Set the desired temperature threshold by changing the setpoint variable in the code.
3. The system will turn on the heater when the temperature reading is below the threshold, and turn it off when the temperature is above the threshold.
