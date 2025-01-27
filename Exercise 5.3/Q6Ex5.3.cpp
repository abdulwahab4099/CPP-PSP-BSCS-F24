/*6. (Modify) Modify Program 5.10 to produce a table of numbers from 10 to 1, instead of 1 to 10, 
as it currently does.*/

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
	
	for(a = 10; a>=0 ; a-=1)
	{
		cout<<setw(10)<<a;
		cout<<setw(10)<<a*a;
		cout<<setw(10)<<a*a*a<<endl;
	}
	return 0;
}

