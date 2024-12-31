/*Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index. Also, the application should display the following information from
the Department of Health and Human Services/National Institutes of Health so the user can eval
uate his/her BMI:

BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
   system("CLS");
   float weight;
   float height;
 
   cout<<"\t\tBody Mass Index Calculator \n"<<endl;
   cout<<"Enter your weight in kilogramos: ";
   cin>>weight;
   cout<<"Enter your height in meters: ";
   cin>>height;

   cout<<"\n\t\tYour result is "<<weight/(height*height)<<endl;

   cout<<"_____________________________________________"<<endl;
   cout<<"BMI VALUES"<<endl;
   cout<<"Underweight:\tless than 18.5"<<endl;
   cout<<"Normal:\tbetween 18.5 and 24.9"<<endl;
   cout<<"Overweight:\tbetween 25 and 29.9"<<endl;
   cout<<"Obese:\t30 or greater"<<endl;
   cout<<"_____________________________________________"<<endl;

   return 0;
}