/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Approximate root
*        Practica 9
*        Takes a number and approximates the square root
*/

#include <iostream>

constexpr double EPSILON = 1e-4;

/*
* Approximate Root
*
* Takes a number, checks for invalid input and while error is less than epsilon approximates its square
* root
*/
double ApproximateRoot(const double number) {
  if (number <= 0) {
    std::cout << "Number must be higher than zero.\n";
    return -1;
  }
  double root{1.0}, delta{1.0};
  while (std::abs(root * root - number) > EPSILON) {
    if (delta > 0) {
      while (root * root < number) {
        root += delta;
      }
    }
    else {
      while (root * root > number) {
        root += delta;
      }
    }
    delta *= -0.5;
  }
  return root;
}

/*
* Main
*
* Checks for input erorrs, calls necessary functions and prints output
*/
int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Wrong usage. Example: ./filename number\n";
    return 1;
  }
  double number = std::stod(argv[1]);
  double result = ApproximateRoot(number);
  if (result == -1) {
    return 2;
  }
  std::cout << result << std::endl;
  return 0;
}
