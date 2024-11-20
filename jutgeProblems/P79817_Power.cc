/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Powers
*        P79817
*        Computes powers
*/

#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
  int exponente{0}, numero{0};
  while (std::cin >> numero >> exponente) {
    if (exponente < 0) {
      return 1;
    }
    std::cout << std::fixed << std::setprecision(0) << pow(numero, exponente) <<
      std::endl;
  }
  return 0;
}
