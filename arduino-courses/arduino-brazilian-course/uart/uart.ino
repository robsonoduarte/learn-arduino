#include <Arduino.h>

void setup() {
    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        char letter = Serial.read();
        switch (letter) {
            case 'H': { // HIGH
                digitalWrite(LED_BUILTIN, HIGH);
                break;
            }
            case 'L': { // LOW
                digitalWrite(LED_BUILTIN, LOW);
                break;
            }
            case 'B': { // BLINK
                int x = 0;
                while (x <= 10) {
                    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
                    digitalWrite(LED_BUILTIN, digitalRead(LED_BUILTIN));
                    delay(1000);
                    x++;
                }
                break;
            }
        }
    }
}