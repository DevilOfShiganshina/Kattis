#include <iostream>

int main() {
  while (1) {
    short n;
    std::cin >> n;
    if (n == -1) { break; }
    else {
      short prev = 0;
      short sum = 0;
      for (short i = 0; i < n; i++) {
        short speed, time;
        std::cin >> speed >> time;
        sum += speed * abs(prev - time);
        prev = time;
      } std::cout << sum << " miles" << std::endl;
    }
  } return 0;
}
