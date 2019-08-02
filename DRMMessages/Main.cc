#include <iostream>
#include <string>

void convert(std::string& str, int total) {
  for (int i = 0; i < str.length(); i++) {
    str[i] = ('A' + (((str[i] - 'A') + total) % 26));
  }
}

int main() {
  std::string second, first;
  std::cin >> second;
  
  first = second.substr(0, second.length() / 2);
  second = second.substr(second.length() / 2);
  
  int ftotal = 0, stotal = 0;
  
  for (int i = 0; i < first.length(); i++) {
    ftotal += int(first[i] - 65) % 26;
    stotal += int(second[i] - 65) % 26;
  }

  convert(first, ftotal);
  convert(second, stotal);

  for (int i = 0; i < first.length(); i++) {
    first[i] = char('A' + (int(first[i] - 65) + int(second[i] - 65)) % 26);
  }
  
  std::cout << first << std::endl;
  return 0;
}