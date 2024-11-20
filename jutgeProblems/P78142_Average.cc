/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Average
*        P78142
*        reads a sequence of numbers and prints their average.
*/

#include <iomanip>
#include <iostream>

int main() {
  double numero{0}, sumatoria{0};
  int i{0};
  while (std::cin >> numero) {
    sumatoria += numero;
    i++;
  }
  std::cout << std::fixed << std::setprecision(2) << sumatoria / i << std::endl;
}
