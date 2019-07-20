 #include <iostream>
#include <string>

short foo(std::string str) {
  short retval = 0;
  for (int i = 0; i < str.length(); i++) {
    if (i % 3 == 0 && str[i] != 'P') {
      retval++;
    } else if (i % 3 == 1 && str[i] != 'E') {
      retval++;
    } else if (i % 3 == 2 && str[i] != 'R') {
      retval++;
    }
  } return retval;
}

int main() {
  std::string str;
  std::cin >> str;
  std::cout << foo(str) << std::endl;

  return 0;
}
