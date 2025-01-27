/* 
 Write, compile, and run a C++ program that accepts a user-input integer number 
and determines whether it’s even or odd. The output should display the message “The 
entered number is even.” or “The entered number is odd.” corresponding to the number the 
user entered. (Hint: An even number has a 0 remainder when divided by 2.)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    if(num % 2 == 0) 
	{
        cout<<"The entered number is even.";
    } 
	else 
	{
        cout<<"The entered number is odd.";
    }

    return 0;
}
