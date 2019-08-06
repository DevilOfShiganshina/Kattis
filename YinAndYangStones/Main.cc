#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  
  if (std::count(str.begin(), str.end(), 'W') == std::count(str.begin(), str.end(), 'B')) {
    std::cout << 1 << std::endl;
  } else {
    std::cout << 0 << std::endl;
  }
  
  return 0;
} 