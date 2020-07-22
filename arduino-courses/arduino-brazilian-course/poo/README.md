### C++ POO

Simple example how we can use the [C++ P00](https://www.w3schools.com/cpp/cpp_oop.asp) on Arduino Sketch.


##### [Declare Classe](https://github.com/robsonoduarte/learn-arduino/blob/80398666c1e4c9c5828e7ac40aba2ac18ddd7a12/arduino-courses/arduino-brazilian-course/poo/poo.ino#L3):
```c++
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
```

#### Using Class:
```c++
PushButton pushButton(btnPin);
....
pushButton.btnLoop();

if (pushButton.pressed()) {
    counter++;
}
```
