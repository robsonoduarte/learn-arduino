#include <Arduino.h>

int pinLedRead = 8;
int pinLedGreen = 9;
int pinLedBlue = 10;

int pinBtnBlink = 3;
int pinBtnFade = 4;

void blinkLed(int pin);

void fadeLed(int pin);

void turnOffLed(int pin);

void setup() {
    pinMode(pinLedRead, OUTPUT);
    pinMode(pinLedGreen, OUTPUT);
    pinMode(pinLedBlue, OUTPUT);

    pinMode(pinBtnBlink, INPUT_PULLUP);
    pinMode(pinBtnFade, INPUT_PULLUP);
}


void loop() {
    blinkLed(pinLedRead);
    blinkLed(pinLedGreen);
    blinkLed(pinLedBlue);

/*    fadeLed(pinLedRead);
    fadeLed(pinLedGreen);
    fadeLed(pinLedBlue);*/

/*    turnOffLed(pinLedRead);
    turnOffLed(pinLedGreen);
    turnOffLed(pinLedBlue);*/
}

void blinkLed(int pin) {
    int pinState = digitalRead(pin);
    if(pinState){
        digitalWrite(pin, LOW);
    } else{
        digitalWrite(pin, HIGH);
    }
    delay(1000);
}

void fadeLed(int pin) {
/*    int fadeAmount = 10;
    int brightness = 0;

    while (brightness <= 1024){
        brightness = brightness + fadeAmount;
        analogWrite(pin, brightness);
        delay(150);
    }*/
}

void turnOffLed(int pin) {
    digitalWrite(pin, LOW);
    delay(1000);
}




