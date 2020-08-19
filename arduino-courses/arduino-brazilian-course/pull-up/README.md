### Pull Up

The simple circuit to see the concepts about [Pull Up](https://www.arduino.cc/en/Tutorial/DigitalInputPullup) with one Led.

![image](https://user-images.githubusercontent.com/797845/82070460-273b6780-96ab-11ea-9f29-9d8db0669346.png)

Set the button as [INPUT](https://github.com/robsonoduarte/learn-arduino/blob/b0641c52d7940d15b5c2e160d52572a76614ea00/arduino-courses/arduino-brazilian-course/pull-up/pull_up.ino#L7):
```
pinMode(btnPin, INPUT);
```

Read the [state of button](https://github.com/robsonoduarte/learn-arduino/blob/fa6d4737fd1b8a8e73ccaf8222d86495d8104a55/arduino-courses/arduino-brazilian-course/pull-up/pull_up.ino#L13):
```
int btnState = digitalRead(btnPin);
```    

Using the serial port to see the [state of button](https://github.com/robsonoduarte/learn-arduino/blob/b0641c52d7940d15b5c2e160d52572a76614ea00/arduino-courses/arduino-brazilian-course/pull-up/pull_up.ino#L16):
```
Serial.println(btnState);
```


For more information about that circuit can see this [article](https://www.instructables.com/id/Understanding-the-Pull-up-Resistor-With-Arduino/)

We used the [Clion and Arduino Support](https://github.com/robsonoduarte/learn-arduino/tree/master/clion-arduino/example) to upload the Sketch.
