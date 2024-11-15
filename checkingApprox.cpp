// If the difference between slope1 and slope2 is less than 0.001, set the variable approx to 0; 
//else, calculate approx as the quantity (slope1-slope2)/2.0.



#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float slope1,slope2,Sdifference,approx;
	
	cout<<"Enter Slope1:";
	cin>>slope1;
	cout<<"Enter Slope2:";
	cin>>slope2;
	
	Sdifference=slope1-slope2;
	if(Sdifference<0.001 ){
		approx=0;
		cout<<"approx=" <<approx;
		
	}
	else
	{
		approx=(slope1-slope2)/2.0;
	    cout<<"approx=" <<approx;
	}
	    
return 0;
	    
	    
		
	
}
