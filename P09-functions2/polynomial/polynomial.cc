/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Polynomial
*        Practica 9
*        takes coefficients and value as input and calculates polynomial
*/

#include <iostream>
#include <vector>
#include <cstdlib>

/*
* Calculate Polynomial
*
* Calculates polynomial using Horner's method
*/
double CalculatePolynomial(const std::vector<double> coefficients, const double value) {
  double result{0};
  for (int i{0}; i < coefficients.size(); ++i) {
    result = result * value + coefficients[i];
  }
  return result;
}

/*
* Main
*
* Takes input and stores it in vector, checks for error, calls necessary
* function and prints output
*/
int main(int argc, char* argv[]) {
  if (argc < 3) {
      std::cout << "Wrong usage. Example: ./filename coef0 coef1 ... coefN value" << std::endl;
      return 1;
  }

  std::vector<double> coefficients;
  for (int i{1}; i < argc - 1; ++i) {
    coefficients.push_back(std::stod(argv[i]));
  }
  double value = std::stod(argv[argc - 1]);

  double result = CalculatePolynomial(coefficients, value);
  std::cout << result << std::endl;
  return 0;
}
