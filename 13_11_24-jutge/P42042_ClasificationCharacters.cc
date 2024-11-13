#include <iostream>

int main() {
  int i = 0;
  char letra;

  std::cin >> letra;
  if (letra == toupper(letra)) {
    std::cout << "uppercase" << std::endl;
  } else {
    std::cout << "lowercase" << std::endl;
  }

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||
      letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' ||
      letra == 'O' || letra == 'U') {
    std::cout << "vowel" << std::endl;
  } else {
    std::cout << "consonant" << std::endl;
  }
  return 0;
}
