/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Squares 4
*        P39359
*        Prints n squares of n size filling them with 0,1,2...etc
*/

#include <iostream>

int main() {
  int numero{0}, espacio{0}, cuadrado{0};
  std::cin >> numero;
  while (espacio < numero) {
    if (espacio == 0); else {
      std::cout << std::endl;
    }
    for (int i{0}; i < numero; i++) {
      for (int j{0}; j < numero; j++) {
        std::cout << cuadrado;
        cuadrado += 1;
        if (cuadrado > 9)
          cuadrado = 0;
      }
      std::cout << std::endl;
    }
    cuadrado = 0;
    espacio += 1;
  }
  return 0;
}
