#include <iostream>

int sum_divisors(int x) {
  int suma{0};
  int i;
  for (i = 1; (i * i) < x; ++i) {
    if (x % i == 0) {
      suma += i;
    }
  }
  for ( ; i >=1; --i){
    if ((x % i ==0) && (x/i != i-1)){
      suma += x/i;
    }
  }
  return suma;
}

int main() {
  unsigned int numero;
  while (std::cin >> numero) {
    std::cout << sum_divisors(numero) << std::endl;
  }
  return 0;
}
