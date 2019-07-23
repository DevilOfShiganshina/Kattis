#include <iostream>
#include <string>

int main() {
  short n;
  std::cin >> n;

  for (short i = 0; i < n; i++) {
    std::string first, second;
    std::cin >> first >> second;
    std::cout << first << std::endl << second << std::endl;
    for (short i = 0; i < first.length(); i++) {
      if (first[i] == second[i]) {
	      std::cout << ".";
      } else {
	      std::cout << "*";
      } 
    } std::cout << std::endl << std::endl;
  }
  return 0;
}
