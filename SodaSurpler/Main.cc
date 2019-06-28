# include <iostream>

int bottles(short possess, short found, short need) {
  short count = 0;
  possess += found;
  while (possess >= need) {
    short val = possess / need;
    count += val;
    found = possess % need;
    possess = val + found;
  }

  return count;
}

int main() {
  short e, f, c;

  std::cin >> e >> f >> c;

  std::cout << bottles(e, f, c) << std::endl;
}