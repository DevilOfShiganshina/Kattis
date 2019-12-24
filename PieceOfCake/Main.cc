#include <iostream>
#include <algorithm>

int main() {
  long long n, h, v;
  std::cin >> n >> h >> v;
  std::cout << std::max(h, n - h) * std::max(v, n - v) * 4 << std::endl;
  
  return 0;
}