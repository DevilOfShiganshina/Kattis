#include <iostream>
#include <iomanip>

int main() {
  double r, c;
  std::cin >> r >> c;
  std::cout << std::fixed << std::setprecision(6) << ((r - c) * (r - c) / (r * r) * 100) << std::endl;

  return 0;
}