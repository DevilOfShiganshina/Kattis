#include <algorithm>
#include <iostream>

int main() {
  short n, m;
  std::cin >> n >> m;
  if (n == m) {
    std::cout << ++n << std::endl;
  } else {
    short start = std::min(n, m) + 1;
    short end = start + abs(n - m) + 1;
    for (short i = start; i < end; i++) {
      std::cout << i << std::endl;
    }
  } return 0;
}