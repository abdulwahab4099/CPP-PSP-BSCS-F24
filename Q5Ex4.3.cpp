/*
Fluid flowing through a pipe can flow in a smooth, constant manner, called laminar 
flow; in a chaotic manner, called turbulent flow; or in an intermediate stage between smooth 
and turbulent flow, which is called transitional flow. In practice, a value known as the Reynolds 
number can be used to determine the type of flow. For a Reynolds number below 2000, the 
flow is laminar, and for a Reynolds number above 3000, the flow is turbulent. For a Reynolds 
number between 2000 and 3000, the flow is transitional.
 
Using this information, write, compile, and run a C++ program that accepts a Reynolds number as user input and displays a message indicating 
whether the flow is laminar, turbulent, or transitional.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double reynolds_value;
    cout<<"Enter the Reynolds number: ";
    cin >> reynolds_value;
    if(reynolds_value< 2000) 
	{
        cout<< "The flow is laminar.";
    } 
	else if(reynolds_value> 3000) 
	{
        cout<<"The flow is turbulent.";
    } 
	else 
	{
        cout<<"The flow is transitional.";
    }

    return 0;
}
