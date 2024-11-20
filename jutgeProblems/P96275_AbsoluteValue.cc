#include <iostream>
#include <cmath>

int absolute(int n){
    return fabs(n);
}

int main() {
  int numero;
  std::cin >> numero;
  std::cout << "absolute(" << numero << ") → " << absolute(numero) << std::endl;
  return 0;
}
