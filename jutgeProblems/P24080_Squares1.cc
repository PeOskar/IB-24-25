#include <iostream>

int main() {
  int numero;
  int k{0};
  while (std::cin >> numero) {
    if (k == 0) k = 1;
    else std::cout << std::endl; 
    for (int i = 0; i < numero; i++) {
      for (int j = 0; j < numero; j++) {
        std::cout << numero;
      }
      std::cout << std::endl;
    }
  }
  return 0;
}
