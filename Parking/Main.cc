#include <iostream> // I/O

// Driver Program
int main() {
  unsigned short cases;
  
  std::cin >> cases;

  for (unsigned short i = 0; i < cases; i++) {
    unsigned short stores;

    std::cin >> stores;

    unsigned short low = 100;
    unsigned short high = 0;
    for (unsigned short j = 0; j < stores; j++) {
      unsigned short in;
      std::cin >> in;

      if (in < low) {
        low = in;
      }

      if (in > high) {
        high = in;
      }
    }
    std::cout << (2 * (high - low)) << std::endl;
  }
  return 0;
}