#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  unsigned int numero{0};
  int cuadrado{0};
  int i{0};
  double raizcuadrada{0};
  while (std::cin >> numero) {
    cuadrado = pow(numero, 2);
    raizcuadrada = sqrt(numero);
    std::cout << cuadrado << " " << std::fixed << std::setprecision(6) <<
      raizcuadrada << std::endl;
  }
  return 0;
}
