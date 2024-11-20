#include <cmath>
#include <iostream>

int main() {
  int numero{0}, num1;
  
  while (std::cin >> numero) {
    num1=numero;
    int sumadigitos{0};
    do {sumadigitos += numero % 10;
      numero /= 10;}while (numero>0);
    std::cout << "The sum of the digits of " << num1 << " is " << sumadigitos <<
      "." << std::endl;  
  }
  return 0;
}
