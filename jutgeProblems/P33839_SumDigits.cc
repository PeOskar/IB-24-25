/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Sum of digits
*        P33839
*        prints the sum of digits
*/

#include <cmath>
#include <iostream>

int main() {
  int numero{0}, num1;
  
  while (std::cin >> numero) {
    num1=numero;
    int sumadigitos{0};
    do {sumadigitos += numero % 10;
      numero /= 10;}while (numero>0);
    std::cout << "The sum of the digits of " << num1 << " is " << sumadigitos <<
      "." << std::endl;  
  }
  return 0;
}
