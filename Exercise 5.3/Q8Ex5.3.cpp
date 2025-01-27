/* 8. (Program) Write, compile, and run a C++ program that converts Fahrenheit to Celsius temperature in increments of 5 degrees. 
The initial value of Fahrenheit temperature and the total 
conversions to be made should be requested as user input during program execution. Recall 
that Celsius = (5.0/9.0) × (Fahrenheit - 32.0).
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, num;
	float fahrenheit,celsius;
	cout<<"Enter the total number of conversions:";
	cin>>num;
	cout<<"Enter temp in Fahrenheit:";
	cin>>fahrenheit;
	cout<<endl;

	cout<<setw(20)<<"Fahrenheit:";
	cout<<setw(20)<<"Celsius:";
	cout<<endl;
	cout<<"--------------------------------"<<endl;
	
	
	
	for(i=1; i<=num ;i++ )
	{
		
		celsius = (5.0/9.0) * (fahrenheit - 32.0);
		cout<<setw(20)<<fahrenheit;
		cout<<setw(20)<<celsius;
		fahrenheit+=5;
		cout<<endl;
	}
	return 0;
}
