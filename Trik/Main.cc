#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  short ball = 1;

  for (short i = 0; i < str.length(); i++) {
    if (str[i] == 'A') {
      if (ball == 1) { ball = 2; }
      else if (ball == 2) { ball = 1; }
    } else if (str[i] == 'B') {
      if (ball == 2) { ball = 3; }
      else if (ball == 3) { ball = 2; }
    } else if (str[i] == 'C') {
      if (ball == 1) { ball = 3; }
      else if (ball == 3) { ball = 1; }
    }
  } std::cout << ball << std::endl;

  return 0;
}