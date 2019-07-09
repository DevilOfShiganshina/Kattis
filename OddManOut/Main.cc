#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> non_duplicate(std::vector<int> vec) {
  std::unordered_map<int, int> mp;
  for (int i = 0; i < vec.size(); i++) {
    mp[vec[i]]++;
  }
  std::vector<int> retval;
  for (auto x : mp) {
    if (x.second == 1) {
      retval.push_back(x.first);
    }
  }
  return retval;
}

int main() {
  short n, case_no = 1;
  std::cin >> n;
  while (n--) {
    short g;
    std::vector<int> input;
    std::cin >> g;
    while (g--) {
      int c;
      std::cin >> c;
      input.push_back(c);
    }
    input = non_duplicate(input);
    std::cout << "Case #" << case_no << ": ";
    for (auto x : input) {
      std::cout << x << " ";
    }
    std::cout << std::endl;
    case_no++;
  }

  return 0;
}