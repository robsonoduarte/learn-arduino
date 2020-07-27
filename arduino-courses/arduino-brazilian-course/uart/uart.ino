#include <Arduino.h>


void setup() {
    Serial.begin(9600);
}

void loop() {
    if(Serial.available()){
        String msg = Serial.readString();
        msg.reserve(0);
        Serial.println();
        for (int i = msg.length(); i >= 0 ; --i) {
            Serial.print(msg.charAt(i));
        }
    }
}