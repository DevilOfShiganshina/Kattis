#include <iostream>

int main() {
  short n, t;
  std::cin >> n >> t;
  short count = 0;
  int total = 0;

  for (short i = 0; i < n; i++) {
    short in;
    std::cin >> in;
    if (total + in <= t) {
      total += in;
      count++;
    } else if (total + in > t) {
      break;
    }
  } std::cout << count << std::endl;
  return 0;
}