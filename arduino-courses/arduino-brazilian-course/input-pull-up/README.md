#Input Pull Up

Simple Circuit to see how we can simplify the [Pull Up](https://github.com/robsonoduarte/learn-arduino/tree/master/arduino-courses/arduino-brazilian-course/pull-up) using the Arduino [INPUT_PULLUP](https://www.arduino.cc/reference/en/language/variables/constants/constants/):

![input-pull-up](https://user-images.githubusercontent.com/797845/82921251-8ec8a100-9f4e-11ea-9896-d96da9901acd.png)

Set the Buttons as [INPUT_PULLUP](https://github.com/robsonoduarte/learn-arduino/blob/57344943137ade6254ade75b69e05cbe0edb6da1/arduino-courses/arduino-brazilian-course/input-pull-up/input_pull_up.ino#L9-L10):
```c++
 pinMode(btnRedPin, INPUT_PULLUP);
 pinMode(btnBluePin, INPUT_PULLUP);
```


We used the [Clion and Arduino Support](https://github.com/robsonoduarte/learn-arduino/tree/master/clion-arduino/example) to upload the Sketch.
