#include <Arduino.h>

int btnPin = 3;
int btnState = 1;
int ledPin = 12;

void setup() {
    pinMode(btnPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    btnState = digitalRead(btnPin);
    if(btnState == LOW){
        digitalWrite(ledPin, HIGH);
    } else{
        digitalWrite(ledPin, LOW);
    }
    Serial.println(btnState);
    delay(1000);
}
