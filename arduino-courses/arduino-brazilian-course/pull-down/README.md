### Pull Down

The simple circuit to see the concepts about Pull Down with one Led.

![image](https://user-images.githubusercontent.com/797845/82469573-9265af00-9a9a-11ea-88f5-8abf034f53fc.png)

Set initial [state of button](https://github.com/robsonoduarte/learn-arduino/blob/b6bcdfbc73d9268f472574bbf3cfc5062b1d896a/arduino-courses/arduino-brazilian-course/pull-down/pull_down.ino#L5)
```
int ledPin = 12;
``

Set the button as [INPUT](https://github.com/robsonoduarte/learn-arduino/blob/b6bcdfbc73d9268f472574bbf3cfc5062b1d896a/arduino-courses/arduino-brazilian-course/pull-down/pull_down.ino#L8):
```
pinMode(btnPin, INPUT);
```

Using the serial port to see the [state of button](https://github.com/robsonoduarte/learn-arduino/blob/b6bcdfbc73d9268f472574bbf3cfc5062b1d896a/arduino-courses/arduino-brazilian-course/pull-down/pull_down.ino#L20):
```
Serial.println(btnState);
```


For more information about that circuit can see this [article](https://www.instructables.com/id/Understanding-the-Pull-up-Resistor-With-Arduino/)

We used the [Clion and Arduino Support](https://github.com/robsonoduarte/learn-arduino/tree/master/clion-arduino/example) to upload the Sketch.
