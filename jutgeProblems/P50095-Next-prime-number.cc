/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief Next prime number
*        P50095
*        reads a sequence of prime numbers and, for each one, prints the next prime number.
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
  int numero{0};
  while (std::cin >> numero && IsPrime(numero)) {
    bool findPrime = false;
    int next = numero + 1;
    while (!findPrime) {
      findPrime = IsPrime(next);
      if (findPrime)
        std::cout << next << std::endl;
      else
        next += 1;
    }
  }
  return 0;
}
