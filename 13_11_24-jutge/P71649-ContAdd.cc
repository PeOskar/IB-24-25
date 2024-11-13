#include <iostream>

void count_and_add(int& num, int& sum){
  sum=0;
  num=0;
  int x;
  while (std::cin >> x){
    ++num;
    sum += x;
  }
}

int main() {
  int knumero{0}, ksuma{0};
    count_and_add(knumero, ksuma);
  std::cout << knumero << " " << ksuma << std::endl;
}
