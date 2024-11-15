// If x is greater than y and z is less than 20, request that the user input a value for the variable p.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x,y,z,p;
	
	cout<<"enter x:";
	cin>>x;
	cout<<"enter y:";
	cin>>y;
	cout<<"enter z:";
	cin>>z;
	if(x>y && z<20)
	{
		cout<<"Enter p:";
		cin>>p;
		cout<<"You entered in p: "<<p;
		
	}
	else
	{
		cout<<"condition not true.\n Try again";
	}
return 0;	
	
	
}
