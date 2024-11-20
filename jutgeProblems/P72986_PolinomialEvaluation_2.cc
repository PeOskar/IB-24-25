/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Polynomial evaluation 2
*        P72986
*        Evaluates polynomial using Horner's rule
*/

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
