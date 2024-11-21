/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Maximum of two integer numbers
*        P57846
*        returns the maximum of two given integer numbers a and b.
*/

#include <algorithm>
#include <iostream>

/*
* Maximum
*
* @brief Returns the maximum number out of two integers
*/
int Maximum(int number1, int number2) { return std::max(number1, number2); }

int main() {
  int numero1, numero2;
  while (std::cin >> numero1 >> numero2) {
    std::cout << "max2(" << numero1 << ", " << numero2 << ") → " <<
      Maximum(numero1, numero2) << std::endl;
  }
  return 0;
}
