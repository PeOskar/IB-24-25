/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Greatest common divisor of four
*        P57852
*        computes the greatest common divisor of four natural numbers
*/

#include <iostream>

/*
* Greatest Common Divisor
*
* Returns the greatest common divisor of two integers
*/
int GreatestCommonDivisor(int number1, int number2) {
  if (number1 < number2)
    return GreatestCommonDivisor(number2, number1);
  if (number2 == 0)
    return number1;
  return GreatestCommonDivisor(number2, number1 % number2);
}

/*
* Greatest Common Divisor of 4
*
* Returns the greatest common divisor of four integers
*/
int GreatestCommonDivisorOf4(int number1, int number2, int number3, int number4) { return
GreatestCommonDivisor(number1, GreatestCommonDivisor(number2,(GreatestCommonDivisor(number3, number4)))); }

int main() {
  long int numero1, numero2, numero3, numero4;
  while (std::cin >> numero1 >> numero2 >> numero3 >> numero4) {
    std::cout << "gcd(" << numero1 << ", " << numero2 << ") → "
      << GreatestCommonDivisorOf4(numero1, numero2, numero3, numero4) << std::endl;
  }
  return 0;
}
