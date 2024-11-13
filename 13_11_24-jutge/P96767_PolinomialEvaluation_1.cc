#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  double numero{0}, base{0}, total{0.0};
  int coeficiente{0};
  std::cin >> base;
  while (std::cin >> numero) {
    total = (numero * pow(base,coeficiente)) + total;
    coeficiente++;
  }
  std::cout << std::fixed << std::setprecision(4) << total << std::endl;
  return 0;
}
