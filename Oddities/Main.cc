#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> str;
  std::vector<int> input;

  int N;
  std::cin >> N;

  for (int i = 0; i < N; i++) {
    int in;
    std::cin >> in;
    input.push_back(in);
  }

  for (int i = 0; i < N; i++) {
    std::string ans;
    if (input[i] % 2 == 0) {
      ans = std::to_string(input[i]);
      ans = ans + " is even";
      str.push_back(ans);
    } else {
      ans = std::to_string(input[i]);
      ans = ans + " is odd";
      str.push_back(ans);
    }
    std::cout << str[i] << std::endl;
  }

  return 0;
}