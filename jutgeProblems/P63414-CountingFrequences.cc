/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Counting frequences
*        P63414
*        reads a sequence of natural numbers and that prints, for each one, how
*        many times it appears.
*/

#include <iostream>
#include <vector>

int main() {
  int numeros{0};
  std::cin >> numeros;
  int actual{0};
  std::vector<int> contador(1001, 0);
  for (int i{0}; i < numeros; i++) {
    std::cin >> actual;
    contador[actual - 1000000000] += 1;
  }
  for (int i{0}; i < 1001; i++) {
    if (contador[i] != 0) {
      std::cout << 1000000000 + i << " : " << contador[i];
      std::cout << std::endl;
    }
  }
  return 0;
}
