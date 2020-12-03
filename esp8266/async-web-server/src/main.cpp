#include "Arduino.h"
#include "ESP8266WiFi.h"
#include "server.h"


const char* ssid = "*"; // your wifi ssid
const char* password = "*"; // your wifi password

const int PIN_LED_RED = 5;
const int PIN_LED_BLUE = 4;
const int PIN_LED_YELLOW = 2;


void setup(){
    Serial.begin(9600);

    pinMode(PIN_LED_RED, OUTPUT);
    pinMode(PIN_LED_BLUE, OUTPUT);
    pinMode(PIN_LED_YELLOW, OUTPUT);

    digitalWrite(PIN_LED_RED, LOW);
    digitalWrite(PIN_LED_BLUE, LOW);
    digitalWrite(PIN_LED_YELLOW, LOW);

    WiFi.begin(ssid,password);
    while (WiFi.status() != WL_CONNECTED){
        delay(1000);
        Serial.println("Connecting to Wifi...");
    }

    Serial.println(WiFi.localIP());

    start();
}

void loop(){}
