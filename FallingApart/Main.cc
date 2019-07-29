#include <algorithm>
#include <iostream>
#include <vector>
#define pb push_back

int main() {
  short n;
  std::cin >> n;
  std::vector<short> v;
  while (n--) {
    short in;
    std::cin >> in;
    v.pb(in);
  }

  std::sort(v.rbegin(), v.rend());
  short bob = 0, alice = 0;

  for (short i = 0; i < v.size(); i++) {
    if (i&1) {
      bob += v[i];
    } else {
      alice += v[i];
    }
  }

  std::cout << alice << " " << bob << std::endl;
  return 0;
}
