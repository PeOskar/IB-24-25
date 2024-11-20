/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Logarithms
*        P90133
*        Approximates logarithm
*/

#include <iostream>

int main() {
  int base{0}, number{0};
  while (std::cin >> base >> number) {
    int result{0};
    if (base < 2 || number < 1) {
      return 1;
    }
    while (number >= base) {
      number /= base;
      result += 1;
    }
    std::cout << result << std::endl;
  }
  return 0;
}
