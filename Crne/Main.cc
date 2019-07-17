#include <iostream>

typedef long long ll;

ll crne(int n) {
  ll retval, x = n / 2;
  x++;
  retval = x;
  if (n % 2 == 1) { x++; }
  retval *= x;

  return retval;
}

int main() {
  ll n;
  std::cin >> n;
  std::cout << crne(n) << std::endl;
  return 0;
}
