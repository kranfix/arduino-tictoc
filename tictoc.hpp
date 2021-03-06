#pragma once

#ifdef ESP8266
#include <functional>
#define TICTOC_SIGNATURE std::function<unsigned long()> timefunc
#else
#define TICTOC_SIGNATURE unsigned long(*timefunc)()
#endif

class Tictoc {
  unsigned long now;
  unsigned long last;
  TICTOC_SIGNATURE;
public:
  Tictoc(TICTOC_SIGNATURE);
  //Tictoc();
  void tic();
  unsigned long toc();
};
