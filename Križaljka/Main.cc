#include <iostream>
#include <string>
#include <utility>

std::pair<short, short> find_common(std::string first, std::string second) {
  bool flag = false;
  std::pair<short, short> retval;
  for (short i = 0; i < first.length(); i++) {
    for (short j = 0; j < second.length(); j++) {
      if (first[i] == second[j]) {
        retval.first = i;
        retval.second = j;
        flag = true;
        break;
      }
    }

    if (flag) { break; }
  }

  return retval;
}

int main() {
  std::string first, second;
  std::cin >> first >> second;
  std::pair<short, short> index = find_common(first, second);

  for (short i = 0; i < second.length(); i++) {
    if (i == index.second) {
      std::cout << first;
    } else {
      for (short j = 0; j < first.length(); j++) {
        if (j == index.first) {
          std::cout << second[i];
        } else {
          std::cout << ".";
        }
      }
    } std::cout << std::endl;
  }
  return 0;
}
