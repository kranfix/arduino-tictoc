#include "tictoc.hpp"

Tictoc::Tictoc(TICTOC_SIGNATURE):timefunc(timefunc){

}

void Tictoc::tic(){
  now = timefunc();
  last = now;
}

unsigned long Tictoc::toc(){
  now = timefunc();
  return now - last;
}
