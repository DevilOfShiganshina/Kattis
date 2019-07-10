#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  short w_count = 0, b_count = 0;

  for (int i = 0; i <str.length(); i++)
    if (str[i] == 'W')
      w_count++;
    else
      b_count++;

  if (b_count == w_count)
    std::cout << "1" << std::endl;
  else 
    std::cout << "0" << std::endl;
  
  return 0;
} 