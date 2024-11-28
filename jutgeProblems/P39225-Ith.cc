/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief I-th
*        P39225
*        given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.
*/

#include <iostream>

int main() {
  int numero{0}, secuencia{0}, posicion{1};
  std::cin >> numero;
  while (std::cin >> secuencia && posicion != numero && secuencia != -1) {
    posicion += 1;      
  }
  std::cout << "At the position " << numero << " there is a(n) " << secuencia <<
    "." << std::endl;
  return 0;
}
