#include "Arduino.h"
#include "ESP8266WiFi.h"

//https://randomnerdtutorials.com/esp8266-nodemcu-async-web-server-espasyncwebserver-library/

const char* ssid = "*";
const char* password = "*";


void setup(){
    Serial.begin(9600);

    WiFi.begin(ssid,password);
    while (WiFi.status() != WL_CONNECTED){
        delay(100);
        Serial.println("Connecting to Wifi...");
    }
    Serial.println(WiFi.localIP());
}

void loop(){
}
