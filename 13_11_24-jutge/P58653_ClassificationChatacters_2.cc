#include <ctype.h>
#include <iostream>

void print_line(char c, std::string s, bool b) {
  std::cout << s << "('" << c << "') = ";
  if (b) {
    std::cout << "true" << std::endl;
  } 
  else {
    std::cout << "false" << std::endl;
  }
}

bool letter(char c) {
  if (isalpha(c)) {
    return true;
  }
  return false;
}

bool vowel(char c) {
  if (letter(c)) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      return true;
    } 
    else {
      return false;
    }
  }
  return false;
}

bool consonant(char c) {
  if (letter(c)) {
    if (!vowel(c)) {
      return true;
    }
  }
  return false;
}

bool lower(char c) {
  if (letter(c)) {
    if (c == tolower(c)) {
      return true;
    }
  }
  return false;
}

bool upper(char c) {
  if (letter(c)) {
    if (c==toupper(c)) {
      return true;
    }
  }
  return false;
}

bool digit(char c) {
  if (isdigit(c)) {
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
