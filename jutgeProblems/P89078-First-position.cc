/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief First Position
*        P89078
*        reads a sequence of natural numbers and prints the position of the first even number.
*/

#include <iostream>

int main() {
  int secuencia{0}, position{1};
  while (std::cin >> secuencia && secuencia % 2 != 0) {
    position += 1;
  }
  std::cout << position << std::endl;
  return 0;
}
