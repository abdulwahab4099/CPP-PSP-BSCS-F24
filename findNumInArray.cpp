/*
Problem: Write a program to search any element in an array.
length of array should be 10.
*/

#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	int arr[]={1,2,3,1,5,6,7,8,9,10};
	int size=10;
	
	int i, search,found;
	found=0;
	
	cout<<"Enter the number to search in array (1-10): ";
	cin>>search;
	
	for(i=0;i<size;i++)
	{
		if(arr[i]==search)
		{
			cout<<"Number " <<search<<" is found at index "<<i <<endl;
			found++;
			
		}
	}
	
	cout<<search <<" is found " <<found<< " times in the array.";
	
	return 0;
	
	 
}
