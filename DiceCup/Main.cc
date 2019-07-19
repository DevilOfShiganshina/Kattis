#include <algorithm>
#include <iostream>

int main() {
  short n, m;
  std::cin >> n >> m;
  if (n == m) {
    std::cout << ++n << std::endl;
  } else {
    for (short i = std::min(n, m) + 1; i < (std::min(n, m) + 1) + (abs(n - m) + 1); i++) {
      std::cout << i << std::endl;
    }
  } return 0;
}