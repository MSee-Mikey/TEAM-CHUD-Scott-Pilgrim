#include <Servo.h>

Servo servo1801;
Servo servo1802;
Servo servo1803;

Servo servo3601;
Servo servo3602;
Servo servo3603;

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;
const int buttonPin6 = 7;

const int ledPin = 1;

void setup() {
  servo1801.attach(8);
  servo1802.attach(9);
  servo1803.attach(10);

  servo3601.attach(11);
  servo3602.attach(12);
  servo3603.attach(13);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);

  pinMode(ledPin, OUTPUT);
}

void loop() {
//digitalWrite(ledPin, HIGH);

  //first servo, works with matthew
  if (digitalRead(buttonPin1) == HIGH) {
    servo1801.write(180);
    Serial.println("Button Pressed");
  } else {
    servo1801.write(90);
    Serial.println("Button Released");
  }

//second servo, works with vegan council
  if (digitalRead(buttonPin2) == HIGH) {
    servo1802.write(180);
    digitalWrite(ledPin, LOW);
  } else {
    servo1802.write(0);
    digitalWrite(ledPin, HIGH);
  }

  //3rd servo, works with ramona's arms
    if (digitalRead(buttonPin3) == HIGH) {
    servo3601.write(180);
  } else {
    servo3601.write(90);
  }

  //4th servo, works with music
    if (digitalRead(buttonPin4) == HIGH) {
    servo3602.write(180);
  } else {
    servo3602.write(90);
  }

  //5th servo, gideon falls behind the pyramid
      if (digitalRead(buttonPin5) == HIGH) {
    servo1803.write(180);
    servo3603.write(180);
  } else {
    servo1803.write(90);
    servo3603.write(90);
  }
}
