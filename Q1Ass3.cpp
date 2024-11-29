/*
Question1:
Write a C++ program to convert meters to feet. The program should request the starting meter value, 
the number of conversions to be made, and the increment between metric values. The display should 
have appropriate headings and list the meters and the corresponding feet value. If the number of 
iterations is greater than 10, have your program substitute a default increment of 10. Use the 
relationship that 1 meter = 3.281 feet.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float  meters, feets;
	int increment, iteration;
	cout<<"Enter starting meter value:"; cin>>meters;
	cout<<endl;
	cout<<"Enter the number of conversions you want to be made: "; cin>>iteration;
	cout<<endl;
	cout<<"Enter the increment you want in meteric value: "; cin>>increment;
	cout<<endl;
	
	
	if (iteration>10)
	{
		iteration=10;
		cout<<"Iteration is alloted default value."<<endl; 
		cout<<"Iteration can not be greater than 10..."<<endl;
		
	}
	
	cout<<setw(10) <<"Meters"<< setw(20) <<"Feets" <<endl;
	cout<<"-----------------------------------"<<endl;
	for(int i=0; i<iteration; i++)
	{
		feets= 3.281*meters;
		
		cout<<setw(10) <<meters<< setw(20) << feets <<endl;
		meters+=increment;
		
	}
	
	
	
	
	
	return 0;
}
