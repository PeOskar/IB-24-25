#include <iostream>

void swap2(int& a, int& b) {
  int c = a;
  a = b;
  b = c;
}

int main() {
  int knumero1{0}, knumero2{0};
  while(std::cin >> knumero1 >> knumero2){
    std::cout << swap2(knumero1, knumero2) << std::endl;
  }
  return 0;
}
