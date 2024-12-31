/*(Digits of an Integer) Write a program that inputs a four-digit integer, separates the integer
into its digits and prints them in reverse order separated by two spaces each. [Hint: Use the integer
division and remainder operators.] For example, if the user types in 4315, the program should print:
5 1 3 4
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() 
{
   system("CLS");
   int number;
   int n1,n2,n3,n4;

   cout<<"Enter a four-digit integer: ";
   cin>>number;
   
   n1=number/1000;
   n2=(number%1000)/100;
   n3=((number%1000)%100)/10;
   n4=(((number%1000)%100)%10);

   cout<<n4<<"  "<<n3<<"  "<<n2<<"  "<<n1;

   return 0;
}