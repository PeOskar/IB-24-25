/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief Parentheses
*        P31111
*        Given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close correctly.
*/

#include <iostream>
#include <string>

int main() {
  int count{0};
  std::string str = "";
  std::getline(std::cin, str);
  for (int i{0}; (str[i] != '\0'); ++i) {
    if (str[i] == '(') {
      count++;
    }
    if (str[i] == ')') {
      count--;
    }
    if (count < 0) {
      break;
    }
  }
  if (count == 0) {
    std::cout << "yes\n";
  }
  else {
    std::cout << "no\n";
  }
  return 0;
}
