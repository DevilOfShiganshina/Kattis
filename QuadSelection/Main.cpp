#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int QuadSelection(int x, int y) {
  if (x > 0 && y > 0) return 1;
  else if (x < 0 && y > 0) return 2;
  else if (x < 0 && y < 0) return 3;
  else return 4;
}

int main() {
  int xVal = 0, yVal = 0;

  while (xVal == 0 || yVal == 0) {
    cout << "Please enter (x, y) values (Respectively): ";
    cin >> xVal >> yVal;
  }
  cout << "Points (" << xVal << ", " << yVal << ") lie in the quadrant: "<< QuadSelection(xVal, yVal) << endl;
  return 0;
}