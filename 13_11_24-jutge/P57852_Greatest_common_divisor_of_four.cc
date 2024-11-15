#include <iostream>

int gcd(int a, int b) {
  if (a < b)
    return gcd(b, a);
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int gcd4(int a, int b, int c, int d) { return gcd(a, gcd(b, (gcd(c, d)))); }

int main() {
  long int numero1, numero2, numero3, numero4;
  while (std::cin >> numero1 >> numero2 >> numero3 >> numero4) {
    std::cout << "gcd(" << numero1 << ", " << numero2 << ") → "
      << gcd4(numero1, numero2, numero3, numero4) << std::endl;
  }
  return 0;
}
