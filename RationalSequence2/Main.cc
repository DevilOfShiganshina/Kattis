#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int F(int p, int q) {

  std::string path;

  while (1) {
    if (p == 1 && q == 1) {
      break;
    } else if (p < q) {
      q -= p;
      path.push_back(0);
    }
    else {
      p -= q;
      path.push_back(1);
    }
  }
  std::reverse(path.begin(), path.end());
  int retval = 1;

  if (path.size() == 0) { return retval; }
  else {
    for (int i = 0; i < path.size(); i++) {
      if (path[i] == 1) { retval = (retval * 2) + 1; }
      else { retval = retval * 2; }
    }
  }

  return retval;
}

int main() {
  std::vector<std::string> str;
  std::vector<int> p, q;
  int N;

  std::cin >> N;

  for (int i = 0; i < N; i++) {
    int in;
    std::string input, x, y;
    std::cin >> in >> input;
    in = 0;
    while (input[in] != '/') {
      x.push_back(input[in]);
      in++;
    }
    y = input.substr(++in, input.size() - 1);
    in = std::stoi(x);
    p.push_back(in);
    in = std::stoi(y);
    q.push_back(in);
  }

  for (int i = 0; i < N; i++) {
    std::cout << i+1 << " " << F(p[i], q[i]) << std::endl;
  }

  return 0;
}