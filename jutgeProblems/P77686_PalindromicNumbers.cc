#include <algorithm>
#include <iostream>

bool is_palindromic(int n) {
  int numero{0}, girar{0};
  numero = n;
  while (numero != 0) {
    girar = girar * 10 + numero % 10;
    numero /= 10;
  }
  return n == girar;
}

int main() {
  int numero;
  while (std::cin >> numero) {
    std::cout << "is_palindromic(" << numero << ") → ";
    if (is_palindromic(numero) == 1) {
      std::cout << "true" << std::endl;
    } 
    else {
      std::cout << "false" << std::endl;
    }
  }
}
