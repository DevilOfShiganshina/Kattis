#include <iostream>

int main() {
  int n;
  int count = 0;

  std::cin >> n;

  while(n--) {
    int in;
    std::cin >> in;
    if (in < 0) {
      count++;
    }
  }

  std::cout << count << std::endl;

  return 0;
}