#include <iostream>
#include <string>

int main() {
  int N;
  std::cin >> N;

  while (N--) {
    std::string s;
    std::cin >> s;
    std::cout << s.size() << std::endl;
  }
}