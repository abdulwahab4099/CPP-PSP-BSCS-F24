/*
Write a C++ function  
clock (int days, int& week, int& month, int& year, int & remaining_days), that input days 
and finds equivalent years, months, weeks, and remaining days. Input days in main 
program and pass it to clock() function, the function will find and return equivalent years, 
months, weeks and remaining days to main program.  
Note: 1 year = 365 days,  
1 month=30 days,  
1week=7days 
*/
#include <iostream>
#include <conio.h>
using namespace std;
const int nyear=365;
const int nmonth=30;
const int nweek=7;

void clock(int days,int& week, int& month, int& year, int& remaining_days)
{
	year=days/nyear;
	month=days/nmonth;
	week=days/nweek;
	remaining_days=days%nweek;
	
	
	
}
int main()
{
	int days, week, month,year, remaining_days;
	cout<<"Input days:";
	cin>>days;
	clock(days,week, month, year,  remaining_days);
	cout<<"No of years:"<<year;
	cout<<"No of months:"<<month;
	cout<<"No of weeks:"<<week;
	cout<<"No of remaining days:"<<remaining_days;

	
	return 0;
}
