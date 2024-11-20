#include <algorithm>
#include <iostream>

void read_rational(int &num, int &den) {
  char c;
  std::cin >> num >> c >> den;
  int x = std::__gcd(num, den);
  num = num / x;
  den = den / x;
}

int main() {
  int numerador{0}, denominador{0};
  while (std::cin >> numerador >> denominador) {
    read_rational(numerador, denominador);
  }
  return 0;
}
