/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Multiplication table
*        P31170
*        prints the multiplication table of input
*/

#include <iostream>

int main() {
  int Tabla, i = 1;
  std::cin >> Tabla;
  while (Tabla < 0) {
    std::cin >> Tabla;
  }

  do {
    std::cout << Tabla << "*" << i << " = " << Tabla*i << std::endl;;
    i++;
  } while (i <= 10);
  return 0;
}
