#include <iostream>
#include <cmath>

int main() {
  int Num1, resultado = 0, potencia = 0;
  std::cin >> Num1;

  while (Num1 < 0) {
    if (Num1 < 0) {
      std::cin >> Num1;
    }
  }
  do {
    potencia = pow(resultado, 2) + potencia;
    resultado++;
  } while (resultado <= Num1);

  std::cout << potencia << std::endl;
  return 0;
}
