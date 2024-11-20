/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Sum of squares
*        P36668
*        prints sum of squares until input
*/

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
