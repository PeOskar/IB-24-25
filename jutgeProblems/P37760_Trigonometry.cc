#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double angulo;
  double seno;
  double coseno;
  while (std::cin >> angulo) {
    seno = sin(angulo / 180 * M_PI);
    coseno = cos(angulo / 180 * M_PI);
    std::cout << std::fixed << std::setprecision(6) << seno << " " << coseno <<
      std::endl;
  }
  return 0;
}
