/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Iterative double factorial
*        P17913
*        returns the double factorial n!! for a natural n.
*/

#include <iostream>
#include <cmath>

/*
* Double Factorial
*
* @brief returns the double factorial of an integer
*/
int double_factorial(int number){
  int kfactorial{1};
  while (number > 0) {
    kfactorial = kfactorial * number;
    number -= 2;
  }
  return kfactorial;
}

int main() {
  short numero;
  while (std::cin >>numero){
  std::cout << "factorial(" <<numero<< ") → " << double_factorial(numero) <<
    std::endl;
  }
  return 0;
}
