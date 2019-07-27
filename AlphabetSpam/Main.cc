#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;

  int ws = 0, lc = 0, uc = 0, sym = 0;
  int len = str.length();
  for (int i = 0; i < len; i++) {
    if (str[i] == '_') { ws++; }
    else if (islower(str[i])) { lc++; }
    else if (isupper(str[i])) { uc++; }
    else { sym++; }
  }

  printf("%.16f\n", (double) ws / len);
  printf("%.16f\n", (double) lc / len);
  printf("%.16f\n", (double) uc / len);
  printf("%.16f\n", (double) sym / len);

  return 0;
}
