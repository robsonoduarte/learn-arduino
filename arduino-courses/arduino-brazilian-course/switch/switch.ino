#include <Arduino.h>

int btnBlinkPin = 2;
int btnFadePin = 3;

int ledRedPin = 8;
int ledGreenPin = 9;
int ledBluePin = 10;

int brightness = 0;
int fadeAmount = 5;

void blinkLed(int pin);

void fadeLed(int pin);

void turnOffLed(int pin);

void setup() {
    pinMode(btnBlinkPin, INPUT_PULLUP);
    pinMode(btnFadePin, INPUT_PULLUP);

    pinMode(ledRedPin, OUTPUT);
    pinMode(ledGreenPin, OUTPUT);
    pinMode(ledBluePin, OUTPUT);
}

void loop() {

    int state = !digitalRead(btnBlinkPin) ?  1 : !digitalRead(btnFadePin) ? 2 : 0 ;

    switch (state) {
        case 1:{
            blinkLed(ledRedPin);
            blinkLed(ledGreenPin);
            blinkLed(ledBluePin);
            break;
        }
        case 2:{
            fadeLed(ledRedPin);
            fadeLed(ledGreenPin);
            fadeLed(ledBluePin);
            break;
        }
        default:{
            turnOffLed(ledRedPin);
            turnOffLed(ledGreenPin);
            turnOffLed(ledBluePin);
        }
    }
}

void turnOffLed(int pin) {
    digitalWrite(pin, LOW);
}

void fadeLed(int pin) {
    analogWrite(pin, brightness);
    brightness = brightness + fadeAmount;
    if (brightness <= 0 || brightness >= 255) {
        fadeAmount = -fadeAmount;
    }
    delay(50);
}

void blinkLed(int pin) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
}