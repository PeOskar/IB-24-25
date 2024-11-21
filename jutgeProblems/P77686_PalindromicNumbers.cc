/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Palindromic numbers
*        P77686
*        tells whether the natural number n is a palindromic number or not
*/

#include <algorithm>
#include <iostream>

/*
* Is Palindromic
*
* Checks if number is a palindromic number
*/
bool is_palindromic(int number) {
  int modifiedNumber{0}, rotate{0};
  modifiedNumber = number;
  while (modifiedNumber != 0) {
    rotate = rotate * 10 + modifiedNumber % 10;
    modifiedNumber /= 10;
  }
  return number == rotate;
}

int main() {
  int numero{0};
  while (std::cin >> numero) {
    std::cout << "is_palindromic(" << numero << ") → ";
    if (is_palindromic(numero) == 1) {
      std::cout << "true" << std::endl;
    } 
    else {
      std::cout << "false" << std::endl;
    }
  }
  return 0;
}
