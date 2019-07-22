#include <iostream>

int main() {
  short Gunnar = 0, Emma = 0;

  for (short i = 0; i < 4; i++) {
    short in;
    std::cin >> in;
    Gunnar += in;
  }

  for (short i = 0; i < 4; i++) {
    short in;
    std::cin >> in;
    Emma += in;
  }

  if (Gunnar == Emma) {
    std::cout << "Tie" << std::endl;
  } else if (Gunnar > Emma) {
    std::cout << "Gunnar" << std::endl;
  } else {
    std::cout << "Emma" << std::endl;
  }
  return 0;
}
