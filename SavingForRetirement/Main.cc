#include <iostream>

int main() {
  short bob, b_ry, b_spy, alice, a_spy;

  std::cin >> bob >> b_ry >> b_spy >> alice >> a_spy;

  short b_total = ((b_ry - bob) * b_spy);
  short a_total = 0;

  while (a_total <= b_total) {
    a_total += a_spy;
    alice++;
  }

  std::cout << alice << std::endl;

  return 0;
}
