/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Harmonical numbers 2
*        P58153
*        Prints difference of two harmonical numbers
*/

#include <iomanip>
#include <iostream>

int main() {
  double numero1, numero2;
  while (std::cin >> numero1 >> numero2) {
    double H{0.0};
    for (int i = numero2 + 1; i <= numero1; i++) {
      H += 1.0 / i;
    }
    std::cout << std::fixed << std::setprecision(10) << H << std::endl;
  }
  return 0;
}
