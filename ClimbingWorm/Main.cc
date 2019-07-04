#include <iostream>

int climb(short a, short b, int h) {
  int count = 0;
  int d = 0;

  while (1) {
    d = (d + a);
    count++;
    if (d >= h) {
      break;
    }
    d -= b;
  } return count;
}

int main() {
  short a, b;
  int h;
  std::cin >> a >> b >> h;
  std::cout << climb(a, b, h) << std::endl;

  return 0;
}