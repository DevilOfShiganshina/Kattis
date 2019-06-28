#include <iostream>
#include <vector>

int calculate(std::vector<int> vec, int total) {
  int sum = 0;
  for (int i = 0; i < vec.size(); i++) {
    sum += vec[i];
  }
  sum = ((total * vec.size()) - sum) + total;
  return sum;
}

int main() {
  std::vector<int> vec;
  int x, n;
  std::cin >> x;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int input;
    std::cin >> input;
    vec.push_back(input);
  }

  std::cout << calculate(vec, x) << std::endl;

  return 0;
}