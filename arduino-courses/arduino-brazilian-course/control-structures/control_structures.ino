#include <Arduino.h>

int btnBlinkPin = 2;

int ledRedPin = 8;
int ledGreenPin = 9;
int ledBluePin = 10;


void blinkLed(int pin);

void setup() {
    pinMode(btnBlinkPin, INPUT_PULLUP);
    pinMode(ledRedPin, OUTPUT);
    pinMode(ledGreenPin, OUTPUT);
    pinMode(ledBluePin,OUTPUT);
}

void loop() {
    bool btnBlinkState = digitalRead(btnBlinkPin);
    if(!btnBlinkState){
        blinkLed(ledRedPin);
        blinkLed(ledGreenPin);
        blinkLed(ledBluePin);
    }
}

void blinkLed(int pin) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
}

