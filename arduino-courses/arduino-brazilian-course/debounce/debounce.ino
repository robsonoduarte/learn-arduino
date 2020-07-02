#include <Arduino.h>

int pinLedRead = 8;
int pinLedGreen = 9;
int pinLedBlue = 10;

int pinBtnBlink = 4;
int pinBtnStopBlink = 3;

bool blink;

int lastStateBtnBlink = HIGH;
int lastStateBtnStopBlink = HIGH;

unsigned long debounceDelay = 50;
unsigned long lastDebounceTime = 0;

void blinkLed(int pin);

void setup() {
    pinMode(pinLedRead, OUTPUT);
    pinMode(pinLedGreen, OUTPUT);
    pinMode(pinLedBlue, OUTPUT);

    pinMode(pinBtnBlink, INPUT_PULLUP);
    pinMode(pinBtnStopBlink, INPUT_PULLUP);

}

void loop() {
    int readingBtnBlink = digitalRead(pinBtnBlink);
    int readingBtnStopBlink = digitalRead(pinBtnStopBlink);

    if (readingBtnBlink != lastStateBtnBlink || readingBtnStopBlink != lastStateBtnStopBlink) {
        lastDebounceTime = millis();
    }

    if ((millis() - lastDebounceTime) > debounceDelay) {
        if (readingBtnBlink == LOW) {
            blink = true;
        }
        if (readingBtnStopBlink == LOW) {
            blink = false;
        }
    }

    if (blink) {
        blinkLed(pinLedRead);
        blinkLed(pinLedGreen);
        blinkLed(pinLedBlue);
    }

    lastStateBtnBlink = readingBtnBlink;
    lastStateBtnStopBlink = readingBtnStopBlink;
}

void blinkLed(int pin) {
    int pinState = digitalRead(pin);
    if (pinState) {
        digitalWrite(pin, LOW);
    } else {
        digitalWrite(pin, HIGH);
    }
    delay(500);
}