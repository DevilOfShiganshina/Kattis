#include <iostream>
#include <cmath>

int main() {
  int n, sum = 0;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int in;
    std::cin >> in;
    int ex = in % 10;
    in /= 10;
    sum += pow(in, ex);
  }

  std::cout << sum << std::endl;

  return 0;
}