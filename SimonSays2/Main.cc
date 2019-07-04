#include <iostream>
#include <string>

int main() {
  std::string buff;
  int n;
  std::cin >> n;
  std::getline(std::cin, buff);

  while (n--) {
    std::getline(std::cin, buff);

    if (buff.find("simon says ") != std::string::npos) {
      std::cout << buff.substr(11) << std::endl;
    } else {
      std::cout << std::endl;
    }
  }

  return 0;
}