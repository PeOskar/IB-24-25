/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 28 24
* @brief Fermat's last theorem
*        P36430
*        given four natural numbers a,b,c,d with a≤ b and c≤ d, prints a natural solution to the equation
*        x2 + y2 = z2
*
*/

int main() {
  int number1{0}, number2{0}, number3{0}, number4{0};
  std::cin >> number1 >> number2 >> number3 >> number4;
  bool solucion = false;
  for (int i = a; i <= b && !solucion; ++i) {
    for (int j = c; j <= d && !solucion; ++j) {
      double valor_n = sqrt(i * i + j * j);
      int num = int(valor_n);
      if (valor_n == double(num)) {
        cout << i << "^2 + " << j << "^2 = " << num << "^2" << endl;
        solucion = true;
      }
    }
  }
  if (!solucion) {
    cout << "No solution!" << endl;
  }
  return 0;
}
