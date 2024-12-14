#include <iostream>
#include <conio.h>
using namespace std;

void calculate(int,int,char);

void calculate(int n1, int n2, char op)
{
	if(op=='+')
	{
		cout<<n1+n2;
	}
	else if(op=='-')
	{
		cout<<n1-n2;
	}
	else if(op=='*')
	{
		cout<<n1*n2;
	}
	else if(op=='/')
	{
		if(n2==0)
		{
			cout<<"Division by '0' is not possible.";
		}
		
		else
		{
			cout<<n1/n2;
		}
	}
	else if(op=='%')
	{
		cout<<n1%n2;
	}
	else
	{
		cout<<"Error in inputs...";
	}
}

int main()
{
	int num1,num2;
	char oper;
	cout<<"Enter 1st number:";
	cin>>num1;
	cout<<"\nEnter 2nd number:";
	cin>>num2;
	cout<<"\nWhat operation do you want to perform [+,-,*,/,%]:";
	cin>>oper;
	
	calculate(num1,num2,oper);
}
