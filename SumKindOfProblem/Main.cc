#include <iostream>

typedef unsigned long ul;

void calculate(short n, short k) {
  ul pos_num = 0, odd_num = 0, even_num = 0;
  ul pos = 1, odd = 1, even = 2;

  while (n--) {
    pos_num += pos;
    odd_num += odd;
    even_num += even;
    pos++;
    odd += 2;
    even += 2;
  } std::cout << k << " " << pos_num << " " << odd_num << " " << even_num << std::endl;
}

int main() {
  short p;
  std::cin >> p;
  while (p--) {
    short k, n;
    std::cin >> k >> n;
    calculate(n, k);
  }

  return 0;
}
