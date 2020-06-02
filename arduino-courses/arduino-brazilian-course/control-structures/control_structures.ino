#include <Arduino.h>

int btnBlinkPin = 2;
int btnLightUpPin = 3;

int ledRedPin = 8;
int ledGreenPin = 9;
int ledBluePin = 10;

void blinkLed(int pin);
void lightUp(int pin);

void setup() {
    pinMode(btnBlinkPin, INPUT_PULLUP);
    pinMode(btnLightUpPin, INPUT_PULLUP);
    pinMode(ledRedPin, OUTPUT);
    pinMode(ledGreenPin, OUTPUT);
    pinMode(ledBluePin,OUTPUT);
}

void loop() {
    bool btnBlinkState = digitalRead(btnBlinkPin);
    bool btnLightUpState = digitalRead(btnLightUpPin);
    if(!btnBlinkState){
        blinkLed(ledRedPin);
        blinkLed(ledGreenPin);
        blinkLed(ledBluePin);
    }else if (!btnLightUpState){
        lightUp(ledRedPin);
        lightUp(ledGreenPin);
        lightUp(ledBluePin);
    }
}

void lightUp(int pin) {
    digitalWrite(pin, HIGH);
}

void blinkLed(int pin) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
}

