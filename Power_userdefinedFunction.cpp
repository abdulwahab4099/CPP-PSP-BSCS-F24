#include <iostream>
#include <conio.h>
using namespace std;

int fpower(int,int);
int fpower(int a,int b)
{
	int c,d;
	d=a;
	for(c=1;c<=b;c++)
	{
		d*=a;
	}
	return d;
	
}

int main()
{
	int n,power;
	cout<<"Enter the number you want to find power of:";
	cin>>n;
	cout<<"\nEnter the power of number:";
	cout<<"the power of number is given as: "<<fpower(n,power);
	return 0;
		
}
