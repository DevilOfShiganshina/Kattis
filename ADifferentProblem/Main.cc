#include <iostream>

int main() {
  long long int a, b;
  while (std::cin >> a) {
    std::cin >> b;
    std::cout << abs(a - b) << std::endl;
  }
  return 0;
}