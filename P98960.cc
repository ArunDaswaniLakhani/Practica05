/**
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica 2022-2023
    *
    * @file P98960.cc
    * @author Arun Daswani Lakhani alu0101560410@ull.edu.es
    * @date Feb 21 2004
    * @brief program that reads a letter and prints it in lowercase if it was up    percase, or prints it in uppercase if it was lowercase.
    * @bug There are no known bugs
    * @see https://jutge.org/problems/P98960
    */ 

  #include <iostream>
 
  int main() {
  char letter;
  std::cin >> letter;
  letter = static_cast<int>(letter);
  if (letter >= 97) {
  letter = letter - 32;
  }
  else {
  letter = letter + 32; 
  }
  std::cout << letter << std::endl;
  return 0;
  }

