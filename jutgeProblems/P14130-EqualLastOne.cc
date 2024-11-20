/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Equal to the last one
*        P14130
*        reads a non-empty sequence of integer numbers, and tells how many of
*        them are equal to the last one.
*/

#include <iostream>
#include <vector>

int main() {
  int numeros{0};
  std::cin >> numeros;
  std::vector<int> secuencia(numeros - 1);
  int repeticiones{0};
  for(int i{0}; i < numeros; ++i){
    std::cin >> secuencia[i];
  }
  for (int k{numeros - 2}; k >= 0; --k) {
    if (secuencia[numeros - 1] == secuencia[k]) {
      repeticiones += 1;
    }
  }
  std::cout << repeticiones << std::endl;
  return 0;
}
