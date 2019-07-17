#include <algorithm>
#include <iostream>

int main() {
  
  while (1) {
    int arr[3];
    std::cin >> arr[0] >> arr[1] >> arr[2];
    if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) { break; }
    std::sort(arr, arr + 3);
    if ((arr[0] * arr[0]) + (arr[1] * arr[1]) == (arr[2] * arr[2])) {
      std::cout << "right" << std::endl;
    } else {
      std::cout << "wrong" << std::endl;
    }
  }
}
