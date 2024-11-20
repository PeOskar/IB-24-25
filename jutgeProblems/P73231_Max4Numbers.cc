#include <algorithm>
#include <iostream>

int max4(int a, int b, int c, int d) { return std::max(std::max(a,b), std::max(c, d)); }

int main() {
  int numero1{0}, numero2{0}, numero3{0}, numero4{0};
  while (std::cin >> numero1 >> numero2 >> numero3 >> numero4) {
    std::cout << "max4(" << numero1 << ", " << numero2 << ", " << numero3<< ", " << numero4 << ") → " 
      << max4(numero1, numero2, numero3, numero4) << std::endl;
  }
  return 0;
}
