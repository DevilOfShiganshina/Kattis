#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> F(int N) {
  int p = 1, q = 1;
  vector<int> remain;

  while (!(N <= 1)) {
    if (N % 2 == 0) { remain.push_back(0); }
    else { remain.push_back(1); }
    N /= 2;
  }

  for (int i = remain.size() - 1; i >= 0; i--) {
    if (remain[i] == 0) { q = p + q; }
    else { p = p + q; }
  }

  pair<int, int> retval;
  retval.first = p;
  retval.second = q;

  return retval;
}

int main() {
  int input;
  cout << "Please enter N: ";
  cin >> input;

  pair<int, int> retval = F(input);

  cout << "p: " << retval.first << endl;
  cout << "q: " << retval.second << endl;
  cout << "p / q: " << retval.first << " / " << retval.second << endl;

  return 0;
}