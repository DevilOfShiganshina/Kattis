#include <iostream>
#include <bits/stdc++.h>

int main() {
  int mods[42];
  memset(mods, 0, sizeof(mods));
  
  for (int i = 0; i < 10; i++) {
    int input;
    std::cin >> input;
    mods[input%42] = 1;
  }

  int count = 0;

  for (int i = 0; i < 42; i++) {
    if (mods[i] > 0) { count++; }
  }
  std::cout << count << std::endl;
  return 0;
}