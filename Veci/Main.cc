#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string str, temp;
  std::cin >> str;
  temp = str;

  std::next_permutation(temp.begin(), temp.end());

  if (temp <= str) {
    std::cout << "0" << std::endl;
  } else {
    std::cout << temp << std::endl;
  }
  return 0;
}
