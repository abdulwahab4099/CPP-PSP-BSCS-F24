#include <iostream>
#include <iomanip>

using namespace std;
void OP(float,float,float&,float&,float&,float&);
void OP(float n1, float n2, float& sum1, float& diff1, float& product1, float& division1)
{
	sum1=n1+n2;
	diff1=n1-n2;
	product1=n1*n2;
	division1=n1/n2;
}
int main()
{
	float num1,num2,sum,diff,product,division;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"\nEnter second number:";
	cin>>num2;
	OP(num1,num2,sum,diff,product,division);
	cout<<"\nSum="<<sum;
	cout<<"\nDifference="<<diff;
	cout<<"\nProduct="<<product;
	cout<<"\nDivision="<<division;
	
	return 0;	
}
