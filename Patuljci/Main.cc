#include <iostream>
#include <vector>
#define pb push_back

std::vector<short> twoSum(short a[], short size, short value) {
  std::vector<short> retval;

  for (short i = 0; i < size; i++) {
    for (short j = 0; j < size; j++) {
      if (i == j) { continue; }
      else if (a[i] + a[j] == value) {
        retval.pb(i);
        retval.pb(j);
        return retval;
      }
    }
  }
}

int main() {
  short a[9];
  short total = 0;
  
  for (short i = 0; i < 9; i++) {
    std::cin >> a[i];
    total += a[i];
  } short diff = total - 100;
  
  std::vector<short> retval = twoSum(a, 9, diff);
  
  for (short i = 0; i < 9; i++) {
    if (i == retval[0] || i == retval[1]) {
      continue;
    } else {
      std::cout << a[i] << std::endl;
    }
  }

  return 0;
}
