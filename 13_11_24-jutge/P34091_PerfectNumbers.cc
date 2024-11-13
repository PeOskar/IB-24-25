#include <iostream>

bool is_perfect(int n) {
  int divisor{1};
  for (int i{2}; i * i <= n; ++i) {
    if (n % i == 0)
      divisor += i + n / i;
  }
  if (divisor == n && n!=0 && n!=1) {
    return true;
  }
  return false;
}

int main() {
  int numero;
  while (std::cin >> numero) {
    std::cout << "is_perfect(" << numero << ") → ";
    if (is_perfect(numero) == 1) {
      std::cout << "true" << std::endl;
    } else {
      std::cout << "false" << std::endl;
    }
  }
  return 0;
}
