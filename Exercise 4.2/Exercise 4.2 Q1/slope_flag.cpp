// If the slope is less than 0.5, set the variable flag to 0; else, set flag to 1

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float slope,flag;
	cout<<"enter slope:";
	cin>>slope;
	if(slope<=0.5)
	{
	 	flag=0;
	 	//cout<<"flag="<<flag;
	 	
	}
	else
	{
	    flag=1;
	}
	cout<<"flag="<<flag;
	 	
return 0; 	
	 
	
}
