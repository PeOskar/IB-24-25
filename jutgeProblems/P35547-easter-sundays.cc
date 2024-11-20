#include <iostream>

int main() {
  int day{0}, month{0}, year{0};
  while(std::cin >> year) {
    if (year > 9999 || year < 1800) {
      std::cin >> year;
    }
    int variable1{0}, variable2{0}, variable3{0}, variable4{0}, variable5{0},
      variable6{0}, variable7{0}, variable8{0}, variable9{0}, variable10{0},
    variable1 = year / 100;
    variable2 = year % 19;
    variable3 = year % 4;
    variable4 = year % 7;
    variable5 = variable1 / 4;
    variable6 = (13 + 8 * variable1) / 25;
    variable7 = (15 - variable6 + variable1 - variable5) % 30;
    variable8 = (19 * variable2 + variable7) % 30;
    variable9 = (4 + variable1 - variable5) % 7;
    variable10 = (2 * variable3 + 4 * variable4 + 6 * variable8 + variable9) %
      7;
    if (variable8 + variable10 <= 9) {
      day = 22 + variable8 + variable10;
      month = 3;
    }
    else if (variable8 == 29 && variable10 == 6) {
      day = 19;
      month = 4;
    }
    else if (variable8 == 28 && variable10 == 6 && variable2 > 10) {
      day = 18;
      month = 4;
    }
    else {
      day = variable8 + variable10 - 9;
      month = 4;
    }
    std::cout << day << '/' << month << std::endl;
  }
  return 0;
}
