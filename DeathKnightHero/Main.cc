#include <iostream>
#include <string>

bool noob(std::string str) {
  for (short i = 0; i < str.length() - 1; i++) {
    if (str[i] == 'C' && str[i+1] == 'D') { return false; }
  } return true;
}

int main() {
  short n;
  std::cin >> n;
  short total = 0;
  while (n--) {
    std::string in;
    std::cin >> in;
    if (noob(in)) { total++; }
  } std::cout << total << std::endl;

  return 0;
}
