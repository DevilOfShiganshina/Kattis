#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string first, second;
  std::cin >> first >> second;

  std::reverse(first.begin(), first.end());
  std::reverse(second.begin(), second.end());

  if (std::stoi(first) > stoi(second)) {
    std::cout << first << std::endl;
  } else {
    std::cout << second << std::endl;
  }

  return 0;
}