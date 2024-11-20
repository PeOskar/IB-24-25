/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Squares 3
*        P39359
*        Prints several squares filling them with 0,1,2,3...etc..
*/

#include <iostream>

int main() {
  int numero{0}, cuadrado{0}, espacio{0};
  while (std::cin >> numero) {
    if (espacio == 0) {
      espacio = 1;
    } 
    else {
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
  }
  return 0;
}
