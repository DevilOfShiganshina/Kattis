#include <algorithm>
#include <iostream>
#include <string>

int main() {
  int arr[3];
  std::string order;
  for (short i = 0; i < 3; i++) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr+3);

  std::cin >> order;

  for (short i = 0; i < 3; i++) {
    std::cout << arr[order[i] - 'A'] << " ";
  } std::cout << std::endl;

  return 0;
}