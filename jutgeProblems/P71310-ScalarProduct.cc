/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Scalar product
*        P71310
*        returns the scalar product of two given vectors
*/

#include <iostream>
#include <vector>

/*
* Scalar Product
*
* @brief Computes the scalar product of two given vectors
*/
double ScalarProduct(const std::vector<double> vector1, const std::vector<double> vector2) {
  double product{0};
  for (int i{0}; i < vector1.size(); ++i) {
    product += vector1[i] * vector2[i];
  }

  return product;
}

int main() {
  int components{0};
  while (std::cin >> components) {
    std::vector<double> vector1(components);
    std::vector<double> vector2(components);
    for (int i{0}; i < components; ++i) {
      std::cin >> vector1[i];
    }
    for (int j{0}; j < components; j++) {
      std::cin >> vector2[j];
    }
    std::cout << ScalarProduct(vector1, vector2) << std::endl;
  }
  return 0;
}
