//If the difference between temp1 and temp2 exceeds 2.3, calculate the variable error as (temp1-temp2) * factor.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float temp1,temp2,tempDiff,variable_error, factor;
	factor=69;
	
	
	cout<<"Enter temp1:";
	cin>>temp1;
	cout<<"Enter temp2:";
	cin>>temp2;
	tempDiff=temp1-temp2;
	if(tempDiff>=2.3)
	{
		variable_error=(temp1-temp2) * factor;
	}
	else
	{
	cout<<"tempDiff is less than 2.3";
	}
return 0;
}
	

