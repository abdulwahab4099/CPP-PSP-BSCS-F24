 /*
Question3:
Print the decimal, octal, and hexadecimal values of all characters between the start and stop characters 
entered by a user. For example, if the user enters an 'a' and a 'z', the program should print all the characters 
between a and z and their respective values. Make sure the second character the user enters occurs later in 
the alphabet than the first character. If it doesn’t, write a loop that asks the user repeatedly for a valid second 
character.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char startch,stopch;
	cout<<"Enter starting alphabet:";
	cin>>startch;
	do
	{
		cout<<"\nEnter stop alphabet (must come after "<<startch<<  "): ";
		cin>>stopch;
		if(startch>=stopch)
		{
			cout<<"Invalid Stop Character. Stop character must come after start character...";
		}
		
		
	}
	while(startch>=stopch);
	
	cout<<"\n--------------------------------------------------------------------------";
	cout<<"\n\tCharacter \tDecimal \tOctal \tHexadecimal";
	cout<<"\n--------------------------------------------------------------------------\n";
	for(char ch=startch; ch<=stopch; ch++)
	{
		cout<<"\t"<<ch<< "\t\t" <<static_cast<int>(ch) <<"\t\t"
		<<std::oct<<static_cast<int>(ch)<<"\t\t" <<std::hex <<static_cast<int>(ch)<<"\t\t"<<std::dec<<endl;
	}
	
	return 0;
	
	
}
