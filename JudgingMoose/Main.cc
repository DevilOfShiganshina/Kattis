#include <iostream>
#include <string>

std::string age(short a, short b) {
  if (a == 0 && b == 0) {
    return "Not a moose";
  } else if (a == b) {
    std::string retval;
    int age = a * 2;
    retval = "Even " + std::to_string(age);
    return retval;
  } else if (a > b) {
    int age = a * 2;
    std::string retval;
    retval = "Odd " + std::to_string(age);
    return retval; 
  } else if (b > a) {
    int age = b * 2;
    std::string retval;
    retval = "Odd " + std::to_string(age);
    return retval;
  }
}

int main() {
  short left, right;

  std::cin >> left >> right;

  std::cout << age(left, right) << std::endl;

  return 0;
}