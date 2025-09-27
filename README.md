# Traffic-light-controller
Project: Traffic Light Controller using Arduino
Overview
This document presents the tutorial and technical documentation for the Arduino-based Traffic Light Controller mini-project. The aim of this project is to design and simulate a simple embedded system that replicates the operation of a real-world traffic signal. Using an Arduino Uno, three LEDs are controlled in timed intervals to represent the Red (Stop), Yellow (Ready), and Green (Go) lights.
The project was implemented and verified through simulation using  the Arduino UNO R3 Platform in Tinkercad Circuits . It provides a clear example of combining basic electronic components with microcontroller programming to achieve a working system.
Project Deliverables
A circuit schematic created and simulated using Arduino Uno R3. A demonstration video and screenshot of the simulation:
•	https://drive.google.com/file/d/1HS6Ii5GSLePh78CmPK2lWP6ciaEdP5W1/view?usp=drivesdk
•	https://drive.google.com/file/d/1b6htagBzOmh_QsP6G3IsaacKHyBtunJI/view?usp=drivesdk

This documentation, written as a tutorial to help replicate and understand the project.
1.System Requirements and Components
The core of the system is the Arduino Uno R3 microcontroller. Three LEDs are used to represent the traffic lights: Red for stop, Yellow for transition, and Green for go. Each LED is connected with a 220Ω resistor to limit the current. The circuit is assembled on a breadboard using jumper wires to provide connections.
In summary, the components required are:
•	Arduino Uno R3 board
•	Three LEDs (Red, Yellow, Green)
•	Three 220Ω resistors
•	Breadboard
•	Jumper wires
2.Circuit Implementation and Wiring Guide
The circuit is straightforward and divided into three LED outputs, each connected to the Arduino.The Red LED is connected to digital pin 13 through a 220Ω resistor. The cathode is connected to ground.
The Yellow LED is connected to digital pin 12 through a 220Ω resistor. The cathode is connected to ground.
The Green LED is connected to digital pin 11 through a 220Ω resistor. The cathode is connected to ground.
All LEDs share a common ground connection with the Arduino. A schematic diagram of the circuit should be provided for clarity.
3.Programming Logic
The Arduino program defines three output pins corresponding to the LEDs. The setup function initializes these pins, while the loop function manages the timed switching sequence.
The Red LED is turned on for five seconds to indicate stop.
The Yellow LED is then turned on for two seconds to indicate a transition state.
Finally, the Green LED is turned on for five seconds to allow movement.
This cycle repeats indefinitely.
4.Source Code
// Traffic Light Controller Project
// Author: [Your Name]
// Date: [MM/DD/YYYY]
int red = 13;
int yellow = 12;
int green = 11;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop() {
  // Red ON for 5 seconds
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);
 // Yellow ON for 2 seconds
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
// Green ON for 5 seconds
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
}
5.Testing and Verification
The project was tested through simulation. The results confirmed that the LEDs turned on and off in the intended sequence, with accurate delays between transitions.
1.The Red LED stayed on for five seconds, signaling vehicles to stop.
2.The Yellow LED followed for two seconds, providing a transition warning.
3.The Green LED stayed on for five seconds, signaling vehicles to go.
4.The sequence repeated continuously, as expected in a real-world traffic signal.
This validated that the system correctly follows the programmed timing logic.
6.Applications
The Traffic Light Controller is a simple yet practical project for understanding the fundamentals of embedded systems. It can be used as:

•	A beginner-level learning project for Arduino and digital electronics.
•	A foundation for more complex traffic management systems.
•	A teaching tool for introducing control logic, sequencing, and timing in embedded systems

