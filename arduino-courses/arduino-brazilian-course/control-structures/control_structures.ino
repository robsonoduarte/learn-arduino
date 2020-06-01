#include <Arduino.h>

int btnPin = 3;
int ledPin = 12;

void setup() {
    pinMode(btnPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int btnState = digitalRead(btnPin);
    if(btnState == LOW){
        digitalWrite(ledPin, HIGH);
        Serial.println(btnState);
    } else{
        digitalWrite(ledPin, LOW);
        Serial.println(btnState);
    }
    delay(1000);
}
