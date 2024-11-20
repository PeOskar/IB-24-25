/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief First numbers
*        P37500
*        Prints all numbers between 0 and input
*/

#include <iostream>

int main() {
  int Num1, Num2=0;
  std::cin >> Num1;
  
  if (Num1 == 0){std::cout << "0" << std::endl; return 0;}
  if (Num1<0) {
    std::cin >> Num1;
  }
    std::cout << "0" << std::endl;
  do {
    Num2 = Num2 + 1;
    std::cout << Num2 << std::endl;
  } while (Num2 != Num1);
  return 0;
}
