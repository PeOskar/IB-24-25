#include <iostream>

int gcd(int a, int b) {
  if (a < b)
    return gcd(b, a);
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  long int numero1, numero2;
  while (std::cin >> numero1 >> numero2) {
    std::cout << "gcd(" << numero1 << ", " << numero2 << ") → "
      << gcd(numero1, numero2) << std::endl;
  }
  return 0;
}
