#include <iostream>
#include <string>
#include <vector>

std::string determine(double a, double b, short c) {
  if (a + b == (c) || a - b == int(c) || b - a == int(c) || a * b == int(c) || a / b == int(c) || b / a == int(c)) {
    return "Possible";
  }
  return "Impossible";
}

int main() {
  std::vector<std::string> str;
  short N;
  std::cin >> N;

  for (short i = 0; i < N; i++) {
    double a, b;
    short c;
    std::string retval;
    std::cin >> a >> b >> c;
    retval = determine(a,b,c);
    str.push_back(retval);
  }

  for (int i = 0; i < N; i++) {
    std::cout << str[i] << std::endl;
  }

  return 0;
}