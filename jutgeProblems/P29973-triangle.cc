/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Triangle
*        P29973
*        Prints a triangle of size n
*/

#include <iostream>

int main() {
  int size{0};
  std::cin >> size;
  for (int i{0}; i < size; i++) {
    for (int j{0}; j < (i + 1); j++) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
  return 0;
}
