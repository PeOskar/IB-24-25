#include <iostream>

int main() {
  long long int Num1, Num2, Num3;
  std::cin >> Num1 >> Num2 >> Num3;

  if ((Num1 > Num2) and (Num1 > Num3)) {
    std::cout << Num1 << std::endl;
  } else if ((Num2 > Num1) and (Num2 > Num3)) {
    std::cout << Num2 << std::endl;
  } else if ((Num3 > Num1) and (Num3 > Num2)) {
    std::cout << Num3 << std::endl;
  } else if ((Num1 == Num2) or (Num1 == Num3) or (Num2 == Num3)) {
    if ((Num1 == Num3) or (Num1 == Num2)) {
      std::cout << Num1 << std::endl;
    } else if (Num2 == Num3) {
      std::cout << Num3 << std::endl;
    }
  }
  return 0;
}
