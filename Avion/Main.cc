#include <iostream>
#include <string>

int main(void) {
  bool b = false;
  for (unsigned int i = 0; i < 5; i++) {
    std::string in;
    std::cin >> in;
    if (in.find("FBI") != std::string::npos) {
      b = true;
      std::cout << i + 1 << " ";
    }
  } std::cout << std::endl;
  
  if (!b) {
    std::cout << "HE GOT AWAY!" << std::endl;
  }
  return 0;
}