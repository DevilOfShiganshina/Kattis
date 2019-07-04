#include <iostream>
#include <string>
#include <sstream>
#include <vector>

bool vowel(char ch) {
  return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}

std::vector <std::string> to_words(std::string str) {
  std::vector<std::string> retval;
  std::istringstream ss(str);

 while (ss) {
    std::string word;
    ss >> word;
    retval.push_back(word);
  }
  retval.pop_back();
  return retval;
}

std::string pig_latin(std::string str) {
  if (vowel(str[0])) {
    str += "yay";
    return str;
  } else {
    std::string temp;
    int index = 0;
    while (!vowel(str[index])) {
      temp += str[index];
      index++;
    }

    str.erase(0, index);
    str += temp + "ay";
    return str;
  }
}

int main() {
  std::vector<std::string> retval;
  std::string str;

  while (std::getline(std::cin, str)) {
    std::vector<std::string> returned = to_words(str);
    str = "";
    for (int i = 0; i < returned.size(); i++) {
      str += pig_latin(returned[i]);
      str += " ";
    }
    retval.push_back(str);
  }

  for (int i = 0; i < retval.size(); i++) {
    std::cout << retval[i] << std::endl;
  }

  return 0;
}