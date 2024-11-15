/*
A senior salesperson is paid $800 a week, and a junior salesperson, $500 a week. Write a C++ program 
that accepts as input a salesperson’s status in the character vari?able status.If status equals s, 
the senior salesperson’s salary should be displayed; other?wise, the junior salesperson’s salary should be displayed.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char status;
    int salary;
    cout << "Enter the salesperson's status [s,j]: ";
    cin >> status;
    
    if (status == 's' ) 
	{
        salary = 800;
    } 
	else 
	{
        salary = 500;
    }
    cout<<"The salary is $"<<salary<<" per week.";

    return 0;

}


