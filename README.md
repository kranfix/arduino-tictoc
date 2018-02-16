Arduino Tictoc
==============

An Arduino library count time like Matlab.

## examples
```c++
#include <tictoc.h>

Tictoc tt1(micros);
Tictoc tt2(millis);

int ledLevel = LOW;
int counter = 0;

void setup(){

  Serial.begin(9600);

  tt1.tic();
  tt2.tic();

  pinMode(LED_BUILTIN,OUTPUT);
}

void loop(){
  if(tt1.toc() >= 1000000){ // 1 second
    tt1.tic();
    ledLevel = !ledLevel;
    digitalWrite(LED_BUILTIN,ledLevel);
  }

  if(tt2.toc() >= 2000){  // 2 second
    tt2.tic();
    counter++;
    Serial.print("Counter: ");
    Serial.println(counter);
  }
}
```
