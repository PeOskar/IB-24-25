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
