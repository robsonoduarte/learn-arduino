#include <Arduino.h>

struct Report {
    String event;
    unsigned long millis;
};

void printReports(Report reports[]) {
    for (int idx = 0; idx < 10; ++idx) {
        Report report = reports[idx];
        Serial.print(report.event);
        Serial.print(" | ");
        Serial.println(report.millis);
    }
}

Report reports[10];

int indexReports = 0;
int pinIgnition = 8;
bool lastIgnition = true;

void setup() {
    pinMode(pinIgnition, INPUT_PULLUP);
    Serial.begin(9600);
}

void loop() {
    bool ignition = !digitalRead(pinIgnition);

    if (ignition && lastIgnition) {
        reports[indexReports] = {"Ignition On", millis()};
        indexReports++;
    }

    if (!ignition && !lastIgnition) {
        reports[indexReports] = {"Ignition Off", millis()};
        indexReports++;
    }

    if (indexReports == 10) {
        printReports(reports);
        indexReports = 0;
    }

    lastIgnition = !ignition;

}
