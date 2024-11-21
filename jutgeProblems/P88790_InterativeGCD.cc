/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Iterative greatest common divisor
*        P88790
*        computes the greatest common divisor of two natural numbers
*/

#include <iostream>

/*
* Greatest Common Divisor
*
* Returns the greatest common divisor of two numbers
*/
int GreatestCommonDivisor(int number1, int number2) {
  if (number1 < number2)
    return GreatestCommonDivisor(number2, number1);
  if (number2 == 0)
    return number1;
  return GreatestCommonDivisor(number2, number1 % number2);
}

int main() {
  long int numero1, numero2;
  while (std::cin >> numero1 >> numero2) {
    std::cout << "gcd(" << numero1 << ", " << numero2 << ") → "
      << GreatestCommonDivisor(numero1, numero2) << std::endl;
  }
  return 0;
}
