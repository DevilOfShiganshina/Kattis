#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  float N;
  std::cin >> N;
  std::cout << std::setprecision(20) << sqrt(N) * 4 << std::endl;
  return 0;
}