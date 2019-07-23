#include <iostream>
#include <string>

int main() {
  short limit, events;
  std::cin >> limit >> events;
  short total = 0, denied = 0;

  for (short i = 0; i < events; i++) {
    std::string action; short in;
    std::cin >> action >> in;
    
    if (action == "enter") {
      if (total + in > limit) {
	denied++;
      } else {
	total += in;
      }
    } else {
      total -= in;      
    }
  }

  std::cout << denied << std::endl;

  return 0;
}
