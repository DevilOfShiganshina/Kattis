#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

std::string no_duplicate(std::string input) {
  std::stringstream ss(input);
  std::unordered_map<std::string, int> mp;

  while (ss) {
    std::string str;
    ss >> str;
    mp[str]++;
  }

  for (auto x : mp) {
    if (x.second > 1) {
      return "no";
    }
  }

  return "yes";
}

int main() {
  std::string str;
  std::getline(std::cin, str);
  std::cout << no_duplicate(str) << std::endl;

  return 0;
}