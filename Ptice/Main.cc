#include <cmath>
#include <iostream>
#include <string>

int main() {
  short n; std::string str;
  std::cin >> n >> str;
  short a = 0, b = 0, g = 0;
  
  for(short i = 0; i < str.length(); i++) {
    if (i % 3 == 0 && str[i] == 'A') { a++; }
    else if (i % 3 == 1 && str[i] == 'B') { a++; }
    else if (i % 3 == 2 && str[i] == 'C') { a++; }

    if (i % 4 == 0 && str[i] == 'B') { b++; }
    else if (i % 4 == 1 && str[i] == 'A') { b++; }
    else if (i % 4 == 2 && str[i] == 'B') { b++; }
    else if (i % 4 == 3 && str[i] == 'C') { b++; }

    if (i % 6 == 0 && str[i] == 'C') { g++; }
    else if (i % 6 == 1 && str[i] == 'C') { g++; }
    else if (i % 6 == 2 && str[i] == 'A') { g++; }
    else if (i % 6 == 3 && str[i] == 'A') { g++; }
    else if (i % 6 == 5 && str[i] == 'B') { g++; }
    else if (i % 6 == 4 && str[i] == 'B') { g++; }
  }
  
  short most = std::max(a, b);
  most = std::max(most, g);

  std::cout << most << std::endl;
  
  if (most == a) {
    std::cout << "Adrian" << std::endl;
  } if (most == b) {
    std::cout << "Bruno" << std::endl;
  } if (most == g) {
    std::cout << "Goran" << std::endl;
  }

  return 0;
}
