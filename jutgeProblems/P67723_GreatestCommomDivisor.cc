#include <iostream>

int main() {
  unsigned int num1{0}, num2{0};
  std::cin >> num1 >> num2;
  int res = std::min(num1, num2);

  while (res > 1) {
    if (num1 % res == 0 && num2 % res == 0)
      break;
    res--;
  }
  std::cout << "The gcd of " << num1 << " and " << num2 << " is " <<
    res << "." << std::endl;
  return 0;
}
