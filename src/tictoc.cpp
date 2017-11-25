#include "tictoc.h"

Tictoc::Tictoc():timefunc(timefuc){

}

void Tictoc::tic(){
  now = timefunc();
  last = now;
}

unsigned long Tictoc::toc(){
  now = timefunc();
  return now - last;
}
