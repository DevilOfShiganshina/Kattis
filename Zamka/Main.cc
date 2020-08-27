#include <iostream>

typedef unsigned short us;
us count(us);

int main(void) {
  us l, d, x;
  std::cin >> l >> d >> x;

  for (us i = l; i <= d; ++i) {
    if (count(i) == x) {
      std::cout << i << std::endl;
      break;
    }
  }

  for (us i = d; i >= l; --i) {
    if (count(i) == x) {
      std::cout << i << std::endl;
      break;
    }
  }
  return 0;
}

us count(us x) {
  us retval = 0;

  while (x > 0) {
    retval += x % 10;
    x /= 10;
  }

  return retval;
}