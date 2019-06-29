#include <iostream>
#include <cmath>

int main() {
  int N;
  std::cin >> N;
  N = std::pow(2, N) + 1;
  std::cout << N * N << std::endl;
}