/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hdez
* @date Nov 15 24
* @brief Scalar Product
*        Practica 9
*        Escriba un programa que utilice una función que tome
*        como parámetros dos vectores de números reales y devuelva su producto
*        escalar
*/

#include <iostream>
#include <vector>

//Function declarations
int ScalarProduct(const std::vector<int> vector1, const std::vector<int>
vector2);
std::vector<int> FillVector(const std::string input); 

/*
* Main function
*
* @brief Checks for input errors, calls necessary functions and prints output
*/
int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Wrong usage. Example: ./filename a,b,c d,e,f\n";
    return 1;
  }
  int result{0};
  std::vector<int> vector1 = FillVector(argv[1]);
  std::vector<int> vector2 = FillVector(argv[2]);
  if (vector1.size() != vector2.size()) {
    std::cout << "Vector sizes don't match.\n";
    return 2;
  }
  else {
    result = ScalarProduct(vector1, vector2);
    std::cout << "The scalar product is: " << result << std::endl;
  }
  return 0;
}

/*
* Scalar Product
*
* @brief Computes the scalar product of two given vectors
*/
int ScalarProduct(const std::vector<int> vector1, const std::vector<int>
vector2) {
  int product{0};
  for (int i{0}; i < vector1.size(); ++i) {
    product += vector1[i] * vector2[i];
  }

  return product;
}

/*
* Fill Vector
*
* @brief Given the input, stores in a vector its numbers, ignoring the ','s
*/
std::vector<int> FillVector(const std::string input) {
  std::vector<int> vector;
  int start{0}, end{0};

  while ((end = input.find(',', start)) != std::string::npos) {
    vector.push_back(std::stoi(input.substr(start, end - start)));
    start = end + 1;
  }
  vector.push_back(std::stoi(input.substr(start)));

  return vector;
}


