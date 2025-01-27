#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdlib>



using namespace std;

	struct psp
{
	int RollNo;
	char  Name[20];
	char City[20];
	float cgpa;
	
	
};

int main()
{

	psp s1,s2;
	
	
	cout<<"Enter Roll No:";
	cin>>s1.RollNo;
	cin.ignore();
	cout<<"\nEnter Name:";
	gets(s1.Name);
	cin.ignore();
	cout<<"\nEnter City:";
	gets(s1.City);
	cin.ignore();
	cout<<"\nEnter CGPA:";
	cin>>s1.cgpa;
	cin.ignore();
	
	s2=s1;
	cout<<"\nRoll No:"<<s2.RollNo;
	cout<<"\nName:"<<s2.Name;
	cout<<"\nCity:"<<s2.City;
	cout<<"\nCGPA:"<<s2.cgpa;
	
	return 0;
	
}
