#include <iostream>
#include <vector>
#include <iomanip>

int main() {
  std::vector<std::vector<double>> grades;
  std::vector<double> avg;
  double sum = 0;
  int N;
  std::cin >> N;

  for (int i = 0; i < N; i++) {
    sum = 0;
    double in; int s;
    std::cin >> s;
    std::vector<double> put;
    for (int j = 0; j < s; j++) {
      std::cin >> in;
      sum += in;
      put.push_back(in);
    }
    grades.push_back(put);;
    avg.push_back(sum / s);
  }

  std::vector<double> count;

  for (int i = 0; i < grades.size(); i++) {
    double cnt = 0;
    for (int j = 0; j < grades[i].size(); j++) {
      if (grades[i][j] > avg[i]) {
        cnt++;
      }
    }
    count.push_back(cnt);
  }

  for (int i = 0; i < grades.size(); i++) {
    std::cout << std::fixed << std::setprecision(3) << (count[i] / grades[i].size()) * 100 << "%" << std::endl;
  }

  return 0;
}
