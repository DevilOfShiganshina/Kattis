#include <iostream>
#include <string>
#include <sstream>

int main() {
  short n;
  std::cin >> n;
  short count = 1;
  bool flag = true;
  
  while (n--) {
    std::string str;
    std::cin >> str;
    if (str == "mumble") {
      count++;
      continue;
    } else {
      std::stringstream ss(str);
      short num;
      ss >> num;
      ss.clear();
      if (num != count) { flag = false; }
    } count++;
  }

  if (flag) {
    std::cout << "makes sense" << std::endl;
  } else {
    std::cout << "something is fishy" << std::endl;
  }
  return 0;
}
