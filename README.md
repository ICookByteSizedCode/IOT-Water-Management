# IOT-Water-Management
An IOT based Water Level Management system.

For this project, you will need the following pieces of hardware:

1. Nodemcu ESP8266 
<img src="images/71ZUXpbgc1L.jpg" width="200" height="200">
2. Ultrasonic sensor
<img src="images/_yN0cJOpsQ9.jpeg" width="200" height="200">
3. Relay Module
<img src="images/396edf9efda0b0051a98ec6ce5b640a300490a92.jpeg" width="200" height="200">
4. Jumper Wires
<img src="images/11026-Jumper_Wires_Standard_7in._M_M_-_30_AWG__30_Pack_-01.jpg" width="200" height="200">
5. Breadboard
<img src="images/64-06.jpg" width="200" height="200">

Steps to connect the wires:
1. Connect the VCC pin of the water level sensor with the Vin pin of the NodeMCU.
2. Attach the GND pin of the water level sensor with the GND pin of the NodeMCU.
3. Join the signal pin of the water level sensor with the analog-0 pin of the NodeMCU.
4. Connect the GND pin of the module with the GND pin of the NodeMCU.
5. Join the R pin of the module with the digital-7 pin of the NodeMCU.
6. Attach the G pin of the module with the digital-6 pin of the NodeMCU.
7. Connect the B pin of the module with the digital-5 pin of the NodeMCU.

To execute this project, download the Blynk app. Upload main.cpp to your NodeMCU and then run the program.
