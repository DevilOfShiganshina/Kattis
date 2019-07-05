#include <iomanip>
#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int sum = 0;

  int loop = n;
  while (loop--) {
    int in;
    std::cin >> in;
    if (in == -1) {
      n--;
    } else {
      sum += in;
    }
  }
  std::cout << std::setprecision(10) << double(sum / (1.0 * n)) << std::endl;
}