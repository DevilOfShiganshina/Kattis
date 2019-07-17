#include <iostream>
#include <cmath>

int one_bit(int n) {
  int retval = 0;

  while (n > 0) {
    if (n % 2 == 1) {
      retval++;
    } n /= 2;
  } return retval;
}

int main() {
  short n;
  std::cin >> n;
  while (n--) {
    int in;
    std::cin >> in;
    int bits = 0;
    while (in > 0) {
      bits = std:std::max(bits, one_bit(in));
      in /= 10;
    }
    std::cout << bits << std::endl;
  }
  
  return 0;
}
