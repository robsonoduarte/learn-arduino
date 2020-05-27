#include <Arduino.h>

// https://www.arduino.cc/reference/en/language/variables/data-types/array/
int pins[3] = {1, 2, 3};

// https://www.arduino.cc/reference/en/language/variables/data-types/bool/
bool btnState = false;

// https://www.arduino.cc/reference/en/language/variables/data-types/boolean/
boolean pinState = true;

// https://www.arduino.cc/reference/en/language/variables/data-types/byte/
byte b = 255;

//https://www.arduino.cc/reference/en/language/variables/data-types/char/
char c = 'A';

// stop https://www.arduino.cc/reference/en/language/variables/data-types/double/

void setup() {
    Serial.begin(9600);

    int pin = pins[1];
    Serial.print("Accessing/Get value of position two on array => ");
    Serial.println(pin);

    Serial.print("bool variable => ");
    Serial.println(btnState);

    Serial.print("boolean variable => ");
    Serial.println(pinState);

    Serial.print("byte variable => ");
    Serial.println(b);

    Serial.print("char variable => ");
    Serial.println(c);

}

void loop() {

}