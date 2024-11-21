/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Least common multiple
*        P96564
*        Prints least common multiple of given number
*/

#include <iostream>

/*
* Greatest Common Divisor
*
* @brief Returns the greatest common divisor of two integers
*/
long int GreatestCommonDivisor(long int number1, long int number2) {
  if(number1 < number2) return mcd(number2, number1);
  if(number2 == 0) return number1;
  return GreatestCommonDivisor(number2, number1 % number2);
}

/*
* Least Common Multiple
*
* @brief returns the least common multiple of two integers
*/
long int LeastCommonMultiple(long int number1, long int number2) {
  long int product = (number1 * number2) / GreatestCommonDivisor(number1, number2);
  return product;
}

int main() {
  long int number1;
  long int number2;
  while (std::cin >> number2) {
    long int product = 1;
    if (number2 == 0);
    else {
      int i{0};
      while (i < number2) {
        std::cin >> number1;
        product = LeastCommonMultiple(product, number1);
        i += 1;
      }
      std::cout << product << std::endl;
    }
  }
  return 0;
}
