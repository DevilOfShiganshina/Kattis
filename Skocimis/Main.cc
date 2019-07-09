#include <algorithm>
#include <iostream>

int main() {
  short a, b, c;
  std::cin >> a >> b >> c;
  short moves = std::max(b-a, c-b);
  std::cout << --moves << std::endl;

  return 0;
}
