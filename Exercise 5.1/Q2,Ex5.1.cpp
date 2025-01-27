/*
 Rewrite Program 5.4 to produce a table starting at a Celsius value of -10 and ending 
with a Celsius value of 60, in increments of 10 degrees.
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	float temp =-10;
	while(temp<=60)
	{
		cout<< temp <<"\n";
		temp=temp+10;
	}
	return 0;
}
