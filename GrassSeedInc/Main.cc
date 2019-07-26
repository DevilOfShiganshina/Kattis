#include <iostream>
#include <iomanip>

int main() {
  double cost;
  short lawns;

  std::cin >> cost >> lawns;
  double total = 0;

  while (lawns--) {
    double width, length;
    std::cin >> width >> length;
    total += (width * length);
  }

  std::cout << std::fixed << std::setprecision(7) << total * cost << std::endl;

  return 0;
}
