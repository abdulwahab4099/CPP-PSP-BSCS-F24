// If distance is greater than 20 and less than 35, request that the user input a value for the variable time.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int distance, time;
	cout<<"Enter distance:";
	cin>>distance;
	if(distance>20 && distance<35)
	{
		cout<<"Enter time:";
		cin>>time;
		cout<<"You entered time:" <<time;
	}
	else
	{
		cout<<"distance is not between 20 & 35";
	}
	return 0;
}
