#include <iostream>
#include <string>

int main() {
  std::string first, second;
  std::cin >> first >> second;
  if (second.length() <= first.length()) {
    std::cout << "go" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }

  return 0;
}
