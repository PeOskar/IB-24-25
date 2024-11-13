#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

int main() {
  double numero{0}, base{0}, total{0.0};
  int coeficiente{0};
  std::cin >> base;
  std::vector<double> numeros;
  while (std::cin >> numero) {
    numeros.push_back(numero);
    coeficiente++;
  }
  for (int i = 0; i < coeficiente; i++) {
    total += numeros[i] * pow(base, coeficiente - i - 1);
  }
  std::cout << std::fixed << std::setprecision(4) << total << std::endl;
  return 0;
}
