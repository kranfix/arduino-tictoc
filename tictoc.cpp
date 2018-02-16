#include "tictoc.hpp"
#include <Arduino.h>

Tictoc::Tictoc(TICTOC_SIGNATURE):timefunc(timefunc){
}

void Tictoc::tic(){
  now = timefunc();
  //now = millis();
  last = now;
}

unsigned long Tictoc::toc(){
  now = timefunc();
  ///now = millis();
  return now - last;
}
