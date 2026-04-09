#include <Servo.h>

Servo servo180;
Servo servo360;
const int buttonPin = 2;

void setup() {
  //servo360.attach(10);
  servo180.attach(9);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    servo180.write(180);
    servo360.write(180);
  } else {
    servo180.write(0);
    servo360.write(90);
  }
}
