#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  int N;
  std::cin >> N;

  for (int i = 0; i < N; i++) {
    int input;
    std::cin >> input;
    vec.push_back(input);
  }

  for (int i = 0; i < N; i++) {
    int bottles, remainder;

    bottles = vec[i] / 400;
    remainder = vec[i] % 400;

    if (remainder > 0) {
      std::cout << ++bottles << std::endl;
    } else {
      std::cout << bottles << std::endl;
    }
  }
}
