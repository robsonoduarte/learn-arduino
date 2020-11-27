#include "Arduino.h"

//https://randomnerdtutorials.com/esp8266-nodemcu-async-web-server-espasyncwebserver-library/
void setup(){
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}
