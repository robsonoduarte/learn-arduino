#include <Arduino.h>

struct Report {
    String event;
    unsigned long millis;
};

void printReports(Report reports[]) {
    for (int idx = 0; idx < 10; idx++) {
        Report report = reports[idx];
        Serial.print(report.event);
        Serial.print(" | ");
        Serial.println(report.millis);
    }
}

Report reports[10];

int indexReports = 0;
int pinIgnition = 8;
bool pinIgnitionLastState;

void setup() {
    pinMode(pinIgnition, INPUT_PULLUP);
    Serial.begin(9600);
}

void loop() {
    bool ignition = !digitalRead(pinIgnition);

    if (ignition && !pinIgnitionLastState) {
        reports[indexReports] = {"Ignition On", millis()};
        indexReports++;
    }

    if (!ignition && pinIgnitionLastState) {
        reports[indexReports] = {"Ignition Off", millis()};
        indexReports++;
    }

    if (indexReports == 10) {
        printReports(reports);
    }
}