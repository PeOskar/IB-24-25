/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Rhombus
*        P72484
*        Prints a Rhombus of size n
*/

#include <iostream>

int main() {
  int size{0};
  std::cin >> size;
  for (int i{1}; i <= size; i++) {
    for (int j{0}; j < (size - i); j++) {
      std::cout << ' ';
    }
    for (int k{0}; k < (2 * i - 1); k++) {
      std::cout << '*';
    }
    std::cout << std::endl;
  } 
  for (int i{1}; i < size; i++) {
    for (int j{0}; j < i; j++) {
      std::cout << ' ';
    }
    for (int k{0}; k < 2 * (size - i) - 1; k++) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
  return 0;
}
