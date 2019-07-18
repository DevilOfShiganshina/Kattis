#include <iostream>
#include <cmath>

int main() {
  int n, w, h;
  std::cin >> n >> w >> h;
  int hy = sqrt((h*h) + (w*w));
  while (n--) {
    int in;
    std::cin >> in;
    if (in <= hy) {
      std::cout << "DA" << std::endl;
    } else {
      std::cout << "NE" << std::endl;
    }
  }
  return 0;
}
