/*(Odd or Even) Write a program that reads in two integers and determines and prints
whether each integer, as well as the sum of the two integers is an odd number. [Hint: Use the
remainder operator (%). An odd number is not a multiple of two. Any odd number has a
remainder of one when divided by 2.]
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main () {
   
   system("CLS");
   int number1;
   int number2;

   cout<<"Enter two numbers: ";
   cin>>number1>>number2;
   //oddnumber1=number1%2
   //oddnumber2=
   if(number1%2) //si es iguall a 1 es verdadero e ingresara a la condicion if
   {
      cout<<number1<<" is odd number"<<endl;
   }
   
   if (number2%2)
   {
      cout<<number2<<" is odd number"<<endl;
   }

   if ((number1+number2)%2)
   {
      cout<<number1<<"+"<<number2<<"="<<number1+number2<<" is odd number"<<endl;
   }

   if((number1%2)==0) //si es 0==0 es verdadero e ingresara a la condicion if
   {
      cout<<number1<<" is even number"<<endl;
   }
   
   if ((number2%2)==0)
   {
      cout<<number2<<" is even number"<<endl;
   }

   if (((number1+number2)%2)==0)
   {
      cout<<number1<<"+"<<number2<<"="<<number1+number2<<" is even number";
   }
   return 0;
}
