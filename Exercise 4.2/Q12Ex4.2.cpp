/*
 Write a C++ program that displays the message “I feel great today!” or “I feel 
down today #$*!” depending on the input. If the character u is entered in the variable ch, the 
first message should be displayed; otherwise, the second message should be displayed.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char ch;
    cout<<"Enter a character:";
    cin >> ch;
    if(ch == 'm' ) 
	{
        cout<<"I feel great today!";
    } 
	else 
	{
        cout<<"I feel down today #$*!";
    }

    return 0;
}
