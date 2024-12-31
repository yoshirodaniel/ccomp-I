/*
(Car-Pool Savings Calculator) Research several car-pooling websites. Create an application
that calculates your daily driving cost, so that you can estimate how much money could be saved by
car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic
congestion. The application should input the following information and display the user’s cost per
day of driving to work:
a) Total miles driven per day. 
b) Cost per gallon of gasoline
c) Average miles per gallon.
d) Parking fees per day
e) Tolls per day.
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
   system("CLS");
   float distance;
   cout<<"Enter the distance of home to work in kolmeters: ";
   cin>>distance;
   
   //Esto es simplificado*******************************************
   cout<<"\nYour cost per day of driving to work: "<<endl;
   cout<<"a) Total miles driven per day: "<<distance<<" km"<<endl;
   cout<<"b) Cost per gallon of gasoline: "<<"S/ "<<14.58 <<endl;
   cout<<"c) Average kilometers per gallon: "<<50<<" km"<<endl;
   cout<<"d) Parking fees per day: "<<"/S "<<5.00<<" por hora"<<endl;
   cout<<"e) Tolls per day: "<<"/S "<<2.50<<endl;

   return 0;
}