/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 13 24
* @brief Classification of characters 2
*        P58653
*        reads a character and tells if it is a letter, if it is a vowel, if it is a consonant, 
*        if it is an uppercase letter, if it is a lowercase letter and if it is a digit.
*/

#include <ctype.h>
#include <iostream>

/*
* Print line
*
* Is in charge of printing each result
*/
void print_line(char caracter, std::string type, bool result) {
  std::cout << type << "('" << caracter << "') = ";
  if (result) {
    std::cout << "true" << std::endl;
  } 
  else {
    std::cout << "false" << std::endl;
  }
}

/*
* Letter
*
* Checks if character is alphanumeric
*/
bool letter(char caracter) {
  if (isalpha(caracter)) {
    return true;
  }
  return false;
}

/*
* Vowel
*
* Check if character is a vowel
*/
bool vowel(char caracter) {
  if (letter(caracter)) {
    caracter = tolower(caracter);
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o'
      || caracter == 'u') {
      return true;
    } 
    else {
      return false;
    }
  }
  return false;
}

/*
* Consonant
*
* Checks if character is alphanumeric and not a vowel
*/
bool consonant(char caracter) {
  if (letter(caracter)) {
    if (!vowel(caracter)) {
      return true;
    }
  }
  return false;
}

/*
* Lower
*
* Checks if character is alphanumeric and is lowercase
*/
bool lower(char caracter) {
  if (letter(caracter)) {
    if (caracter == tolower(caracter)) {
      return true;
    }
  }
  return false;
}

/*
* Upper
*
* Checks if character is alphanumeric and is uppercase
*/
bool upper(char caracter) {
  if (letter(caracter)) {
    if (caracter == toupper(caracter)) {
      return true;
    }
  }
  return false;
}

/*
* Digit
*
* Checks if character is a digit
*/
bool digit(char caracter) {
  if (isdigit(caracter)) {
    return true;
  }
  return false;
}

int main() {
  char caracter;
  std::cin >> caracter;
  print_line(caracter, "letter", letter(caracter));
  print_line(caracter, "vowel", vowel(caracter));
  print_line(caracter, "consonant", consonant(caracter));
  print_line(caracter, "uppercase", upper(caracter));
  print_line(caracter, "lowercase", lower(caracter));
  print_line(caracter, "digit", digit(caracter));
  return 0;
}
