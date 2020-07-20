### C++ Struct and Array

The simple example how we can use the [Struct](https://www.learncpp.com/cpp-tutorial/47-structs/) and [Array](http://www.cplusplus.com/doc/tutorial/arrays/) on Arduino Sketch:


### [Declare Struct](https://github.com/robsonoduarte/learn-arduino/blob/6bcae3fc85b2f611e67a01383da7c66069ba12e6/arduino-courses/arduino-brazilian-course/struct_array/struct_array.ino#L3-L6)
```c++
struct Report {
    String event;
    unsigned long millis;
};
```

### [Use a Array of Struct](https://github.com/robsonoduarte/learn-arduino/blob/6bcae3fc85b2f611e67a01383da7c66069ba12e6/arduino-courses/arduino-brazilian-course/struct_array/struct_array.ino#L17)
```c++
Report reports[10];
```
