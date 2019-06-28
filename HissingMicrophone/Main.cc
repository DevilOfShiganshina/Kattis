#include <iostream>
#include <string>

std::string hissing(std::string str) {
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == 's') {
      if (str[++i] == 's') { return "hiss"; }
    }
  }

  return "no hiss";
}

int main() {
  std::string phrase;

  std::getline(std::cin, phrase);

  std::cout << hissing(phrase) << std::endl;

  return 0;
}