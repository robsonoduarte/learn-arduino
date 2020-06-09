#include <Arduino.h>

int pinRedLed = 9;
int pinBlueLed = 10;

void setup() {
    pinMode(pinRedLed, OUTPUT);
    pinMode(pinBlueLed, OUTPUT);
}

void loop() {
    int analogState = analogRead(A0);
    analogWrite(pinRedLed, map(analogState, 0, 1023, 0, 255));
    analogWrite(pinBlueLed, map(analogState, 0, 1023, 255, 0));
}