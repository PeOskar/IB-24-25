/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief I-th
*        P27411
*        given an integer number i and a sequence of natural numbers x1, …, xn,
*        prints xi., if position is invalid, tells so
*/

#include <iostream>

int main() {
  int numero, secuencia, posicion{1};
  std::cin >> numero;
  while (std::cin >> secuencia && posicion != numero && secuencia != -1) {
    posicion += 1;
  }
  if (posicion <= 0 || numero > posicion || numero <= 0 || secuencia < 0) {
    std::cout << "Incorrect position." << std::endl;
  } else {
    std::cout << "At the position " << numero << " there is a(n) " << secuencia
         << "." << std::endl;
  }
  return 0;
}
