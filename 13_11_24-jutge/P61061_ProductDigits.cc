#include <iostream>

int main() {
  unsigned int numero, n;
  
  while (std::cin >> numero) {
    if (numero<10){std::cout << "The product of the digits of " << numero << " is "
      << numero << "." << std::endl;}
    while (numero >= 10) {
      n= numero;
      int product{1};
      while (numero != 0) {
        product *=  (numero % 10);
        numero = numero / 10;
      }
      std::cout << "The product of the digits of " << n << " is " << product << "."
        << std::endl;
      numero = product;
    }
    std::cout << "----------" << std::endl;
  }
  return 0;
}
