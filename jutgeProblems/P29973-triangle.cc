#include <iostream>

int main() {
  int size{0};
  std::cin >> size;
  for (int i{0}; i < size; i++) {
    for (int j{0}; j < (i + 1); j++) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
  return 0;
}
