#include <iostream>
#include <string>

int main() {
  std::string original, converted = "";
  std::getline(std::cin, original);

  for (char i : original) {
    if (i == 'A' || i == 'a') { converted += '@'; }
    else if (i == 'B' || i == 'b') { converted += '8'; }
    else if (i == 'C' || i == 'c') { converted += '('; }
    else if (i == 'D' || i == 'd') { converted += "|)"; }
    else if (i == 'E' || i == 'e') { converted += '3'; }
    else if (i == 'F' || i == 'f') { converted += '#'; }
    else if (i == 'G' || i == 'g') { converted += '6'; }
    else if (i == 'H' || i == 'h') { converted += "[-]"; }
    else if (i == 'I' || i == 'i') { converted += '|'; }
    else if (i == 'J' || i == 'j') { converted += "_|"; }
    else if (i == 'K' || i == 'k') { converted += "|<"; }
    else if (i == 'L' || i == 'l') { converted += '1'; }
    else if (i == 'M' || i == 'm') { converted += "[]\\/[]"; }
    else if (i == 'N' || i == 'n') { converted += "[]\\[]"; }
    else if (i == 'O' || i == 'o') { converted += '0'; }
    else if (i == 'P' || i == 'p') { converted += "|D"; }
    else if (i == 'Q' || i == 'q') { converted += "(,)"; }
    else if (i == 'R' || i == 'r') { converted += "|Z"; }
    else if (i == 'S' || i == 's') { converted += '$'; }
    else if (i == 'T' || i == 't') { converted += "']['"; }
    else if (i == 'U' || i == 'u') { converted += "|_|"; }
    else if (i == 'V' || i == 'v') { converted += "\\/"; }
    else if (i == 'W' || i == 'w') { converted += "\\/\\/"; }
    else if (i == 'X' || i == 'x') { converted += "}{"; }
    else if (i == 'Y' || i == 'y') { converted += "`/"; }
    else if (i == 'Z' || i == 'z') { converted += '2'; }
    else { converted += i; }
  } std::cout << converted << std::endl;

  return 0;
}
