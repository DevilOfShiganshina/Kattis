#include <iostream>
#include <map>
#include <string>
#include <vector>

int count_location(std::vector<std::string> in) {
  std::map<std::string, short> map;
  for (short i = 0; i < in.size(); i++) {
    map[in[i]]++;
  }

  return map.size();
}

int main() {
  short t;
  std::cin >> t;
  while (t--) {
    std::vector<std::string> input;
    short n;
    std::cin >> n;
    while (n--) {
      std::string in;
      std::cin >> in;
      input.push_back(in);
    }
    std::cout << count_location(input) << std::endl;
  }

  return 0;
}