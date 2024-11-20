/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Capitalize vowels
*        Practica 9
*        Takes an input and returns the word with only the vowels capitalized
*/

#include <iostream>

/*
* Change Case
*
* @brief capitalizes lowercase vowels, and opposite for consonants
*/
std::string ChangeCase(std::string input) {
  for (char& letter : input) {
    switch (letter) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        letter -= 'a' - 'A';
        break;
      default:
        if (letter > 'A' && letter < 'Z') {
          letter += 'a' - 'A';
        }
        break;
     }
  }
  return input;
}

/*
* Main
*
* @brief Checks for input errors, calls necessary function and outputs result
*/
int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Wrong usage. Example ./filename word\n";
    return 1;
  }
  std::string modifiedString = ChangeCase(argv[1]);
  std::cout << modifiedString << std::endl;
  return 0;
}
