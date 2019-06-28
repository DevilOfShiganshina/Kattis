#include <iostream>
#include <string>
#include <vector>

void simon_says(std::string str) {
  int string_size = str.size();
  if (str.substr(0,10).compare("Simon says") == 0) {
    std::cout << str.substr(11) << std::endl;
  }
}

int main() {
  std::vector<std::string> input;
  std::string in;
  int N;
  std::cin >> N;
  std::getline(std::cin, in);

  for (int i = 0; i < N; i++) {
    std::getline(std::cin, in);
    input.push_back(in);
  } for (int i = 0; i < N; i++) {
    simon_says(input[i]);
  }
  
  return 0;
}