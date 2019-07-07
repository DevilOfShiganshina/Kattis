#include <iostream>
#include <map>
#include <string>
#include <sstream>

int main() {
  std::map<std::string, std::string> mp;
  std::string input, word, meaning;

  while (std::getline(std::cin, input) && input != "") {
    std::stringstream ss(input);
    ss >> word;
    ss >> meaning;
    mp[meaning] = word;
  }

  while (std::cin >> meaning) {
    if (mp.count(meaning)) {
      std::cout << mp[meaning] << std::endl;
    } else {
      std::cout << "eh" << std::endl;
    }
  }

  return 0;
}