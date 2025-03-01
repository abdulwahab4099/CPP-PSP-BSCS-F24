/*
Write a C++ function Count (char[], int& ,int &) that will calculate total number of words 
and total no of vowels in the string passed from main program. Input a string from main 
program, pass it to function count, function will calculate the total number of words and 
total no of vowels in the string and return it to main program. For example, if the given 
sting is “i am a student of first semester” the total no of words in the string are 7 and 
total vowels are 10.
*/
#include <iostream>
#include <conio.h>
using namespace std;
const int size=150;
void Count(char str[],int& vowels,int& words)
{
	for(int i=0;i<size;i++)
	{
		if(str[i]=='a' || str[i]=='A' || str[i]=='E' || str[i]=='e' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O')
		{
			vowels++;
		}
		if(str[i]==' ' || str[i]=='\0')
		{
			words++;
		}
		
		
	}
	
}
int main()
{
	int vowels, words;
	vowels=0;
	words=0;
	
	char str[size]={"Ali is a good boy"};
/*
	cout<<"Enter a string:";
	cin.getline(str,100);
*/
	Count(str, vowels, words);
	cout<<"Number of vowels:"<<vowels;
	cout<<"Number of words:"<<words;
	return 0;
	
}
