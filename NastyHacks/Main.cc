#include <iostream>

int main() {
  int N;
  std::cin >> N;

  for (int i = 0; i < N; i++) {
    int r, e, c;

    std::cin >> r >> e >> c;

    if ((e - c) < r) {
      std::cout << "do not advertise" << std::endl;
    } else if ((e - c) > r) {
      std::cout << "advertise" << std::endl;
    } else {
      std::cout << "does not matter" << std::endl;
    }
  }

  return 0;
}