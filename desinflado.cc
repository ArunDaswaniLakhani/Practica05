/*
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica 2022-2023
    *
    * @file desinflado.cc
    * @author Arun Daswani Lakhani alu0101560410@ull.edu.es
    * @date Feb 21 2004
    * @brief program that prints the capital letter of a lower case letter.
    * @bug There are no known bugs
    */ 


#include <iostream>

int main() {
  char capital_letter;
  std::cout << "Enter a lower case letter" << std::endl;
  std::cin >> capital_letter;
  capital_letter = static_cast<int>(capital_letter);
  capital_letter = capital_letter - 32;
  std::cout << "The capital letter is: " << capital_letter << std::endl;
  return 0;
}
