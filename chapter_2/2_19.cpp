/*(Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard
and prints the sum, average, product, smallest and largest of these numbers. The screen dialog
should appear as follows:
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main () {
   
   system("CLS");
   int number1;
   int number2;
   int number3;

   cout<<"Input three different integers: ";
   cin>>number1>>number2>>number3;

   int largest{number1};
   int smallest{number1};

   if (number1>number2)
   {
      largest=number1;
      smallest=number2;
   }

   if (number2>number1)
   {
      largest=number2;
      smallest=number1;
   }

   if (largest<number3)
   {
      largest=number3;
   }

   if (smallest>number3)
   {
      smallest=number3;
   }

   cout<<"sum is "<<number1+number2+number3<<endl;
   cout<<"Average is "<<((number1+number2+number3)/3)<<endl;
   cout<<"Product is "<<number1*number2*number3<<endl;
   cout<<"Smallest "<<smallest<<endl;
   cout<<"Largest "<<largest<<endl;

   
   return 0;
}