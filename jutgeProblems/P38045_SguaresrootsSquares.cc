/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Computing square roots and squares
*        P38045
*        reads a sequence of natural numbers, and prints the square and the square root of each one.
*/

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  unsigned int numero{0};
  int cuadrado{0};
  double raizcuadrada{0};
  while (std::cin >> numero) {
    cuadrado = pow(numero, 2);
    raizcuadrada = sqrt(numero);
    std::cout << cuadrado << " " << std::fixed << std::setprecision(6) <<
      raizcuadrada << std::endl;
  }
  return 0;
}
