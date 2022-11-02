/*
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica 2022-2023
    *
    * @file arithmetic_operations.cc
    * @author Arun Daswani Lakhani alu0101560410@ull.edu.es
    * @date Feb 21 2004
    * @brief program that prints the basic arithmetic operations.
    * @bug There are no known bugs
    */ 

#include<iostream>
  int main() {
  int num1, num2;
  std::cin >> num1 >> num2;  
  std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
  std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
  std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
  std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
  std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
  std::cout << "-number1 = " << -num1 << std::endl;
  std::cout << "-number2 = " << -num2 << std::endl;
  if (num1 == num2) {
  std::cout << "The numbers are equal";
    }else if (num1 > num2) {
    std::cout << num1 << " is higher than " << num2 << std::endl;
    }else std::cout << num2 << " is higher than " << num1 << std::endl;
  
  return 0;
}
