/* Selection Sort:
Sort the entries of an array using selection sort.
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,b,size, loc, temp,min;
	
	cout<<"Enter size of the Array: ";
	cin>>size;
	int list[size]={};
	for(a=0;a<size;a++)
	{
		cout<<"\nEnter the value at index'"<<a<<"': ";
		cin>>list[a];
		
	}
	
	cout<<"\nThe etries of array are given as:\n\n";
	
	cout<<"{";
	for(a=0;a<size;a++)
	{
		cout<<list[a]<<", ";
		
	}
	cout<<"}";
	
	for(a=0;a<size-1;a++)
	{
		min=list[a];
		loc=a;
		for(b=a+1;b<size;b++)
		{
			if(min>list[b])
			{
			
				min=list[b];
				loc=b;
			}
		}
		
		temp=list[a];
		list[a]=list[loc];
		list[loc]=temp;
		
	}
	
	cout<<"\nEntries of list are sorted as:";
	cout<<"\n\n{";
	for(a=0;a<size;a++)
	{
		cout<<list[a]<<", ";
		
	}
	cout<<"}";
	
	return 0;
	
	
}
