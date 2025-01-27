/*
9. (Program) a. Write, compile, and run a C++ program that accepts five values of gallons, one 
at a time, and converts each value entered to its liter equivalent before the next value is 
requested. Use a for loop in your program. There are 3.785 liters in 1 gallon of liquid.
b. Modify the program written for Exercise 9a to request the number of data items to be 
entered and converted first.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float l,g,i;
	for(i= 1; i<=5; i++)
	{
		cout<<"\nEnter value in gallons.";
		cin>>g;
		l = g*3.785;
		cout<<"\nvalue in litres: "<<l;
		
	}
	
	
}
