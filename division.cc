/**
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica 2022-2023
    *
    * @file division.cc
    * @author Arun Daswani Lakhani alu0101560410@ull.edu.es
    * @date Feb 21 2004
    * @brief program that prints the division and reminder of two integer
    * numbers.
    * @bug There are no known bugs
    * @see https://jutge.org/problems/P48107
    */ 


//division 
using namespace std;
#include <iostream>
int main(){

int number1{0};
int number2{0};
cin >> number1;
cin >> number2;
while (number2<=0){
  cout << "Inserte un numero mayor que 0 " << endl;
  cin >> number2;
}
cout << number1 / number2 << " " << number1 % number2 << endl;


return 0;
}


