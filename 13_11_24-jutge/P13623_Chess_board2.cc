#include <iostream>

int main() {
  int fila{0}, columna{0}, total{0};
  std::cin >> fila >> columna;
  char chess_board;
  for (int i = 0; i < fila; ++i) {
    for (int j = 0; j < columna; ++j) {
      std::cin >> chess_board;
      if ((j + i) % 2 == 0) {
        total += chess_board - '0';
      }
    }
  }
  std::cout << total << std::endl;
}
