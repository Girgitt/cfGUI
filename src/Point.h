#pragma once
#include <cstdint>

namespace Codingfield {
  namespace UI {
    struct Point_GUI {
      Point_GUI() : x{0}, y{0} {}
      Point_GUI(int32_t x, int32_t y) : x{x}, y{y} {}
      int32_t x;
      int32_t y;
    };
  }
}
