#include <iostream>
#include <string>

int main() {
  std::string output = "";
  short g, s, c, total;
  std::cin >> g >> s >> c;
  total = (g * 3) + (s * 2) + c;

  if (total > 7) {
    output += "Province or ";
  } else if (total > 4) {
    output += "Duchy or ";
  } else if (total > 1) {
    output += "Estate or ";
  }

  if (total > 5) {
    output += "Gold";
  } else if (total > 2) {
    output += "Silver";
  } else {
    output += "Copper";
  }
  
  std::cout << output << std::endl;
  return 0;
}
