#include <algorithm>
#include <iostream>

int max2(int a, int b) { return std::max(a, b); }

int main() {
  int numero1, numero2;
  while (std::cin >> numero1 >> numero2) {
    std::cout << "max2(" << numero1 << ", " << numero2 << ") → " << max2(numero1, numero2) << std::endl;
  }
  return 0;
}
