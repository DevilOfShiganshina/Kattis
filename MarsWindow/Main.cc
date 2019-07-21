#include <iostream>

int main() {
  short year, temp = 2018, month = 4;
  std::cin >> year;
  while (temp < year) {
    temp += 2;
    month += 2;
    if (month > 12) {
      temp++;
      month %= 12;
    }
  }

  if (temp == year) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}
