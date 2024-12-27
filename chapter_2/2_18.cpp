/*(Comparing Integers) Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words "is larger." If the
numbers are equal, print the message "These numbers are equal."
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {
  
  int number1{0};
  int number2{0};

  system("CLS");

  cout<<"Enter two numbers: ";
  cin>>number1>>number2;

  if (number1<number2)
  {
    cout<<number2<<" is larger"<<endl;
  }

  if (number2<number1)
  {
    cout<<number1<<"Is larger"<<endl;
  }

  if (number1==number2)
  {
    cout<<"These numbers are equal"<<endl;
  }
  
  return 0;
}