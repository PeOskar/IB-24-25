/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Minimum change
*        P81629
*        Computs minimum number of each currency to give
*/

#include <iostream>

int main() {
  unsigned int euros{0}, centimos{0};
  std::cin >> euros >> centimos;
  unsigned int bill500{0}, bill200{0}, bill100{0}, bill50{0}, bill20{0},
      bill10{0}, bill5{0};
  unsigned int coin2euros{0}, coin1euro{0}, coin50{0}, coin20{0}, coin10{0},
      coin5{0}, coin2{0}, coin1{0};

  while (euros != 0) {
    if (euros >= 500) {
      bill500++;
      euros -= 500;
      continue;
    }
    if (euros >= 200) {
      bill200++;
      euros -= 200;
      continue;
    }
    if (euros >= 100) {
      bill100++;
      euros -= 100;
      continue;
    }
    if (euros >= 50) {
      bill50++;
      euros -= 50;
      continue;
    }
    if (euros >= 20) {
      bill20++;
      euros -= 20;
      continue;
    }
    if (euros >= 10) {
      bill10++;
      euros -= 10;
      continue;
    }
    if (euros >= 5) {
      bill5++;
      euros -= 5;
      continue;
    }
    if (euros >= 2) {
      coin2euros++;
      euros -= 2;
      continue;
    }
    if (euros >= 1) {
      coin1euro++;
      euros -= 1;
      continue;
    }
  }
  while (centimos != 0) {
    if (centimos >= 50) {
      coin50++;
      centimos -= 50;
      continue;
    }
    if (centimos >= 20) {
      coin20++;
      centimos -= 20;
      continue;
    }
    if (centimos >= 10) {
      coin10++;
      centimos -= 10;
      continue;
    }
    if (centimos >= 5) {
      coin5++;
      centimos -= 5;
      continue;
    }
    if (centimos >= 2) {
      coin2++;
      centimos -= 2;
      continue;
    }
    if (centimos >= 1) {
      coin1++;
      centimos -= 1;
      continue;
    }
  }
  std::cout << "Banknotes of 500 euros: " << bill500 << std::endl;
  std::cout << "Banknotes of 200 euros: " << bill200 << std::endl;
  std::cout << "Banknotes of 100 euros: " << bill100 << std::endl;
  std::cout << "Banknotes of 50 euros: " << bill50 << std::endl;
  std::cout << "Banknotes of 20 euros: " << bill20 << std::endl;
  std::cout << "Banknotes of 10 euros: " << bill10 << std::endl;
  std::cout << "Banknotes of 5 euros: " << bill5 << std::endl;

  std::cout << "Coins of 2 euros: " << coin2euros << std::endl;
  std::cout << "Coins of 1 euro: " << coin1euro << std::endl;
  std::cout << "Coins of 50 cents: " << coin50 << std::endl;
  std::cout << "Coins of 20 cents: " << coin20 << std::endl;
  std::cout << "Coins of 10 cents: " << coin10 << std::endl;
  std::cout << "Coins of 5 cents: " << coin5 << std::endl;
  std::cout << "Coins of 2 cents: " << coin2 << std::endl;
  std::cout << "Coins of 1 cent: " << coin1 << std::endl;
  return 0;
}
