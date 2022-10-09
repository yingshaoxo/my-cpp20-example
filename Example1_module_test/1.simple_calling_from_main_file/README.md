# Note for the cpp20 module function test

## Example 1
### code
```cpp
#a_module.cpp

module;

#include <cstdio>
#include <iostream>

export module a_module;

export void print_something() {
  printf("hi");
  std::cout << ",\n";
  printf("you\n");
}
```

```cpp
#main.cpp

import a_module;

int main() {
  print_something();
}
```

### compile method
```bash
gcc -c -std=c++20 -fmodules-ts a_module.cpp main.cpp
g++ main.o a_module.o -o say_hi_you

# or

g++ -c -std=c++20 -fmodules-ts main.cpp a_module.cpp
g++ main.o a_module.o -o say_hi_you

#g++ -c -std=c++20 -fmodules-ts main.cpp a_module.cpp -o say_hi_you
#gcc -c -std=c++20 -fmodules-ts main.cpp a_module.cpp -o say_hi_you
```
