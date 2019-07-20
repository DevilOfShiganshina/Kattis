#include <iostream>
#include <string>
#include <vector>

int main() {
  short n;
  std::cin >> n;
  std::vector<std::string> vec;

  for (short i = 0; i < n; i++) {
    std::string in;
    std::cin >> in;
    vec.push_back(in);
  }

  bool inc = true, dec = true;

  for (short i = 1; i < n; i++) {
    if (vec[i] < vec[i - 1]) {
      inc = false;
    } else {
      dec = false;
    }

    if (!inc && !dec) {
      break;
    }
  }

  if (inc) {
    std::cout << "INCREASING" << std::endl;
  } else if (dec) {
    std::cout << "DECREASING" << std::endl;
  } else {
    std::cout << "NEITHER" << std::endl;
  }

  return 0;
}
