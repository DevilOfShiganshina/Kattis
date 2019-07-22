#include <iostream>
#include <string>
#define PI 3.14159265359

std::string diablo(float a, float n) {
  float rad = n / (2 * PI);
  rad = PI * (rad * rad);
  if (rad >= a) {
    return "Diablo is happy!";
  } else {
    return "Need more materials!";
  }
}

int main() {
  float a, n;
  std::cin >> a >> n;
  std::cout << diablo(a, n) << std::endl;

  return 0;
}
