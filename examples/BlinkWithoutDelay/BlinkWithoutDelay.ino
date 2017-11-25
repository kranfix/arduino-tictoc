#include <tictoc.h>

Tictoc tt1(millis);
Tictoc tt2(micros);

const unsigned long interval1 = 1000;
const unsigned long interval2 = 500000;

const int led1Pin = 4;
const int led2Pin = 5;

int led1Val = LOW;
int led2Val = LOW;

void setup(){
  Serial.begin(9600);
  pinMode(led1Pin,OUTPUT);
  pinMode(led2Pin,OUTPUT);
  digitalWrite(led1Pin,led1Val);
  digitalWrite(led2Pin,led2Val);

  tt1.tic();
  tt2.tic();
}

void loop(){
  if(tt1.toc() >= invertal1){
    Serial.println("Tictoc 1");
    led1Val != led1Val;
    digitalWrite(led1Pin,led1Val);
  }

  if(tt2.toc() >= interval2){
    Serial.println("Tictoc 2");
    led2Val != led2Val;
    digitalWrite(led2Pin,led2Val);
  }
}
