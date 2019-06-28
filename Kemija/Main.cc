#include <iostream>
#include <string>

std::string decipher(std::string str) {
  std::string retval = "";
  int index = 0;

  while (index <= str.size()) {
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u') {
      retval += str[index];
      index += 3;
    } else {
      retval += str[index];
      index++;
    }
  } return retval;
}

int main() {
  std::string input;
  std::getline(std::cin, input);
  std::cout << decipher(input) << std::endl;
  return 0;
}