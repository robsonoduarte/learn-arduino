# Ports Analog and PWM

The simple Circuit to see how we can use the ports [Analog](https://en.wikipedia.org/wiki/Analog_signal) and [PWM](https://www.arduino.cc/en/tutorial/PWM):

![image](https://user-images.githubusercontent.com/797845/84284304-632ee480-ab12-11ea-82ee-63a867109c9f.png)

##### [Read](https://github.com/robsonoduarte/learn-arduino/blob/2d650149ecb20551a8d4e3d7c0004d7f7fd923d4/arduino-courses/arduino-brazilian-course/ports-analog-pwm/ports_analog_pwm.ino#L12) Analog Port:
```
int analogState = analogRead(A0);
```

##### [Write](https://github.com/robsonoduarte/learn-arduino/blob/2d650149ecb20551a8d4e3d7c0004d7f7fd923d4/arduino-courses/arduino-brazilian-course/ports-analog-pwm/ports_analog_pwm.ino#L13) as Analog on Digital Port:
```
analogWrite(pinRedLed, map(analogState, 0, 1023, 0, 255));
```

You can simulate the Circuit on [Thinkercad]( https://www.tinkercad.com/things/bGdUAgEm9Kn )

We used the [Clion and Arduino Support](https://github.com/robsonoduarte/learn-arduino/tree/master/clion-arduino/example) to upload the Sketch.
