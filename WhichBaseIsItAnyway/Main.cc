#include <iostream>

int octal_to_decimal(int num) {
  int retval = 0;
  int base = 1;

  while (num) {
    if (num % 10 > 7) {
      return 0;
    }

    retval += ((num % 10) * base);
    num /= 10;
    base <<= 3;
  } return retval;
}

int decimal_to_hex(int num) {
  int retval = 0;
  int base = 1;

  while (num) {
    retval += ((num % 10) * base);
    num /= 10;
    base <<= 4;
  } return retval;
}

int main() {
  short n;
  std::cin >> n;

  for (short i = 0; i < n; i++) {
    short cnum; int num;
    std::cin >> cnum >> num;
    std::cout << cnum << " " << octal_to_decimal(num) << " " << num << " " << decimal_to_hex(num) << std::endl;
  }

  return 0;
}
