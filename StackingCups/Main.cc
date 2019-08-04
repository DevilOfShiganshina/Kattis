#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#define pb push_back

int main() {
  short n;
  std::cin >> n;
  std::vector<std::pair<short, std::string>> p;
  for (short i = 0; i < n; i++) {
    std::string a, b;
    std::cin >> a >> b;
    if (std::isalpha(a[0])) {
      p.pb(std::make_pair(std::stoi(b), a));
    } else {
      p.pb(std::make_pair(std::stoi(a) / 2, b));
    }
  }

  std::sort(p.begin(), p.end());
  for (short i = 0; i < n; i++) {
    std::cout << p[i].second << std::endl;
  }

  return 0;
}