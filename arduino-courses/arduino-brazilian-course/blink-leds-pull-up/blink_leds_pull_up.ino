#include <Arduino.h>

int btnPin = 3;
int ledRedPin = 8;
int ledGreenPin = 9;
int ledBluePin = 10;
bool btnState ;

void blinkLed(int i, int i1);

void setup() {
    pinMode(btnPin, INPUT);
    pinMode(ledRedPin, OUTPUT);
    pinMode(ledGreenPin, OUTPUT);
    pinMode(ledBluePin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    btnState = digitalRead(btnPin);
    if(!btnState){
        blinkLed(ledRedPin, 1000);
        blinkLed(ledGreenPin, 1000);
        blinkLed(ledBluePin, 1000);
    }
    Serial.println(btnState);
    delay(1000);
}

void blinkLed(int pin, int seconds) {
    digitalWrite(pin, HIGH);
    delay(seconds);
    digitalWrite(pin, LOW);
    delay(seconds);
}
