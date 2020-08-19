#include <Arduino.h>

class PushButton {
public:
    PushButton(byte btnPin, int debounceDelay = 200) : btnPin(btnPin), debounceDelay(debounceDelay) {
        pinMode(btnPin, INPUT_PULLUP);
    }
    void btnLoop() {
        bool btnState = !digitalRead(btnPin);
        if ((millis() - btnDebounce) > debounceDelay) {
            if (btnState && !btnLastState) {
                btnPressed = true;
                btnDebounce = millis();
            }
        }
        btnLastState = btnState;
    }
    bool pressed() {
        return btnPressed;
    }

private:
    unsigned long btnDebounce;
    byte btnPin;
    bool btnPressed;
    bool btnLastState;
    int debounceDelay;
};

byte pinLed = 7;
byte btnPin = 8;
byte counter;

PushButton pushButton(btnPin);

void setup() {
    pinMode(pinLed, OUTPUT);
}

void loop() {
    pushButton.btnLoop();

    if (pushButton.pressed()) {
        counter++;
    }

    if (counter >= 5) {
        digitalWrite(pinLed, HIGH);
    } else {
        digitalWrite(pinLed, LOW);
        counter = 0;
    }
}