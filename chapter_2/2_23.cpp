 /*(Largest and Smallest Integers) Write a program that reads in five integers and determines
 and prints the largest and the smallest integers in the group. Use only the programming techniques
 you learned in this chapter.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () 
{
   system("CLS");
   int number1;
   int number2;
   int number3;
   int number4;
   int number5;

   cout<<"Enter five integers: ";\
   cin>>number1>>number2>>number3>>number4>>number5;

   int largest{number1};
   int smallest{number2};

   if (number1>number2)
   {
      largest=number1;
      smallest=number2;
   }

   if (number1<number2)
   {
      largest=number2;
      smallest=number1;
   }

   if (number3>largest)
   {
      largest=number3;
   }

   if (number3<smallest)
   {
      number3=smallest;
   }

   if(number4>largest)
   {
      largest=number4;
   }

   if(number4<smallest)
   {
      smallest=number4;
   }

   if(number5>largest)
   {
      largest=number5;
   }

   if(number5<smallest)
   {
      smallest=number5;
   }

   cout<<"the largest is "<<largest<<endl;
   cout<<"the smallest is "<<smallest<<endl;

   return 0;
}