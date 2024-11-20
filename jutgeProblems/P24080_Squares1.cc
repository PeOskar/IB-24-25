/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Squares 1
*        P24080
*        Prints a square of size n
*/

#include <iostream>

int main() {
  int numero;
  int k{0};
  while (std::cin >> numero) {
    if (k == 0) k = 1;
    else std::cout << std::endl; 
    for (int i = 0; i < numero; i++) {
      for (int j = 0; j < numero; j++) {
        std::cout << numero;
      }
      std::cout << std::endl;
    }
  }
  return 0;
}
