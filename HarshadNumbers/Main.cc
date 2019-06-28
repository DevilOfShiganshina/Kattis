#include <iostream>
#include <string>
#include <cmath>

int nextNum(int N) {
  double sum = 0;
  double original;

  while (1) {
    original = N;
    sum = 0;
    while (N > 0) {
      sum += N % 10;
      N /= 10;
    }
    N = original;
    if (std::fmod(N, sum) == 0.0) {
      return original;
    }

    N = original + 1;
  }
}

int main() {
  double N;

  std::cin >> N;

  std::cout << nextNum(N) << std::endl;
}