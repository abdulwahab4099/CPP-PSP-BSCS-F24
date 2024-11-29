/*
Problem: Write a program that reverses the array, i.e.,
arr = {1, 2, 3, 4, 5} should be reversed to {5, 4, 3, 2, 1}.
*/

#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	int i,j;
	int arr[] ={1,2,3,4,5};
	int size=5;
	
	for(i=0;i<size;i++)
	{
		cout<<arr[i] <<"\n";
	}
	
	cout<<endl;
	cout<<"The reverse of the array entities:";
	
	for(j=5;j>=0;j--)
	{
		cout<<arr[j] <<"\n";
	}
	
	return 0;
}
