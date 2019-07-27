#include <iostream>

int main() {
  short p;
  std::cin >> p;

  while (p--) {
    short k, n;
    std::cin >> k >> n;
    std::cout << k << " " << n * (n + 3) / 2 << std::endl;
  }

  return 0;
}
