#include <algorithm>
#include <iostream>

bool read_rational(int &num, int &den) {
  char c;
  if (std::cin >> num >> c >> den) {
    int x = std::__gcd(num, den);
    num = num / x;
    den = den / x;
    return true;
  }
  return false;
}

int main() {
  int numerador{0}, denominador{0};
  while (std::cin >> numerador >> denominador) {
    while (read_rational(numerador, denominador)) {
      std::cout << numerador <<" "<< denominador << std::endl;
    }
  }
  return 0;
}
