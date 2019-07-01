#include <algorithm>
#include <iostream>
#include <vector>

int minimum_price(std::vector<int> input) {
  std::sort(input.rbegin(), input.rend());
  int retval = 0;
  int index = input.size() / 3;
  for (int i = 0; i < input.size(); i++) {
    if (i % 3 != 2){
      retval += input[i];
    }
  } return retval;
}

int main() {
  int N;
  std::vector<int> input;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    int in;
    std::cin >> in;
    input.push_back(in);
  }
  std::cout << minimum_price(input) << std::endl;
}