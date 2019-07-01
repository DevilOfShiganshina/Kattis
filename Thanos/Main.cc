#include <iostream>

int main() {
  long long N;
  std::cin >> N;

  while (N--) {
    long long p, r, f;
    std::cin >> p >> r >> f;
    long long count = 0;
    while (p <= f) {
      p = p * r;
      count++;
    }

    std::cout << count << std::endl;
  }
  return 0;
}