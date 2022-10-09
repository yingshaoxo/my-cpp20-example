module;

#include <cstdio>
#include <iostream>

export module a_module;

export void print_something() {
  printf("hi");
  std::cout << ",\n";
  printf("you\n");
}
