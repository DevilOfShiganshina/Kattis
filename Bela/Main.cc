#include <iostream>
#include <string>

unsigned short calculate(bool flag, char in) {
  if (flag == true) {
    switch(in) {
      case 'A': return 11;
      case 'K': return 4;
      case 'Q': return 3;
      case 'J': return 20;
      case 'T': return 10;
      case '9': return 14;
      default: return 0;
    }
  } else {
    switch(in) {
      case 'A': return 11;
      case 'K': return 4;
      case 'Q': return 3;
      case 'J': return 2;
      case 'T': return 10;
      default: return 0;      
    }
  }
}

int main() {
  unsigned short n, sum = 0;
  char dominant;
  std::cin >> n >> dominant;
  for (short i = 0; i < 4*n; i++) {
    bool flag;
    std::string in;
    std::cin >> in;

    if (in[1] == dominant) {
      flag = true;
      sum += calculate(flag, in[0]);
    } else {
      flag = false;
      sum += calculate(flag, in[0]);
    }
  } std::cout << sum << std::endl;

  return 0;
}