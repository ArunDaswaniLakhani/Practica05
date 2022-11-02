/**
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica 2022-2023
    *
    * @file boolean_operators.cc
    * @author Arun Daswani Lakhani alu0101560410@ull.edu.es
    * @date Feb 21 2004
    * @brief program that prints the truth table.
    * @bug There are no known bugs
    */ 

#include <iostream>

int main() {
  bool T = true;
  bool F = false;
  std::cout << "|p    |q    |p ∧ q|p ∨ q|p → q|p ⇔ q|" << std::endl;
  std::cout << " " << T << "     " << T << "     " << T << "     " << T <<
  "     " << T << "     " << T << std::endl;
  std::cout << " " << T << "     " << F << "     " << F << "     " << T <<
  "     " << F << "     " << F << std::endl;
  std::cout << " " << F << "     " << T << "     " << F << "     " << T <<
  "     " << T << "     " << F << std::endl;
  std::cout << " " << F << "     " << F << "     " << F << "     " << F <<
  "     " << T << "     " << T << std::endl; 
  
  
  
  
return 0;  
}
