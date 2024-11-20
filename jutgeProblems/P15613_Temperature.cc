#include <iostream>

int main() {
  int Num1;
  std::cin >> Num1;
  if ((Num1 <= 30) and (Num1 >= 10)) {
    std::cout << "it's ok" << std::endl;
  } 
  if ((Num1 > 30) and (Num1 < 100)) {
    std::cout << "it's hot" << std::endl;
  } 
if (Num1 >= 100) {
    std::cout << "it's hot" << std::endl;
    std::cout << "water would boil" << std::endl;
  } 
if ((Num1 < 10) and (Num1 > 0)) {
  std::cout << "it's cold" << std::endl;
  } 
if (Num1 <= 0) {
  std::cout << "it's cold" << std::endl;
  std::cout << "water would freeze" << std::endl;
  }
  return 0;
}
