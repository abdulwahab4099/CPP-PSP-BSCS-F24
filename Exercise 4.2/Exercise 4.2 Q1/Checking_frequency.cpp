// If the frequency is above 60, display the message “The frequency is too high.”

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float frequency;
	cout<<"Enter frequency:";
	cin>>frequency;
	if(frequency>=60.0)
	{
		cout<<"The frequency is too high.";
	}
	else
	{
		cout<<"The frequency is moderate.";
	}
return 0;
	
}
