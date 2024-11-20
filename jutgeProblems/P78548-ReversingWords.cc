/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Reversing words
*        P78548
*        reads words, and prints each one reversing the order of its characters.
*/

#include <algorithm>
#include <iostream>

int main() {
  std::string palabra;
  while(std::cin >> palabra) {
    reverse(palabra.begin(), palabra.end());
    std::cout << palabra << std::endl;
  }
  return 0;
}
