/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Trigonometry
*        P37760
*        reads a sequence of angles in degrees, and prints their sine and their cosine.
*/

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
