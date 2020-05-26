#include <Arduino.h>

int btnRedPin = 3;
int btnBluePin = 4;
int ledRedPin = 10;
int ledBluePin = 11;

void setup() {
    pinMode(btnRedPin, INPUT_PULLUP);
    pinMode(btnBluePin, INPUT_PULLUP);
    pinMode(ledRedPin, OUTPUT);
    pinMode(ledBluePin, OUTPUT);
}

void loop() {
    int btnReadState = digitalRead(btnRedPin);
    int btnBlueState = digitalRead(btnBluePin);
    digitalWrite(ledRedPin, btnReadState);
    digitalWrite(ledBluePin, btnBlueState);
}
