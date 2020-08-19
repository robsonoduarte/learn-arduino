### Blink Leds

The simple circuit to blink the leds:


![image](https://user-images.githubusercontent.com/797845/81836689-34751c80-951a-11ea-8601-00460fe10039.png)

* [The setup ](https://github.com/robsonoduarte/learn-arduino/blob/16c4ec128128e7b115bd3390c5842b16532340a2/arduino-courses/arduino-brazilian-course/blink-leds/blink_leds.ino#L6-L16) digital ports [8,9,10] as output and blink the led on port 8, 5 times before finished the setup :
```
void setup() {
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10, OUTPUT);

    int x = 0;
    while (x <= 5){
        blinkLed(8, 1000);
        x++;
    }
}
```

* [The loop](https://github.com/robsonoduarte/learn-arduino/blob/16c4ec128128e7b115bd3390c5842b16532340a2/arduino-courses/arduino-brazilian-course/blink-leds/blink_leds.ino#L18-L22) to blink the leds:
```
void loop() {
    blinkLed(8, 1000);
    blinkLed(9, 1000);
    blinkLed(10, 1000);
}
```

We used the [Clion and Arduino Support](https://github.com/robsonoduarte/learn-arduino/tree/master/clion-arduino/example) to upload the Sketch.
