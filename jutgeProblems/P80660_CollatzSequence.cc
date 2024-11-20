/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief The sequence of Collatz
*        P80660
*        Prints number of steps to reach 1 for the given number
*/

#include <iostream>

int main() {
  unsigned int numero{0}, valor{0};
  while(std::cin >> numero){
    int pasos{0};
    if (numero==1) {std::cout << pasos << std::endl;continue;}
    do {
      if (numero % 2 == 0) {
        numero = (numero / 2);   
      } 
      else {
        numero = (numero * 3) + 1;
      }
      pasos += 1;
    } while (numero > 1);
    std::cout << pasos << std::endl;
  }
  return 0;
}
