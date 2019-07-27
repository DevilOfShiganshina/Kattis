#include <algorithm>
#include <iostream>

int main() {
  short a[4];
  std::cin >> a[0] >> a[1] >> a[2] >> a[3];
  std::sort(a, a+4);
  std::cout << a[0] * a[2] << std::endl;
  return 0;
}
