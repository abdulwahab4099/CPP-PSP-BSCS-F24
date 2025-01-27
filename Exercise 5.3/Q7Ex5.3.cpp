/*77. (Program) a. Write, compile, and run a C++ program that displays a table of 20 temperature 
conversions from Fahrenheit to Celsius. The table should start with a Fahrenheit value of 
20 degrees and be incremented in values of 4 degrees. Recall that Celsius = (5.0/9.0) × 
(Fahrenheit - 32.0).
b. Modify the program written for Exercise 7a to request the number of conversions to be made.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a;
	cout<<setw(10)<<"Fahrenheit:";
	cout<<setw(10)<<"Celsius:";
	cout<<endl;
	cout<<"--------------------------------"<<endl;
	float fahrenheit,celsius;
	
	for(fahrenheit=20; fahrenheit>=0 ; fahrenheit-=4)
	{
		celsius = (5.0/9.0) * (fahrenheit - 32.0);
		cout<<setw(10)<<fahrenheit;
		cout<<setw(10)<<celsius;
		cout<<endl;
	}
	return 0;
}
