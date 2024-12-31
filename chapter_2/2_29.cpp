/*(Table) Using the techniques of this chapter, write a program that calculates the surface area
and volume of cubes with face lengths of 0 to 4 cm. Use tabs to print the following neatly formatted
table of values:
Face length     Surface area    Volume
of cube (cm)    of cube (cm^2)  of cube(cm^3)
0               0               0
1               6               1
2               24              8
3               54              27
4               96              64

*/

#include <iostream>

using std::cout;
using std::endl;

int main ()
{
   system("CLS");
   
   int c0{0},c1{1},c2{2},c3{3},c4{4};

   cout<<"Face lenght\tSurface area\tVolume"<<endl;
   cout<<"of cube (cm)\tof cube(cm^2)\tof cube (cm^3)"<<endl;
   cout<<c0<<"\t\t"<<c0*c0*6<<"\t\t"<<c0*c0*c0<<endl;
   cout<<c1<<"\t\t"<<c1*c1*6<<"\t\t"<<c1*c1*c1<<endl;
   cout<<c2<<"\t\t"<<c2*c2*6<<"\t\t"<<c2*c2*c2<<endl;
   cout<<c3<<"\t\t"<<c3*c3*6<<"\t\t"<<c3*c3*c3<<endl;
   cout<<c4<<"\t\t"<<c4*c4*6<<"\t\t"<<c4*c4*c4<<endl;
   
   return 0;
}
 