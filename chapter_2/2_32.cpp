/*(Maximal Heart Rate Calculator) Doctors suggest individuals exercise to stay healthy and
that they monitor their heart rate while exercising to ensure that they are not doing too much or too
little. The Maximal Heart rate (MHR) is a guideline that is used to indicate when an individua
should ease off a little. The equation that is commonly used is
    220 − age = Maximum Heart Rate (MHR)
This formula was empirically derived from young athletes. A broader age distribution in a study by
Tanaka in 2001 showed that this formula often underestimated the MHR in older subjects. Hence
the formula MHR = 208 − 0.7(age) was suggested. Gellish in 2007 showed good correlation to
stress-testing results using MHR = 207 − 0.7(age) and a later study by Nes et al in 2012 suggested
that the equation be MHR = 211 − 0.64(age).
    Write a program that requests the user to enter their age and then displays the suggested
MHR values using each of these equations. As a conclusion, suggest the range of values that the
user should consider by displaying the smallest and largest MHR values calculated. Test your program
by entering several ages that are a few decades apart. (Take a look at “Age-predicted maxima
heart rate in healthy subjects: The HUNT Fitness Study” published in the Scandinavian Journal of
Medicine and Science in Sports for a discussion about these MHR equations).*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    system("CLS");
   int age;
   float mhr1,mhr2,mhr3,mhr4;
   float mhrsmallest,mhrlargest;

   cout<<"\tMaximal Heart Rate Calculator"<<endl;
   cout<<"Enter your age: ";
   cin>>age;
   mhr1=220-age;
   mhr2=208-(0.7*age);
   mhr3=207-(0.7*age);
   mhr4=211-(0.64*age);
   
   // Esta parte calcula el menor y el mayor en la variables smallest y largest***
   if (mhr1>mhr2)
   {
      mhrsmallest=mhr2;
      mhrlargest=mhr1;
   }
   if (mhr2>mhr1)
   {
      mhrsmallest=mhr1;
      mhrlargest=mhr2;
   }
   if (mhr3<mhrsmallest)
   {
      mhrsmallest=mhr3;
   }
   if (mhr3>mhrlargest)
   {
      mhrlargest=mhr3;
   }

   if (mhr4<mhrsmallest)
   {
      mhrsmallest=mhr4;
   }
   if (mhr4>mhrlargest)
   {
      mhrlargest=mhr4;
   }
   
   /*
   cout<<mhr1<<endl;
   cout<<mhr2<<endl;
   cout<<mhr3<<endl;
   cout<<mhr4<<endl<<endl;
   */
   cout<<"\n\tThe range of your Maximal Heart Rate is between "<<mhrsmallest<<" to "<<mhrlargest<<endl;


   return 0;
}