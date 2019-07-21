#include <iostream>

int main() {
  short x, y;
  while (std::cin >> x >> y) {
    if (x == 0 && y == 0) {
      break;
    } else if (x + y == 13) {
      std::cout << "Never speak again." << std::endl;
    } else if (x > y) {
      std::cout << "To the convention." << std::endl;
    } else if (x < y) {
      std::cout << "Left beehind." << std::endl;
    } else {
      std::cout << "Undecided." << std::endl;
    }
  }

  return 0;
}