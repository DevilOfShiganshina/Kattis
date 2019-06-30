#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

int binary(int N) {
  std::string binary_string;
  int retval = 0;

  while (N > 0) {
    if (N % 2 == 0) {
      binary_string.push_back('0');
    } else {
      binary_string.push_back('1');
    }

    N /= 2;
  }

  std::reverse(binary_string.begin(), binary_string.end());

  for (int i = 0; i < binary_string.size(); i++) {
    if (binary_string[i] == '1') {
      retval += pow(2,i);
    }
  }

  return retval;
}

int main() {
  int N;
  std::cin >> N;
  std::cout << binary(N) << std::endl;
}