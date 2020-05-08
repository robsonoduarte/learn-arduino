#include <Arduino.h>

int thisByte = 33;

void setup() {
    Serial.begin(9600);
    while (!Serial){
        ;
    }
    Serial.print("ACSII Table ~ Character Map");
}

void loop() {
    Serial.write(thisByte);

    Serial.print(", dec: ");
    Serial.print(thisByte);

    Serial.print(", hex: ");
    Serial.print(thisByte, HEX);

    Serial.print(", oct: ");
    Serial.print(thisByte, OCT);

    Serial.print(", bin: ");
    Serial.println(thisByte, BIN);

    if(thisByte == 126){
        while (true){
            continue;
        }
    }
    thisByte++;
}
