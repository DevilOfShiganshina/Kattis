#include <iostream>
#include <cmath>
#define PI 3.1415926535897

int main() {
  short h, v;
  std::cin >> h >> v;
  std::cout << ceil(h / (sin(v * PI / 180))) << std::endl;
  return 0;
}