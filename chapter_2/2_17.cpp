/*(Printing) Write a program that prints the characters V to Z on the same line with each pair
of adjacent characters separated by one space i.e. VX YZ. Do this several ways:
a) Using one statement with two stream insertion operators.
b) Using one statement with four stream insertion operator.
c) Using two statements with one stream insertion operator each.
*/

#include <iostream>

int main() {

   system("CLS");
   std::cout<<"VW WX "<<"XY YZ\n"; //Using one statement with two stream insertion operators.
   std::cout<<"VW "<<"WX "<<"XY "<<"YZ\n"; // Using one statement with four stream insertion operator.
   
   std::cout<<"VW WX "; //Using two statements with one stream insertion operator each
   std::cout<<"XY YZ";
       
   return 0;
}