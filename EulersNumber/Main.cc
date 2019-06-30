#include <iostream>
#include <iomanip>

typedef long double ld;

ld eulers_number(int N) {
  ld retval = 0;
  ld curr = 1;

  for (int i = 1; i <= N + 1; i++) {
    retval += 1 / curr;
    curr *= i;
  }

  return retval;
}

int main() {
  int N;
  std::cin >> N;
  std::cout << std::fixed << std::setprecision(15) << eulers_number(N) << std::endl;
  return 0;
}