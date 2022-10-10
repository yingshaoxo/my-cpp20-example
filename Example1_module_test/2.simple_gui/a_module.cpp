module;

#include <cstdio>
#include <iostream>

export module a_module;

export void my_greeting() {
  printf("Hello, ");
  std::cout << "World!";
  printf("\n");
}
