#include <iostream>
#include <climits>

int main() {
  int n;
  std::cin >> n;
  int day = INT_MAX;
  int index;
  for (int i = 0; i < n; i++) {
    int in;
    std::cin >> in;
    if (in < day) {
      day = in;
      index = i;
    } 
  } std::cout << index << std::endl;
  return 0;
}
