/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief Middle digits
*        P35957
*        decides who wins a game.
*/

#include <iostream>

bool ParesDigitos(int number) {
  int digitos{1};
  int multiplicador{10};
  while (multiplicador <= number) {
    multiplicador *= 10;
    digitos += 1;
  }
  if (digitos % 2 == 0) {
    return true;
  }
  return false;
}

int MiddleDigit(int number) {
  int producto = 1;
  while (producto * producto * 10 < number) {
    producto *= 10;
  }
  return (number / producto) % 10;
}

int main() {
  int nombre{0}, numero{0}, secuencia{0};
  std::cin >> nombre;
  bool lost = false;
  char winner;
  std::cin >> secuencia;
  if (ParesDigitos(secuencia)) {
    lost = true;
  }
  int auxiliar = MiddleDigit(secuencia);
  int round = 1;
  while (!lost && round < 2 * nombre) {
    std::cin >> numero;
    if (ParesDigitos(numero)) {
      lost = true;
    } else {
      int mitad = MiddleDigit(numero);
      if (auxiliar != mitad) {
        lost = true;
      }
    }
    round += 1;
  }
  if (lost) {
    if (round % 2 == 0) {
      winner = 'A';
    } else {
      winner = 'B';
    }
  } else {
    winner = '=';
  }
  std::cout << winner << std::endl;
  return 0;
}
