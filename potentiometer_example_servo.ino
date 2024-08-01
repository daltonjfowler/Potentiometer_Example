#include <Wire.h>
#include <Servo.h>

int twistPin = 2; //potentiometer plugged into analog 2
int twist = 0; //value to hold potentiometer reading

Servo tail;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
tail.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
twist = analogRead(twistPin);
twist = map(twist, 0,1023,0,180);
tail.write(twist);
delay(10);

}