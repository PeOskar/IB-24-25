/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Oskar J. Pérez Hernández
* @date Nov 27 24
* @brief Words between two words
*        P12061
*        given a sequence of words, prints the number of words between the word “beginning” and the word “end”.
*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main() {
  std::string line;
  std::getline(std::cin, line);

  std::vector<std::string> words;
  std::stringstream ss(line);
  std::string word;
  while (ss >> word) {
    words.push_back(word);
  }

  int beginIndex = -1;
  int endIndex = -1;
  int beginningCount{0};
  int endCount{0};
  for (int i = 0; i < words.size(); ++i) {
    if (words[i] == "beginning") {
      beginIndex = i;
      beginningCount += 1;
    }
    if (words[i] == "end") {
      endIndex = i;
      endCount += 1;
    }
  }
  if (beginIndex == -1 || endIndex == -1 || beginningCount > 1 || endCount > 1) {
    std::cout << "wrong sequence" << std::endl;
  } 
  else if (beginIndex < endIndex) {
    std::cout << (endIndex - beginIndex - 1) << std::endl;
  } 
  else { 
    std::cout << "wrong sequence" << std::endl;
  }

  return 0;
}
