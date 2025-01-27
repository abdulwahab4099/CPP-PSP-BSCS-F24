/*
Problem: Write a code to find the largest element in an array of size 10.
*/

#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	int arr[10]={12,5,7,8,3,75,46,50,35,85};
	int largest=arr[0];
	
	for(int i=1; i<10;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	
	cout<<"The largest number in the array is: "<<largest;
	return 0;
	
}
