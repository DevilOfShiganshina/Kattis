#include <iostream>

int SSD(short base, int n) {
  int retval = 0;
  while (n > 0) {
    int num = n % base;
    retval += (num * num);
    n /= base;
  } return retval;
}

int main() {
  short cases;
  std::cin >> cases;

  while (cases--) {
    short casenum, base; int n;
    std::cin >> casenum >> base >> n;
    std::cout << casenum <<  " " << SSD(base, n) << std::endl;
  }

  return 0;
}