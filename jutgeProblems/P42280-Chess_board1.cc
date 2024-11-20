/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Chess board 1
*        P42280
*        Computes number of coins given in a chess board
*/

#include <iostream>

int main() {
  int fila{0}, columna{0};
  std::cin >> fila >> columna;
  int suma{0};
  for (int i{0}; i < fila; i++) {
    for (int j{0}; j < columna; j++) {
      char cheess_board;
      std::cin >> cheess_board;
      int valores = cheess_board - '0';
      suma += valores;
    }
  }
  std::cout << suma << std::endl;
  return 0;
}
