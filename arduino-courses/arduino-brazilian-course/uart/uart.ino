#include <Arduino.h>

#define ledPin  8

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    if (Serial.available()) {
        char letter = Serial.read();
        switch (letter) {
            case 'H': { // HIGH
                digitalWrite(ledPin, HIGH);
                break;
            }
            case 'L': { // LOW
                digitalWrite(ledPin, LOW);
                break;
            }
            case 'B': { // BLINK
                int x = 0;
                while (x <= 10) {
                    digitalWrite(ledPin, !digitalRead(ledPin));
                    digitalWrite(ledPin, digitalRead(ledPin));
                    delay(1000);
                    x++;
                }
                break;
            }
        }
    }
}