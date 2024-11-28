/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief Looking for an a
*        P75149
*        reads a sequence of characters ended in a dot and tells if the sequence has any lowercase ‘a’ or not.
*/

#include <iostream>

/*
* Find A's
*
* Returns true if character is a lowercase a
*/
bool FindAs(char cadena) {
  if (cadena == 'a') {
    return true;
  }
  return false;
}

int main() {
  char cadena;
  while (std::cin >> cadena && cadena != '.') {
    if (FindAs(cadena)) {
      std::cout << "yes\n";
      return 0;
    }
  }
  std::cout << "no\n";
  return 0;
}
