#include <algorithm>
#include <iostream>
#include <vector>

short missing_num(std::vector<short> input) {
  std::sort(input.begin(), input.end());
  short first = input[1] - input[0];
  short second = input[2] - input[1];
  if (first == second) {
    return (input[2] + first);
  } else if (first > second) {
    return (input[0] + second);
  } else {
    return (input[1] + first);
  }
}

int main() {
  std::vector<short> input;

  for (int i = 0; i < 3; i++) {
    short in;
    std::cin >> in;
    input.push_back(in);
  }

  std::cout << missing_num(input) << std::endl;

  return 0;
}