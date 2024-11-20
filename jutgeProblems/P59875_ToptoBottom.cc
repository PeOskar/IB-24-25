/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Top to bottom
*        P59875
*        Prints all numbers between the inputs in decreasing order
*/

#include <iostream>

int main() {
  int Num1, Num2;

  std::cin >> Num1 >> Num2;

  if (Num1 == Num2) {
    std::cout << Num1 << std::endl;
    return 0;
  }

  if (Num2 > Num1) {
    do {
      std::cout << Num2 << std::endl;
      Num2 = Num2 - 1;
    } while (Num2 != Num1);
    std::cout << Num1 << std::endl;
  } else {
    do {
      std::cout << Num1 << std::endl;
      Num1 = Num1 - 1;
    } while (Num1 != Num2);
    std::cout << Num2 << std::endl;
  }
  return 0;
}
