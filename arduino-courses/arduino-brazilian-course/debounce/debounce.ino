#include <Arduino.h>

int pinLedRead = 8;
int pinLedGreen = 9;
int pinLedBlue = 10;

int pinBtnBlink = 4;
int pinBtnStopBlink = 3;

int blink;

int stateBtnBlink;
int stateBtnStopBlink;
int lastStateBtnBlink = HIGH;
int lastStateBtnStopBlink = HIGH;

unsigned long debounceDelay = 300;
unsigned long lastDebounceTimeBtnBlink;
unsigned long lastDebounceTimeBtnStopBlink;

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

    if (readingBtnBlink != lastStateBtnBlink ) {
        lastDebounceTimeBtnBlink = millis();
    }

    if (readingBtnStopBlink != lastStateBtnStopBlink) {
        lastDebounceTimeBtnStopBlink = millis();
    }


    if ((millis() - lastDebounceTimeBtnBlink) > debounceDelay) {
        if (readingBtnBlink != stateBtnBlink) {
            stateBtnBlink = readingBtnBlink;
            if (stateBtnBlink == LOW) {
                blink = HIGH;
            }

        }
    }

    if ((millis() - lastDebounceTimeBtnStopBlink) > debounceDelay) {
        if (readingBtnStopBlink != stateBtnStopBlink) {
            stateBtnStopBlink = readingBtnStopBlink;
            if (stateBtnStopBlink == LOW) {
                blink = LOW;
            }
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