/*5. (Modify) Modify Program 5.10 to produce a table of the numbers 0 through 20 in increments 
of 2, with their squares and cubes. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a;
	cout<<setw(10)<<"number";
	cout<<setw(10)<<"square";
	cout<<setw(10)<<"cube"<<endl;
	cout<<"--------------------------------"<<endl;
	
	for(a = 0; a<= 20; a+=2)
	{
		cout<<setw(10)<<a;
		cout<<setw(10)<<a*a;
		cout<<setw(10)<<a*a*a<<endl;
	}
	return 0;
}

