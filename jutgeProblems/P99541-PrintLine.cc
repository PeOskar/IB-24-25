#include <iostream>

void print(int s, char c, int n) {
  for (int i = 0; i < s; i++) {
    std::cout << " ";
  }
  for (int j = 0; j < n; j++) {
    std::cout << c;
  }
  std::cout << std::endl;
}

int main(){
  int space, numero;
  char caracter;
  while (std::cin >> space >> caracter >> numero){
    print(space, caracter, numero);
  }
  return 0;
}
