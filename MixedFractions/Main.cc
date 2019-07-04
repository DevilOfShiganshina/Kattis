#include <iostream>
#include <string>
#include <vector>

std::string mixed_fractions(int numer, int denom) {
  std::string retval = "";

  if (numer < denom) {
    return ("0 " + std::to_string(numer) + " / " + std::to_string(denom));
  } else {
    int count = 0;
    while (numer >= denom) {
      numer -= denom;
      count++;
    }
    return (std::to_string(count) + " " + std::to_string(numer) + " / " + std::to_string(denom));
  }
}

int main() {
  std::vector<std::string> ans;

  while (1) {
    int numer, denom;
    std::string retval;
    std::cin >> numer >> denom;
    if (numer == 0 && denom == 0) { break; }
    retval = mixed_fractions(numer, denom);
    ans.push_back(retval);
  }

  for (int i = 0; i < ans.size(); i++) {
    std::cout << ans[i] << std::endl;
  }

  return 0;
}