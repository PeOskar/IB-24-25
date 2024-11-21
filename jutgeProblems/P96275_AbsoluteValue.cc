/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Absolute value
*        P96275
*        returns the absolute value of an integer n.
*/

#include <iostream>
#include <cmath>

/*
* Absolute
*
* Returns absolute value of given number
*/
int absolute(int number){
    return fabs(number);
}

int main() {
  int numero;
  std::cin >> numero;
  std::cout << "absolute(" << numero << ") → " << absolute(numero) << std::endl;
  return 0;
}
