#pragma once
#include <string>

// forward dec
class Circuit;

namespace Debug{
  void init_debug();
  void end_debug();
  void draw(const Circuit&); // draw all debug windows
  void output(const std::string&);
}