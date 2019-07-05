#include <iostream>

int days(int n) {
  int days = 0;
  int printer = 1;

  while (printer < n) {
    printer = printer * 2;
    days++;
  }

  days++;
  return days;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << days(n) << std::endl;

  return 0;
}