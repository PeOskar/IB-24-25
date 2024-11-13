#include <iostream>
#include <cmath>

int double_factorial(int x){
  int kfactorial{1};
  while (x > 0) {
    kfactorial = kfactorial*x;
    x -=2;
  }
  return kfactorial;
}

int main() {
  short numero;
  while (std::cin >>numero){
  std::cout << "factorial(" <<numero<< ") → " << double_factorial(numero) <<
    std::endl;
  }
  return 0;
}
