/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Maximum of four integer numbers
*        P73231
*        returns the maximum of four given integer numbers
*/

#include <algorithm>
#include <iostream>

/*
* Maximum of 4
*
* @brief returns the maximum number out of 4 integers
*/
int MaximumOf4(int number1, int number2, int number3, int number4) { return
std::max(std::max(number1, number2), std::max(number3, number4)); }

int main() {
  int numero1{0}, numero2{0}, numero3{0}, numero4{0};
  while (std::cin >> numero1 >> numero2 >> numero3 >> numero4) {
    std::cout << "max4(" << numero1 << ", " << numero2 << ", " << numero3<< ", " << numero4 << ") → " 
      << MaximumOf4(numero1, numero2, numero3, numero4) << std::endl;
  }
  return 0;
}
