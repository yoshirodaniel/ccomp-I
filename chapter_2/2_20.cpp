/*(Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of
a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value
3.14159 for π. Do all calculations in output statements. [Note: In this chapter, we’ve discussed only
integer constants and variables. In Chapter 4 we discuss floating-point numbers, i.e., values that
have decimal points.]*/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    system("CLS");
   
   int radius{0};
   //int pi{3.14159};

   cout<<"Input the radius of a circle: ";
   cin>>radius;

   cout<<"Diameter "<<radius*2<<endl;
   cout<<"Circunference "<<2*3.14159*radius<<endl;
   cout<<"Area "<<3.14159*radius*radius<<endl;


    return 0;
}