/*
 Years that are evenly divisible by 400 or are evenly divisible by 4 but not by 100 
are leap years. For example, because 1600 is evenly divisible by 400, 1600 was a leap year. 
Similarly, because 1988 is evenly divisible by 4 but not by 100, it was also a leap year. Using 
this information, write a C++ program that accepts the year as user input, determines whether 
the year is a leap year, and displays a message telling the user whether the entered year is or 
is not a leap year
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int year;
    cout<<"Enter a year:";
    cin>>year;
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
        cout<<year<<" is a leap year.";
    }
	else 
	{
        cout<<year<<" is not a leap year.";
    }
	return 0;
}
