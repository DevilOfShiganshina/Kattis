#include <iostream>
#include <iomanip>

int main() {
  int n;
  std::cin >> n;

  while (n--) {
    double beats, seconds;

    std::cin >> beats >> seconds;
    double bpm = (60 * beats) / seconds;
    double x = 60 / seconds;

    std::cout << std::fixed << std::setprecision(4) << bpm - x << " " << bpm << " " << bpm + x << std::endl;
  }

  return 0;
}