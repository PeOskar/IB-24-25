#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
  int exponente{0}, numero{0};
  while (std::cin >> numero >> exponente) {
    if (exponente < 0) {
      return 1;
    }
    std::cout << std::fixed << std::setprecision(0) << pow(numero, exponente) <<
      std::endl;
  }
}
