#include <iostream>

int main() {
  short max = -1, index;

  for (short i = 1; i <= 5; i++) {
    short sum = 0;
    short in;

    for (short j = 0; j < 4; j++) {
      std::cin >> in;
      sum += in;
    }

    if (sum > max) {
      max = sum;
      index = i;
    }
  }

  std::cout << index << " " << max << std::endl;
  
  return 0;
}
