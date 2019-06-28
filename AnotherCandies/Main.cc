#include <iostream>
#include <string>
#include <vector>

std::string candy() {
  long long all, sum = 0;
  std::cin >> all;

  for (int i = 0; i < all; i++) {
    long long in;
    std::cin >> in;
    sum += in;
    if (sum > all) {
      sum %= all;
    }
  }

  if (sum % all == 0) { return "YES"; }
  else { return "NO"; }
}

int main() {
  int N;
  std::vector<std::string> str;
  std::cin >> N;
  while (N--) {
    std::string in = candy();
    str.push_back(in);
  }

  for (int i = 0; i < str.size(); i++) {
    std::cout << str[i] << std::endl;
  }

  return 0;
}