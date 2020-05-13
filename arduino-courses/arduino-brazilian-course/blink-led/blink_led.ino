#include <Arduino.h>


void blinkLed(int i, int seconds);

void setup() {
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10, OUTPUT);

    int x = 0;
    while (x <= 5){
        blinkLed(8, 1000);
        x++;
    }
}

void loop() {
    blinkLed(8, 1000);
    blinkLed(9, 1000);
    blinkLed(10, 1000);
}

void blinkLed(int pin, int seconds) {
    digitalWrite(pin, HIGH);
    delay(seconds);
    digitalWrite(pin, LOW);
    delay(seconds);
}