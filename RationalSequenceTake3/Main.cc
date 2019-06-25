#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <string>

std::pair<int, int> F(int N) {
  int p = 1, q = 1;
  std::vector<int> remain;

  while (!(N <= 1)) {
    if (N % 2 == 0) { remain.push_back(0); }
    else { remain.push_back(1); }
    N /= 2;
  }

  for (int i = remain.size() - 1; i >= 0; i--) {
    if (remain[i] == 0) { q = p + q; }
    else { p = p + q; }
  }

  std::pair<int, int> retval;
  retval.first = p;
  retval.second = q;

  return retval;
}

int main() {
  int N;
  std::cin >> N;
  int *index = new int[N];
  std::string *str = new std::string[N];

  for (int i = 0; i < N; i++) {
    int input;
    std::cin >> index[i] >> input;
    std::pair<int, int> retval = F(input);
    str[i] = std::to_string(retval.first) + "/" + std::to_string(retval.second);
  }

  for (int i = 0; i < N; i++) {
    std::cout << index[i] << " " << str[i] << std::endl;
  }
  return 0;
}