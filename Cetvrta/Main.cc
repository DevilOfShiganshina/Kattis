#include <iostream>
#include <map>

int main() {
  std::map<int, int> f;
  std::map<int, int> s;
  for (int i = 0; i < 3; i++) {
    int a, b;
    std::cin >> a >> b;
    f[a]++;
    s[b]++;
  }

  int delta_a;
  for (auto x : f) {
    if (x.second == 1) {
      delta_a = x.first;
      break;
    }
  }

  int delta_b;
  for (auto x : s) {
    if (x.second == 1) {
      delta_b = x.first;
      break;
    }
  }

  std::cout << delta_a << " " << delta_b << std::endl;
  return 0;
}
