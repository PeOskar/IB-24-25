/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Reverse of sequences
*        P67268
*        reads sequences of integer numbers, and prints each one reversing the
*        order of its elements.
*/

#include <iostream>
#include <vector>

/*
* Reverse Vector
*
* @brief Reverses the order of numbers in a vector
*/
std::vector<int> ReverseVector(const int numeros, std::vector<int> secuencia) {
  int temp{0};
  for (int i{0}; i < numeros / 2; ++i) {
    temp = secuencia[i];
    secuencia[i] = secuencia[numeros - i - 1];
    secuencia[numeros - i - 1] = temp;
  }
  return secuencia;
}

int main() {
  int numeros{0};
  while (std::cin >> numeros) {
    std::vector<int> secuencia(numeros);

    //load vector
    for (int i{0}; i < numeros; ++i) {
      std::cin >> secuencia[i];
    }

    secuencia = ReverseVector(numeros, secuencia);

    //print output
    for (int k = 0; k < numeros; ++k) {
      std::cout << secuencia[k];
      if (k != numeros - 1)
        std::cout << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
