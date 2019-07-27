#include <iostream>

int main() {
  short n, k;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> k;
    long double passengers = 0;
    for (int i = 0; i < k; i++) {
      passengers += 0.5;
      passengers *= 2;
    } std::cout << (long long int)passengers << std::endl;
  }
  return 0;
}