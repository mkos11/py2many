#include <cassert>   // NOLINT(build/include_order)
#include <iostream>  // NOLINT(build/include_order)

#include "pycpp/runtime/builtins.h"  // NOLINT(build/include_order)
#include "pycpp/runtime/sys.h"       // NOLINT(build/include_order)
inline void default_builtins() {
  std::string a = "";
  bool b = false;
  int c = 0;
  assert(a == std::string{""});
  assert(b == false);
  assert(c == 0);
}

int main(int argc, char** argv) {
  pycpp::sys::argv = std::vector<std::string>(argv, argv + argc);
  int a = std::max(1, 2);
  std::cout << a;
  std::cout << std::endl;
  int b = std::min(1, 2);
  std::cout << b;
  std::cout << std::endl;
}
