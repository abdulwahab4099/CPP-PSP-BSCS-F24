#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int i,j,size,key,found,loc;
	found=0;
	cout<<"Enter size of Array:";
	cin>>size;
	int list[size]={};
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter value at index'"<<i<<"':";
		cin>>list[i];
	}
	
	cout<<"\nEnter the value you want to search:";
	cin>>key;
	cout<<"Seraching...\n";
	for(i=0;i<size;i++)
	{
		
		if(key==list[i])
		{
			cout<<key<<" is found at index'"<< i<<"'.\n\n";
			found++;	
		}
	}
	
	cout<<key<<" is found '"<<found<<"'times in the array.";
	return 0;
	
}
