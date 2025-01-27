/*
 The interest rate paid on funds deposited in a bank is determined by the amount 
of time the money is left on deposit.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double time;
    double interest;
    cout<<"Enter the time (years) the funds are left on deposit:";
    cin>>time;
    if(time >= 5)
	{
        interest= 0.040;
    }
	 else if(time>= 4) 
	 {
        interest= 0.035;
    } 
	else if(time>= 3) 
	{
        interest= 0.030;
    } 
	else if(time>= 2) 
	{
        interest= 0.025;
    } 
	else if(time>= 1) 
	{
        interest= 0.020;
    } 
	else 
	{
        interest= 0.015;
    }
    cout<<"The interest rate is "<< interest * 100 << "%";

    return 0;
}
