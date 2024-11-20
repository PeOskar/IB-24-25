/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Equal to the sum of the rest
*        P87920
*        tells if there is any number equal to the sum of the rest
*/

#include <iostream>
#include <vector>

int main() {
  int numeros;
  while (std::cin >> numeros) {
    std::vector<int> secuencia(numeros);
    int suma{0};
    for (int i{0}; i < numeros; ++i) {
      std::cin >> secuencia[i];
      suma += secuencia[i];
    }
    bool encontrado = false;
    for (int i{0}; !encontrado && i < numeros; ++i) {
      encontrado = (secuencia[i] == suma - secuencia[i]);
    }
    if (encontrado) {
      std::cout << "YES" << std::endl;
    }
    else {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}
