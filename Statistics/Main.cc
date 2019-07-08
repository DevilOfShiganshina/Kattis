#include <iostream>
#include <climits>

int main() {
  int n;
  int case_no = 1;

  while (std::cin >> n) {
    if (case_no == 11) { break; }
    int in;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
      std::cin >> in;
      if (in > max) { max = in; }
      if (in < min) { min = in; }
    }
    std::cout << "Case " << case_no << ": " << min << " " << max << " " << max - min << std::endl;
    case_no++;
  }

  return 0;
}