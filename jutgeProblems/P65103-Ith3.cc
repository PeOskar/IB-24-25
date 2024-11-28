/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief I-th3
*        P65103
*        given an integer number i and a sequence of natural numbers x1, …, xn,
*        prints xi, if position is incorrect, tells so
*/

#include <iostream>

int main() {
  int secuencia{0}, numero{0},  posicion{1}, auxiliar{0};;
  std::cin >> numero;
  bool incorrect = true;
  while (std::cin >> secuencia && secuencia != -1) {
    if (posicion == numero) {
      auxiliar = secuencia;
      incorrect = false;
    }
    posicion += 1;
  }
  if (!incorrect) {
    std::cout << "At the position " << numero << " there is a(n) " << auxiliar << "."
      << std::endl;
  } else {
    std::cout << "Incorrect position." << std::endl;
  }
  return 0;
}
