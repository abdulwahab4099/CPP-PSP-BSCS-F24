/*
Problem: Write a guessing game where the user has to guess a secret number. 
After every guess, the program tells the user whether their number was too large or too small. 
At the end, the number of tries needed should be printed. 
It counts only as one try if they input the same number multiple times consecutively.
*/

#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	int num,x;
	
	cout<<"Enter a number:";
		cin>>num;
		
		cout<<endl;
	do
	{
		
		cout<<"Guess the number:";
		cin>>x;
		cout<<endl;
		if(x==num)
		{
			cout<<"Superb! \nYou guessed the correct number.";
		}
		else if(x>num)
		{
			cout<<"Try again (The number you entered is larger than the real number)...";
		}
		else if(x<num)
		{
			cout<<"Try again (The number you entered is smaller than the real number)...";
		}
		else
		{
			cout<<"Try again (Wrong input! Input a number)...";
		}
		cout<<endl;
		}
	
	while(x!=num);
	
	return 0;
}

