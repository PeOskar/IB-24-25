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
