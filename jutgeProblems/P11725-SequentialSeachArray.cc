/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Sequential search in an array
*        P11725
*        tells if the given integer number is present in a vector of integer
*        numbers
*/

#include <iostream>
#include <vector>

/*
* Is Present
*
* Returns true or false wheter given number is in vector or not
*/
bool IsPresent(int number, const std::vector<int> &vector) {
  int vectorSize = vector.size();
  for (int i{0}; i < vectorSize; i++) {
    if (vector[i] == number) {
      return true;
    }
  }
  return false;
}

int main() {

  return 0;
}
