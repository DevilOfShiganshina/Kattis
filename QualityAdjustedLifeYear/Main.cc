#include <iostream>
#include <iomanip>

int main() {
  int n;
  double ans = 0;
  std::cin >> n;

  while (n--) {
    double a, b;
    std::cin >> a >> b;
    ans += a * b;
  }
  std::cout << std::fixed << std::setprecision(3) << ans << std::endl;

  return 0;
}