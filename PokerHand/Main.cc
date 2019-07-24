#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int main() {
  std::map<char, short> m;
  
  for (short i = 0; i < 5; i++) {
    std::string s;
    std::cin >> s;
    m[s[0]]++;
  }
  
  short strength = 0;
  
  for (auto i : m) {
    strength = std::max(strength, i.second);
  }

  std::cout << strength << std::endl;
  
  return 0;
}
