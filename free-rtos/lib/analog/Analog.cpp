#include "Analog.h"
#include "Arduino.h"
#include "Arduino_FreeRTOS.h"

void read(void *parameters){
    Serial.begin(9600);
    while (1){
        int value = analogRead(A0);
        Serial.println(value);
        vTaskDelay(1);
    }
}