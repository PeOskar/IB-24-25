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
  std::cout << suma << std::endl;;
}
