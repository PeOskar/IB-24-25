/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Reversing words 2
*        P99133
*        reads words, and prints them in reverse order, reversing also the order
*        of the characters of each word.
*/

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::string palabra;
  int numero_palabras;
  std::cin >> numero_palabras;
  std::vector<std::string> palabras(numero_palabras);
  for (int i{numero_palabras - 1}; i >= 0; --i) {
    std::cin >> palabra;
    palabras[i] = palabra;
  }
  for (int j{0}; j < numero_palabras; ++j) {
    palabra = palabras[j];
    reverse(palabra.begin(), palabra.end());
    std::cout << palabra << std::endl;
  }
  return 0;
}
