#include <iostream>
#include <iomanip>

using namespace std;
void sort(int[],int );
void sort(int list1[], int size1)
{
	int a,b,min,temp,loc;
	
	for(a=0;a<size1-1;a++)
	{
		min=list1[a];
		loc=a;
		for(b=a+1;b<size1;b++)
		{
			if(min>list1[b])
			{
			
				min=list1[b];
				loc=b;
			}
		}
		
		temp=list1[a];
		list1[a]=list1[loc];
		list1[loc]=temp;
		
	}
	cout<<"\nEntries are sorted as:\n";
	for(a=0;a<size1;a++)
	{
		cout<<list1[a]<<endl;
		
	}
}

int main()
{
	int size;
	cout<<"Enter size of the array:";
	cin>>size;
	int list[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter the value at index'"<<i<<"':";
		cin>>list[i];
	}
	cout<<"\nArray entities before sorting:\n ";
	
	
	for(int i=0;i<size;i++)
	{
		cout<<list[i]<<endl;
		
	}
	
	sort(list,size);
	
	
		
}
