#include <algorithm>
#include <iostream>
#include <string>

int main() {

  while (1) {
    std::string first, second;
    std::cin >> first >> second;
    if (first == "0" && second == "0") { break; }

    std::reverse(first.begin(), first.end());
    std::reverse(second.begin(), second.end());

    if (first.size() < second.size()) {
      while (first.size() != second.size()) { first += '0'; }
    } else {
      while (first.size() != second.size()) { second += '0'; }
    }
    short left_over = 0;
    short count = 0;
    for (short i = 0; i < first.size(); i++) {
      if (first[i] - '0' + second[i] - '0' + left_over > 9) {
        count++;
        left_over = 1;
      } else {
        left_over = 0;
      }
    }

    if (count == 0) {
      std::cout << "No carry operation." << std::endl;
    } else if (count == 1) {
      std::cout << "1 carry operation." << std::endl;
    } else {
      std::cout << count << " carry operations." << std::endl;
    }
  }

  return 0;
}