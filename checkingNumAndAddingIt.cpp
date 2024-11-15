//If the number is positive, add the number to the variable positivesum; else, add the num?ber to the variable negativesum.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num, positiveSum,negativeSum;
	
	positiveSum=0; negativeSum=0;
	
	cout<<"Input a number:";
	cin>>num;
	if (num%2==0)
	{
		positiveSum+=num;
		cout<<"positiveSum="<<positiveSum;
	}
	else
	{
		negativeSum+=num;
	    cout<<"negativeSum="<<negativeSum;
	}
	    
	    
return 0;
}
