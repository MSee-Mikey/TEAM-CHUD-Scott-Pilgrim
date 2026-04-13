#include <Servo.h>

Servo servo1801;
Servo servo1802;
Servo servo360;
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int ledPin = 9;

void setup() {
  //servo360.attach(10);
  servo1801.attach(8);
  servo1802.attach(7);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
digitalWrite(ledPin, HIGH);

  //first servo, works with first evil ex on 1st platform
  if (digitalRead(buttonPin1) == HIGH) {
    servo1801.write(180);
  } else {
    servo1801.write(90);
  }
//second servo, works with second evil ex on 3rd platform
  if (digitalRead(buttonPin2) == HIGH) {
    servo1802.write(180);
  } else {
    servo1802.write(90);
  }
}
