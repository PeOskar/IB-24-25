/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Computing Areas
*        P39057
*        Prints corresponding area of shape
*/

#include <iomanip>
#include <iostream>
#include <cmath>

int main() {
  unsigned int numero_de_figuras{0};
  std::cin >> numero_de_figuras;
  if(numero_de_figuras == 0) {
    return 0;
  }
  
  std::string figura;
  double altura{0}, base{0}, radio{0};
  
  for (int i = 0; i < numero_de_figuras; i++) {
    std::cin >> figura;
    if (figura == "rectangle") {
      std::cin >> altura >> base;
      std::cout << std::fixed << std::setprecision(6) << altura*base << std::endl;
    }
    else if (figura == "circle") {
      std::cin >> radio;
      std::cout << std::fixed << std::setprecision(6)<< M_PI * pow(radio,2) << std::endl;
    }
  }
  return 0;
}
