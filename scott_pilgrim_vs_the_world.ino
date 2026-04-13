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

const int ledPin = 9;

void setup() {
  //servo360.attach(10);
  servo1801.attach(8);
  servo1802.attach(9);
  servo1803.attach(10);

  servo3601.attach(11);
  servo3601.attach(12);
  servo3601.attach(13);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
}

void loop() {
//digitalWrite(ledPin, LOW);

  //first servo, works with first evil ex on 1st platform
  if (digitalRead(buttonPin1) == HIGH) {
    servo1801.write(180);
    Serial.println("Button Pressed");
  } else {
    servo1801.write(90);
    Serial.println("Button Released");
  }

//second servo, works with second evil ex on 3rd platform
  if (digitalRead(buttonPin2) == HIGH) {
    //servo1801.write(180);
  } else {
    //servo1801.write(90);
  }

  //3rd servo
    if (digitalRead(buttonPin3) == HIGH) {
    //servo1801.write(180);
  } else {
    //servo1801.write(90);
  }

  //4th servo
    if (digitalRead(buttonPin4) == HIGH) {
    //servo1801.write(180);
  } else {
    //servo1801.write(90);
  }

      if (digitalRead(buttonPin5) == HIGH) {
    //servo1801.write(180);
  } else {
    //servo1801.write(90);
  }

      if (digitalRead(buttonPin6) == HIGH) {
    //servo1801.write(180);
  } else {
    //servo1801.write(90);
  }
  
}
