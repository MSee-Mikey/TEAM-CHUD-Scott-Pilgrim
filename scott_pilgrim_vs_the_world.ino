#include <Servo.h>

Servo servo180;
Servo servo360;
const int buttonPin = 2;
const int ledPin = 3;
const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9; 

void setup() {
  //servo360.attach(10);
  //servo180.attach(8);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    servo180.write(180); //
    servo360.write(180);
    digitalWrite(ledPin, HIGH); // standard red LED
    //setColor(255, 50, 0); // light yellow color
    //setColor(100, 70, 90); // white
    setColor(100, 10, 0); //light orange (?)

  } else {
    servo180.write(90);
    servo360.write(90);
    digitalWrite(ledPin, LOW);
    setColor(0, 0, 0);
  }
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin,  greenValue); 
  analogWrite(bluePin, blueValue);
}
