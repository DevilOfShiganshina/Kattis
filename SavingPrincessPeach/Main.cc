#include <iostream>
#include <vector>
#define pb push_back

int main() {
  short n, y;
  std::cin >> n >> y;

  std::vector<bool> vec (n, true);

  short count = 0;
  for (short i = 0; i < y; i++) {
    short in;
    std::cin >> in;
    if (vec[in]) {
      vec[in] = false;
      count++;
    }
  }

  for (short i = 0; i < n; i++) {
    if (vec[i]) {
      std::cout << i << std::endl;
    }
  } std::cout << "Mario got " << count << " of the dangerous obstacles." << std::endl;

  return 0;
}