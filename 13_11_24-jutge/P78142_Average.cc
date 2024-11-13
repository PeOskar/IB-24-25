#include <iomanip>
#include <iostream>

int main() {
  double numero{0}, sumatoria{0};
  int i{0};
  while (std::cin >> numero) {
    sumatoria += numero;
    i++;
  }
  std::cout << std::fixed << std::setprecision(2) << sumatoria / i << std::endl;
}
