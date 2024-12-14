/* 
Bubble Sort:
Write a program which sorts the entities of an array in increment sort.
e.g: {5,7,4,2,3,1} to {1,2,3,4,5,6}
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,j,k,size,min;
	
	cout<<"Enter size of array:"; cin>>size;
	int list[size]={};
	for(int k=0;k<size;k++)
	{
		cout<<"Input number for index '"<<k <<"' :";
		cin>>list[k];
		cout<<endl;
		
	}
	cout<<"\nEntities before the sorting: \n\n";
	for(k=0;k<size;k++)
	{
		cout<< list[k]<<"\t";
	}
	
	for(i=0; i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			min=list[j];
			list[j]=list[j+1];
			list[j+1]=min;
			
		}
				
	}
	cout<<"\n\nEntities after sorting :\n\n";
	for(k=0;k<size;k++)
	{
		cout<< list[k]<<"\t";
	}
	
	return 0;
}




