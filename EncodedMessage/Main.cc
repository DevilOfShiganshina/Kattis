#include <iostream> // Input / Output
#include <cmath> // sqrt function
#include <string> // std::string

std::string decode(std::string input);

int main() {
  short cases;

  std::cin >> cases;

  while (cases) {
    std::string input;
    std::cin >> input;
    input = decode(input);
    std::cout << input << std::endl;
    cases--;
  } 
  return 0;
}

std::string decode(std::string input) {
  int root = std::sqrt(input.length());
  std::string retstring = "";

  for (int i = root - 1; i >= 0; i--) {
    for (int j = i; j < input.length(); j += root) {
      retstring += input[j];
    }
  }

  return retstring;
}