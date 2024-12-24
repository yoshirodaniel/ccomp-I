/*(Arithmetic) Write a program that asks the user to enter two numbers, obtains the two
numbers from the user and prints the sum, product, difference, and quotient of the two numbers*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  int number1{0};
  int number2{0};
  int difference{0};
  
  system("CLS");
  cout<<"Enter two number integers: ";
  cin>>number1>>number2;
  difference=number1-number2;
  if (difference<0)
  {
    difference=difference*(-1);
  }
  cout<<"The sum is: "<<number1+number2<<endl;
  cout<<"The product is: "<<number1*number2<<endl;
  cout<<"The difference is: "<<difference<<endl;
  cout<<"The quotient is: "<<number1/number2<<endl;

  return 0;
}