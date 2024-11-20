/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Correct dates
*        P29448
*        Checks if a date is correct or not
*/

#include <iostream>

/*
* Bisiesto
*
* @brief checks if a year is a leap year
*/
bool Bisiesto(const int &year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return true;
  }
  return false;
}

/*
* Fecha
*
* Checks if a date corresponds to a valid date on the calendar
*/
bool Fecha(const int &dia, const int &mes, const int &anio) {
  if (dia < 1 || mes < 1 || anio < 1800 || anio > 9999 || mes > 12 ||
    dia > 31) {
    return false;
  }
  if (!Bisiesto(anio) && mes == 2 && dia > 28) {
    return false;
  }
  if (mes == 2 && dia > 29) {
    return false;}
  if ((mes > 7 && mes % 2 != 0 && dia > 30) ||
      (mes <= 7 && mes % 2 == 0 && dia > 30)) {
    return false;
  }
  return true;
}

int main() {
  int dia{0}, mes{0}, anio{0};
  while (std::cin >> dia >> mes >> anio) {
    if (!Fecha(dia, mes, anio)) {
      std::cout << "Incorrect Date" << std::endl;
      continue;
    }
    std::cout << "Correct Date" << std::endl;
  }
  return 0;
}
