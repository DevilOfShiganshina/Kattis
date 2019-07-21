#include <iostream>
#include <string>

int main() {
  short n, p;
  std::cin >> n >> p;
  std::cin.ignore();
  for (short i = 0; i < n; i++) {
    std::string str;
    std::getline(std::cin, str);
  } std::cout << p << std::endl;
}
