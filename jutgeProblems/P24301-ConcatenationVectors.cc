/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Concatenation of vectors
*        P24301
*        Returns the concatenation of two vectors
*/

#include <iostream>
#include <vector>

/*
* Concatenation
*
* @brief Returns the concatenation of two given vectors
*/
std::vector<int> concatenation(const std::vector<int> &input1, const std::vector<int> &input2) {
  std::vector<int> result = input1;
  for (int i{0}; i < input2.size(); ++i) {
    result.push_back(input2[i]);
  }
  return result;
}

int main() {
  int number_components1{0};
  while (std::cin >> number_components1) {
    std::vector<int> vector1(number_components1);
    for (int i{0}; i < number_components1; ++i) {
      std::cin >> vector1[i];
    }
    int number_components2{0};
    std::cin >> number_components2;
    std::vector<int> vector2(number_components2);
    for (int i{0}; i < number_components2; ++i) {
      std::cin >> vector2[i];
    }
    std::vector<int> result = concatenation(vector1, vector2);
    std::cout << result.size() << std::endl;
    for (int i{0}; i < result.size(); ++i) {
      std::cout << " " << result[i];
    }
    std::cout << std::endl;
  }
  return 0;
}
