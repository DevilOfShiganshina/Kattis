#include <algorithm>
#include <iostream>
#include <vector>
#define pb push_back

int main() {
  short r, n;
  std::vector<short> occupado;
  std::cin >> r >> n;

  bool *room = new bool[r];

  for (int i = 0; i < n; i++) {
    short in;
    std::cin >> in;
    occupado.pb(in);
    room[in] = true;
  }
  if (r == n) {
    std::cout << "too late" << std::endl;
  } else {
    for (short i = 1; i <= r; i++) { 
      if (!room[i]) {
	std::cout << i << std::endl;
	break;
      }
    }
  }

  return 0;
}
