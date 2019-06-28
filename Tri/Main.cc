#include <iostream>
#include <string>

std::string equation(int a, int b, int c) {
  if (a + b == c) {
    return std::to_string(a) + "+" + std::to_string(b) + "=" + std::to_string(c);
  } else if (b + c == a) {
    return std::to_string(a) + "=" + std::to_string(b) + "+" + std::to_string(c);
  } else if (a - b == c) {
    return std::to_string(a) + "-" + std::to_string(b) + "=" + std::to_string(c);
  } else if (b - c == a) {
    return std::to_string(a) + "=" + std::to_string(b) + "-" + std::to_string(c);
  } else if (a * b == c) {
    return std::to_string(a) + "*" + std::to_string(b) + "=" + std::to_string(c);
  } else if (b * c == a) {
    return std::to_string(a) + "=" + std::to_string(b) + "*" + std::to_string(c);
  } else if (a / b == c) {
    return std::to_string(a) + "/" + std::to_string(b) + "=" + std::to_string(c);
  } else if (b / c == a) {
    return std::to_string(a) + "=" + std::to_string(b) + "/" + std::to_string(c);
  }
}

int main() {
  short a, b, c;

  std::cin >> a >> b >> c;

  std::cout << equation(a, b, c) << std::endl;
  return 0;
}