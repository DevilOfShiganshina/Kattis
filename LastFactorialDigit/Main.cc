#include <iostream>

int lastfactorialdigit(int n) {
  int fact = 1;
  for (int i = n; i > 0; i--) {
    fact *= i;
  }

  fact = fact % 10;
  return fact;
}

int main() {
  int n;
  std::cin >> n;

  while (n--) {
    int in;
    std::cin >> in;
    std::cout << lastfactorialdigit(in) << std::endl;
  }

  return 0;
}