/*
Suppose you have a single dimensional array VALUES of size 7, that Is already 
initialized with some values. Write a C++ statement that Stores the values in another 
array in reverse order.
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int size=7;
	int VALUES[size]={1,2,3,4,5,6,7};
	int reverse[size]={};
	for(int i=0;i<size;i++)
	{
		
		
		reverse[i]=VALUES[size-1-i];
		
	
		
	}
	for(int i=1;i<=size;i++)
	{
		cout<<reverse[i];
	}
	return 0;
}
