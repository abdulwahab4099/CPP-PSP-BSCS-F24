/*  Rewrite Program 5.1 to print the numbers 2 to 10 in increments of 2. The output 
of your program should be the following:
2  4  6  8  10
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int num=2;
	while(num<=10)
	{
		cout<<num <<"\n";
		num=num+2;
	}
	
	return 0;
}
