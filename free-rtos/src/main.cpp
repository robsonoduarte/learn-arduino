#include "Arduino.h"
#include "Arduino_FreeRTOS.h"
#include "Blink.h"
#include "Analog.h"


void setup(){
    xTaskCreate(blink, "blink", 128, NULL, 3, NULL);
    xTaskCreate(read, "blink", 128, NULL, 3, NULL);
}

void loop(){

}