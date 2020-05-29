#include <Arduino.h>

int pin = 9;

void setup() {
    pinMode(pin, OUTPUT);
}

void loop() {
    int analogState = analogRead(A0);
    analogWrite(pin, analogState);
}