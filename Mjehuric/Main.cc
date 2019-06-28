#include <iostream>

void swap(int arr[], int index_a, int index_b) {
  int test = arr[index_a];
  arr[index_a] = arr[index_b];
  arr[index_b] = test; 
}

void print(int arr[]) {
  for (int i = 0; i < 5; i++) {
    std::cout << arr[i] << " ";
  } std::cout << std::endl;
}

void sort(int arr[]) {
  while (1) {
    bool flag = false;
    for (int i = 0; i < 4; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(arr, i, i + 1);
        flag = true;
        print(arr);
      }
    }

    if (flag == false) { break; }
  }

}

int main() {
  int input[5];

  std::cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4];

  sort(input);

  return 0;
}