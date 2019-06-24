#include <iostream>

int main() {

  int pieces[] = { 1, 1, 2, 2, 2, 8 };

  int input[6];

  std::cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];

  int answer[6];

  for (int i = 0; i < 6; i++) {
    if (pieces[i] == input[i]) {
      answer[i] = 0;
    } else {
      answer[i] = pieces[i] - input[i];
    }
  }

  for (int i = 0; i < 6; i++) {
    std::cout << answer[i] << " ";
  }

  std::cout << std::endl;

  return 0;
}