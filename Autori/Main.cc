#include <iostream>
#include <string>

int main() {
  std::string str, acronym;
  
  getline(std::cin, str);

  for (int i = 0; i < str.size(); i++) {
    if (i == 0) {
      acronym.push_back(str[i]);
    } else if (str[i] == '-') {
      acronym.push_back(str[i+1]);
    }
  }

  std::cout << acronym << std::endl;
  return 0;
}