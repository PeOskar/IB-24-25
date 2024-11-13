/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hdez
* @date Nov 13 2024
* @brief Function for Leap years
*        P95401
*        Write a program that tells if a year is or is not a leap year.
*/

#include <iostream>

bool isleap(const int year) {
  if (year % 4 == 0 && year % 100 != 0) {
    return true;
  }
  if (year % 100 == 0) {
    if ((year / 100) % 4 == 0) {
      return true;
    }
  }
  return false;
}

int main() {
  int year{0};
  while(std::cin >> year) {
    if (year < 1800 || year > 9999) {
      return 1;
    }
    if (isleap(year)) {
      std::cout << "true" << std::endl;
    }
    else {
      std::cout << "false" << std::endl;
    }
  return 0;
}
