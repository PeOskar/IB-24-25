#include <iostream>

int main() {
  int matriz;
  std::cin >> matriz;
  int suma{0};
  int diagonal{1};
  int diagonal2 = matriz;
  for (int i {1}; i <= matriz; i++) {
    for (int j{1}; j <= matriz; j++) {
      if (j == diagonal or j == diagonal2) {
        char chaess_board;
        std::cin >> chaess_board;
        int valores = chaess_board - '0';
        suma += valores;
      }
      else {
        char chaess_board;
        std::cin >> chaess_board;
      }
    }
    diagonal += +1;
    diagonal2 -= 1;
  }
  std::cout << suma << std::endl;
}
