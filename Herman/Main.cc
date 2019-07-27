#include <iomanip>
#include <iostream>
#define PI 3.14159265359

int main() {
  short r;
  std::cin >> r;
  std::cout << std::fixed << std::setprecision(6) << PI * r * r << std::endl;
  std::cout << std::fixed << std::setprecision(6) << double(((r + r) * (r + r)) / 2) << std::endl;
  return 0;
}
