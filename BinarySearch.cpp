#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i,j,key,size,loc,low,high,found,mid;
	
	cout<<"Enter the size of Array: ";
	cin>>size;
	int list[size]={};
	cout<<"\nThe vlaues you enter in Array must be in ascending order. Otherwise the program's output might not be correct.";
	for(i=0;i<size;i++)
	{
		cout<<"\n\nEnter the value at index'"<<i<<"':";
		cin>>list[i];
	}
	
	found=0;
	cout<<"\nEnter the value you want to search in array:";
	cin>>key;
	cout<<"\nSearching...";
	low=0;
	high=size-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(key==list[mid])
		{
			found++;
			loc=mid;
			break;
		}
		else if(key<list[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	
	if(found==1)
	{
		cout<<"\n\nValue is found at index'"<<loc<<"'.";
	}
	else
	{
		cout<<"Value is not found in the array...";
	}
	
	return 0;
	
}
