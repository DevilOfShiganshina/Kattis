#include <iostream>
#include <string>

std::string apaxian(std::string str) {
  std::string retval;
  char last = ' ';
  for (int i = 0; i < str.size(); i++) {
    if (str[i] != last) {
      retval.push_back(str[i]);
    }
    last = str[i];
  }
  return retval;
}

int main() {
  std::string str;
  std::cin >> str;
  std::cout << apaxian(str) << std::endl;
}