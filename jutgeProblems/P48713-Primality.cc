/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief Primality
*        P48713
*        reads a sequence of natural numbers and, for each one, tells if it is a prime number or not.
*/

#include <iostream>

/*
* Is Prime
*
* @brief returns true if number is a prime number, else false
*/
bool IsPrime(const int number) {
  for (int i{2}; i * i <= number; i++) {
    if (number % i == 0) {
      return false;
    }
  }
  if (number == 0 || number == 1) {
    return false;
  }
  return true;
}

int main() {
  int numero;
  std::cin >> numero;
  int secuencia;
  for (int i{0}; i < numero; i++) {
    if (std::cin >> secuencia) {
      if (IsPrime(secuencia)) {
        std::cout << secuencia << " is prime" << std::endl;
      } else {
        std::cout << secuencia << " is not prime" << std::endl;
      }
    } else {
      std::cout << "0 is not prime" << std::endl;
    }
  }
  return 0;
}
