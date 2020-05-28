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

//https://www.arduino.cc/reference/en/language/variables/data-types/double/
double d = 2.0;

//https://www.arduino.cc/reference/en/language/variables/data-types/float/
float f = 3.0;

//https://www.arduino.cc/reference/en/language/variables/data-types/int/
int i = 32767;

//https://www.arduino.cc/reference/en/language/variables/data-types/long/
long l = 2147483647;

//https://www.arduino.cc/reference/en/language/variables/data-types/short/
short s = -32768;

//https://www.arduino.cc/reference/en/language/variables/data-types/size_t/
size_t st = l;

//https://www.arduino.cc/reference/en/language/variables/data-types/string/
char cStr[8] = "Arduino";

//https://www.arduino.cc/reference/en/language/variables/data-types/stringobject/
String str = "Arduino";

//https://www.arduino.cc/reference/en/language/variables/data-types/unsignedchar/
unsigned char uc = 255;

//https://www.arduino.cc/reference/en/language/variables/data-types/unsignedint/
unsigned int ui = 65535;

//https://www.arduino.cc/reference/en/language/variables/data-types/unsignedlong/
unsigned long ul = 4294967295;

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

    Serial.print("double variable => ");
    Serial.println(d);

    Serial.print("float variable => ");
    Serial.println(f);

    Serial.print("int variable => ");
    Serial.println(i);

    Serial.print("long variable => ");
    Serial.println(l);

    Serial.print("short variable => ");
    Serial.println(s);

    Serial.print("size_t variable => ");
    Serial.println(st);

    Serial.print("String variable as char array => ");
    Serial.println(cStr);

    Serial.print("String variable => ");
    Serial.println(str);

    Serial.print("Unsigned char => ");
    Serial.println(uc);

    Serial.print("Unsigned int => ");
    Serial.println(ui);

    Serial.print("Unsigned long => ");
    Serial.println(ul);
}

void loop() {
}