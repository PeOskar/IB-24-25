#include <iostream>

int main() {
  unsigned int numero{0}, valor{0};
  while(std::cin >> numero){
    int i{0};
    if (numero==1) {std::cout << i << std::endl;continue;}
    do {
      if (numero % 2 == 0) {
        numero = (numero / 2);   
      } 
      else {
        numero = (numero * 3) + 1;
      }
      i++;
    } while (numero > 1);
    std::cout << i << std::endl;
  }
  return 0;
}
