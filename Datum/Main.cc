#include <iostream>
#include <string>

void print(int day, int month) {
  std::string days[] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday" };
  int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

  int index;

  if (month == 0) {
    index = day % 7;
    std::cout << days[index] << std::endl;
  } else {
    int total_days = 0;
    for (int i = 0; i < month; i++) {
      total_days += months[i];
    }

    total_days += day;

    index = total_days % 7;
    std::cout << days[index] << std::endl;
  }
}

int main() {

  int d, m;

  std::cin >> d >> m;

  print(d, --m);

  return 0;
}