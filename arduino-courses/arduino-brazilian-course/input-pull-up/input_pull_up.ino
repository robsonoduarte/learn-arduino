#include <Arduino.h>

int btnRedPin = 3;
int btnBluePin = 4;
int ledRedPin = 10;
int ledBluePin = 10;

void setup() {
    pinMode(btnRedPin, INPUT_PULLUP);
    pinMode(btnBluePin, INPUT_PULLUP);
    pinMode(ledRedPin, OUTPUT);
    pinMode(ledBluePin, OUTPUT);
}

void loop() {
    int btnReadState = digitalRead(btnRedPin);
    int btnBlueState = digitalRead(btnBlueState);
    digitalWrite(ledRedPin, btnReadState);
    digitalWrite(ledBluePin, btnBlueState);
}
