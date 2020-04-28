#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    Serial.println("Hello Clion Arduino Support...");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(10000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(10000);
}