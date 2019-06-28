#include <iostream>

int convert(double input) {
  return (input * (5280. / 4854.) * 1000. + 0.5);
}

int main() {
  double N;
  std::cin >> N;
  std::cout << convert(N) << std::endl;
  return 0;
}