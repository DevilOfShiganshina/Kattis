#include <iostream>

int main() {
  int people, chicken, difference;
  std::cin >> people >> chicken;
  difference = chicken - people;

  if (difference > 0) {
    if (difference == 1) {
      std::cout << "Dr. Chaz will have " << difference << " piece of chicken left over!" << std::endl; 
    } else {
      std::cout << "Dr. Chaz will have " << difference << " pieces of chicken left over!" << std::endl;
    }
  } if (difference < 0) {
    if (difference == -1) {
      std::cout << "Dr. Chaz needs " << -difference << " more piece of chicken!" << std::endl;  
    } else {
      std::cout << "Dr. Chaz needs " << -difference << " more pieces of chicken!" << std::endl;
    }
  }
}