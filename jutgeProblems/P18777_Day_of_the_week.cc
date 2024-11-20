#include <iostream>

bool Bisiesto(int y) {
  if (y % 100 == 0) {
    if ((y / 100) % 4 == 0)
      return true;
    return false;
  } else {
    if (y % 4 == 0)
      return true;
    return false;
  }
}

std::string day_of_the_week(int d, int m, int y) {
  int c, fecha, a;
  std::string dia;
  m = m - 2;
  if (m <= 0) {
    m += 12;
    y -= 1;
  }
  c = y / 100;
  a = y % 100;
  fecha = ((2.6 * m) - 0.2);
  fecha = fecha + d + a + (a / 4) + (c / 4) - 2 * c;
  while (fecha < 0)
    fecha += 7;
  fecha = fecha % 7;
  switch (fecha) {
  case 0:
    dia = "Sunday";
    return dia;
  case 1:
    dia = "Monday";
    return dia;
  case 2:
    dia = "Tuesday";
    return dia;
  case 3:
    dia = "Wednesday";
    return dia;
  case 4:
    dia = "Thursday";
    return dia;
  case 5:
    dia = "Friday";
    return dia;
  case 6:
    dia = "Saturday";
    return dia;
  }
  return 0;
}

bool is_valid_date(int d, int m, int y) {
  if (d < 1 || m < 1 || y < 1800 || y > 9999 || m > 12 ||
      d > 31) {
    return false;
  }
  if (!Bisiesto(y) && m == 2 && d > 28) {
    return false;
  }
  if (m == 2 && d > 29) {
    return false;
  }
  if ((m > 7 && m % 2 != 0 && d > 30) ||
      (m <= 7 && m % 2 == 0 && d > 30)) {
    return false;
  }
  return true;
}

int main() {
  int dia, mes, anio;
  while (std::cin >> dia >> mes >> anio) {
    if(is_valid_date(dia, mes, anio)==1){
    std::cout << "day_of_the_week(" << dia << ", " << mes << ", " << anio << ") → "
         << day_of_the_week(dia, mes, anio) << std::endl;
    }
    else {continue;}
  }
}
