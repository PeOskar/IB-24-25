#include <iostream>

int main() {
  int Num1, Num2=0;
  std::cin >> Num1;
  
  if (Num1 == 0){std::cout << "0" << std::endl; return 0;}
  if (Num1<0) {
    std::cin >> Num1;
  }
    std::cout << "0" << std::endl;
  do {
    Num2 = Num2 + 1;
    std::cout << Num2 << std::endl;
  } while (Num2 != Num1);
  return 0;
}
