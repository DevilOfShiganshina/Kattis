#include <iostream>
#include <algorithm>
#include <string>

typedef unsigned short us;

int main(void) {
  us cases;
  std::cin >> cases;

  us total = 0;
  for (us i = 0; i < cases; ++i) {
    std::string str;
    std::cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if (str.find("pink") != std::string::npos || str.find("rose") != std::string::npos) { total++; }
  }

  if (total) {
    std::cout << total << std::endl;
  } else {
    std::cout << "I must watch Star Wars with my daughter" << std::endl;
  }
  return 0;  
}