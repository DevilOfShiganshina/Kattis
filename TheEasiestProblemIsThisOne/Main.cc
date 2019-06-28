#include <iostream>
#include <vector>

int calculate_sum(int val) {
  int retval = 0;
   while (val > 0) {
     retval += val % 10;
     val /= 10;
   } return retval;
}

int F(int input) {
  int input_sum = calculate_sum(input);
  int next_int = 11;

  while (1) {
    int next_int_sum = calculate_sum(next_int * input);
    if (input_sum == next_int_sum) {
      return next_int;
    }
    next_int++;
  }
}

int main() {
  std::vector<int> input;

  while (1) {
    int in;
    std::cin >> in;
    if (in == 0) { break; }
    input.push_back(in);
  }

  for (int i = 0; i < input.size(); i++) {
    std::cout << F(input[i]) << std::endl;
  }
  return 0;
}