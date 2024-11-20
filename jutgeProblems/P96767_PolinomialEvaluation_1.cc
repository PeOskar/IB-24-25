/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Polynomial evaluation 1
*        P96767
*        Calculates result of polynomial given value and coefficients
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  double numero{0}, base{0}, total{0.0};
  int coeficiente{0};
  std::cin >> base;
  while (std::cin >> numero) {
    total = (numero * pow(base, coeficiente)) + total;
    coeficiente++;
  }
  std::cout << std::fixed << std::setprecision(4) << total << std::endl;
  return 0;
}
