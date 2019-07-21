#include <cmath>
#include <iostream>
#include <string>

short seven_wonders(std::string str) {
  short total = 0;
  short min = 100;
  short count[3];
  count[0] = 0;
  count[1] = 0;
  count[2] = 0;

  for (short i = 0; i < str.size(); i++) {
    if (str[i] == 'C') {
      count[0]++;
    } else if (str[i] == 'G') {
      count[1]++;
    } else {
      count[2]++;
    }
  }

  for (short i = 0; i < 3; i++) {
    if (count[i] < min) {
      min = count[i];
    } total += count[i] * count[i];
  } total = total + (7 * min);
  return total;
}

int main() {
  std::string str;
  std::cin >> str;
  std::cout << seven_wonders(str) << std::endl;

  return 0;
}
