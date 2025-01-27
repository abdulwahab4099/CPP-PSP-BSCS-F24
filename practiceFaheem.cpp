#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int num1,num2;
	char operation;
	cout<<"Enter first munber:";
	cin>>num1;
	cout <<"\nEnter sencond number:";
	cin>>num2;
	cout<<"Enter the operation that you want to perform:";
	cin>>operation;
	calculate (num1,num2,operation);
	return 0;
	
	
}
