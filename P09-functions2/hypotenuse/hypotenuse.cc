/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 20 24
* @brief Hypotenuse
*        Practica 9
*        Calculates hypotenuse given the cathetuses
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
    std::cout << "Can't calculate square root of a negative number\n";
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
* Takes input, checks for errors, calls necessary function, and prints output
*/
int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Wrong usage. Example: ./filename cathetus1 cathetus2\n";
    return 1;
  }
  double cathetus1{std::stod(argv[1])}, cathetus2{std::stod(argv[2])};
  double result = ApproximateRoot((cathetus1 * cathetus1) + (cathetus2 *
    cathetus2));
  if (result == -1) {
    return 2;
  }
  std::cout << result << std::endl;
  return 0;
}
