#include <iostream>

void cross(int n, char c) {
  for (int i{0}; i < (n - 1) / 2; ++i) {
    for (int j{0}; j < (n - 1) / 2; ++j)
      std::cout << " ";
    std::cout << c << std::endl;
  } 
  for (int j{0}; j < n; ++j)
    std::cout << c;
  std::cout << std::endl;
  for (int i {0}; i < (n - 1) / 2; ++i) {
    for (int j = 0; j < (n - 1) / 2; ++j)
      std::cout << " ";
    std::cout << c << std::endl;
  }
}

int main() {
  int tamanio;
  char contenido;
  while (std::cin >> tamanio >> contenido) {
    cross(tamanio, contenido);
  }
  return 0;
}
