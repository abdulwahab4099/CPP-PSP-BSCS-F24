/*
We have to declare an array of struct (Employee), having fields name, ID no, Salary and gendre.
1) Find male employee having highest Salary. Display record of the employee.
2) Find female employee having lowest Salary. Display record of the employee, too.
*/
#include <iostream>
#include <conio.h>
#include <string>
#include <cctype>
#include <stdlib.h>

using namespace std;
const int size=3;
struct employee
{
	char Name[50];
	int ID;
	int Salary;
	char Gender[6];
};
employee Employee[size];

int main()
{
	int i, j,f1,f2,search1,search2,loc1,loc2,loc3,loc4,most,less;
	f1=0;
	f2=0;
	for (i=0;i<size;i++)
	{
		cout<<"Enter name of the Employee:";
		gets(Employee[i].Name);
		cin.ignore();
		
		cout<<"\nEnter employee ID:";
		cin>>Employee[i].ID;
		cin.ignore();
		cout<<"\nEnter salary:";
		cin>>Employee[i].Salary;
		cin.ignore();
		cout<<"\nEnter gender of employee[M/F]:";
		gets(Employee[i].Gender);
		cin.ignore();
		cout<<"----------------------------------------------------------\n";
		
	}
	
	cout<<"\n====================================================";
	cout<<"\n Employee records are given as:";
	cout<<"\n\n====================================================";
	
	cout<<"\nEmployee\tID\tSalary\tGender";
	
	for (i=0;i<size;i++)
	{
		cout<<"\n"<<Employee[i].Name<<"\t\t"<<Employee[i].ID<<"\t\t"<<Employee[i].Salary<<"\t\t"<<Employee[i].Gender<<"\n";
		
		
	}
	cout<<"Search Employee By its ID:";
	cin>>search1;
	loc1=0;
	most=Employee[0].Salary;

	{
		for (i=0;i<size;i++)
		{
			
			if( (Employee[i].Salary>most)&&(Employee[i].Gender=="M"))
			{
				
				
					most=Employee[i].Salary;
					loc3=i;
				
				
			}
			
		}
	cout<<"\nRecord of Male Employee with highest Salary:\n";
	cout<<"\n"<<Employee[loc3].Name<<"\t\t"<<Employee[loc3].ID<<"\t\t"<<most<<"\t\t"<<Employee[loc3].Gender<<"\n";

		
	}
	

	
	/*
	most=Employee[0].Salary;
	
	
	
	
	less=Employee[0].Salary;
	loc2=0;
	for (i=0;i<size;i++)
	{
		
		if((search==Employee[i].ID) && (Employee[i].Gender=="M"))
		{
			if(Employee[i].Salary>most)
			{
				most=Employee[i].Salary;
				loc1=i;
				f1=1;
			}
		}
		else
		{
			cout<<"Record not found.";
		}
		
	}
	
	if(f1==1)
	{
		cout<<"\nRecord of Male Employee with highest Salary:\n";
		cout<<"\n"<<Employee[loc1].Name<<"\t\t"<<Employee[loc1].ID<<"\t\t"<<Employee[loc1].Salary<<"\t\t"<<Employee[loc1].Gender<<"\n";
	}
	
	
	*/
	
	
	
	
	
	return 0;
}
