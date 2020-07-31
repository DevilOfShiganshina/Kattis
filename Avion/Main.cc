#include <iostream>
#include <string>
#include <vector>

int main(void) {
  unsigned short count = 0;
  std::vector<unsigned int> blmps;
  for (unsigned int i = 0; i < 5; i++) {
    std::string in;
    std::cin >> in;
    if (in.find("FBI") != std::string::npos) {
      count++;
      blmps.push_back(i + 1);
    }
  }

  if (count > 0) {
    for (unsigned int i = i; i < count; i++) {
      std::cout << blmps[i] << " ";
    } std::cout << std::endl;
  }

  else {
    std::cout << "HE GOT AWAY!" << std::endl;
  }
  return 0;
}