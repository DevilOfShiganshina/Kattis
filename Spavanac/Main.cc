#include <iostream>

int main() {
  int h, m;

  std::cin >> h >> m;

  if (m < 45 ) {
    if (h == 0) {
      h = 23;
      m += 15;
    } else {
      h--;
      m += 15;
    }
  } else if (m == 45) {
    m = 0;
  } else {
    m -= 45;
  }

  std::cout << h << " " << m << std::endl;

  return 0;
}