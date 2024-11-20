/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date MES DD AA
* @brief Is it a palindrome?
*        P50497)
*        Tells if a string if a palindrome or not
*/

#include <iostream>

bool IsPalindrome(const std::string &input) {
  int palindrome = input.length() - 1;
  for (int i{0}; i <= palindrome; ++i) {
    if (input[i] != input[palindrome])
      return false;
    palindrome -= 1;
  }
  return true;
}

int main() {
  std::string palindrome;
  while (std::cin >> palindrome) {
    std::cout << IsPalindrome(palindrome) << std::endl;
  }
  return 0;
}
