// C++ code
//
#include <Servo.h>  
// Create a servo object
Servo myServo;
// Define the servo signal pin
const int servoPin = 9;
void setup() {
// Attach the servo to the pin
myServo.attach(servoPin);
// Start the serial monitor for debugging
Serial.begin(9600);
}
void loop() {
// Move the servo to 0 degrees
myServo.write(0);
Serial.println("Servo at 0 degrees");
delay(1000);
// Move the servo to 90 degrees
myServo.write(90);
Serial.println("Servo at 90 degrees");
delay(1000);
// Move the servo to 180 degrees
myServo.write(180);
Serial.println("Servo at 180 degrees");
delay(1000);
}