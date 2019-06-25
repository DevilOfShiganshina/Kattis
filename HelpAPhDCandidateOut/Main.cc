#include <iostream>
#include <string>
#include <vector>

int main() {
  int N;
  std::vector<std::string> vec;
  std::vector<std::string> ans;

  std::cin >> N;

  for (int i = 0; i < N; i++) {
    std::string str;
    std::cin >> str;
    vec.push_back(str);
  }

  for (int i = 0; i < N; i++) {
    std::string str = vec[i];
    if (str == "P=NP") { ans.push_back("skipped"); }

    else {
      std::string a, b;
      int index = 0;
      while (str[index] != '+') {
        a.push_back(str[index]);
        index++;
      }

      b = str.substr(index, str.size() -1);
      int addVal = std::stoi(a) + std::stoi(b);
      ans.push_back(std::to_string(addVal));
    }
  }

  for (int i = 0; i < N; i++) {
    std::cout << ans[i] << std::endl;
  }

  return 0;
}