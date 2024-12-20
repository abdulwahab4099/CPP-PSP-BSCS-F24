#include <iostream>
#include <iomanip>

using namespace std;
void search(int list1[],int size1,int num1,int& index1,int& found);
void search(int list1[],int size1,int num1,int& index1,int& found)
{
	for(int a=0;a<size1;a++)
	{
		if(num1==list1[a])
		{
			found++;
			index1=a;
		}
	}
	

	
}
int main()
{
	int  size, key, index, found;
	cout<<"Enter size of array:";
	cin>>size;
	int list[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter the value at index'"<<i<<"':";
		cin>>list[i];
	}
	
	cout<<"Enter the value you want to search:";
	cin>>key;
	
	index=0;
	found=0;
	search(list,size,key,index,found);
	if(found!=0)
	{
		cout<<"The value"<<key<<" is found at index "<<index<<".";
	}
	else
	{
		cout<<"the value"<<key<<" is not found in the array.";
	}
	
	
	return 0;
	
}
