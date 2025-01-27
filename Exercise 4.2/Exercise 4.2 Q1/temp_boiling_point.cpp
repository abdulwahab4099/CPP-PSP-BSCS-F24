//If the temperature is above 100 degrees, display the message “above the boiling point of 
//water”; else, display the message “below the boiling point of water.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float temp;
	cout<<"Enter temperature:";
	cin>>temp;
	
	if (temp>=100)
	{
		cout<<"above the boiling point of water.";
		
	}
	else
	{
		cout<<"below the boiling point of water.";
	}
	
	
return 0;	
}
