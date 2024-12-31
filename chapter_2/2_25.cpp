/*(Factors) Write a program that reads in three integers and determines and prints if the first
two integers are factors of the second. [Hint: Use the remainder operator (%).]*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main () {
   
   system("CLS");
   int number1;
   int number2;
   int number3;

   cout<<"Enter three integers: ";
   cin>>number1>>number2>>number3;

   if (number2%number3==0)
   {
      cout<<number3<<" es factor de "<<number2<<endl;
   }
   
   if (number2%number1==0)
   {
      cout<<number1<<" es factor de "<<number2<<endl;
   }

}
