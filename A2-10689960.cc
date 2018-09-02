#include <iostream>
using namespace std;
 
int main () {
   int Mark;
   
   cout<<"Enter your Mark";
   cin>> Mark;
   
   if ( Mark >=80 && Mark <=100)
   {
   	cout<<"A+";
   }
   else if(Mark >=75 && Mark <= 79)
   {
   	cout<<"B+";
   }
   else if( Mark >=70 && Mark <=74)
   {
   	cout<<"B";
   }
   else if(Mark >=65 && Mark <=69)
   {
   	cout<<"C+";
   }
   else if (Mark >=60 && Mark <= 64)
   {
   	cout<<"C";
   }
   else if (Mark >=55 && Mark<= 59)
   {
   	cout<<"D+";
   }
   else if(Mark >=50 && Mark <= 54)
   {
   	cout<<"D";
   }
   	else if (Mark >= 45 && Mark <= 49)
    {
    cout<<"E+";
	}
	else if (Mark >=40 && Mark <=44)
	{
	cout<<"E";
	}
   else
   {
   	cout<<"F"
   }
   
   return 0;
}