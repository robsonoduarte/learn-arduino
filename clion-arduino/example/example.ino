#include <Arduino.h>

void setup() {
 Serial.begin(9600);
}

void loop() {
    Serial.print("Hi Arduino");
    delay(1000);
}
