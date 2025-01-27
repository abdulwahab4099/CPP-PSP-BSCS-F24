/* 
Write an algorithm that takes the length and 
width of a rectangular yard and the length and 
width of a rectangular house situated in the 
yard. Your program should compute the time 
required to cut the grass at the rate of two 
square feet a second.
*/





#include <iostream>
using namespace std;
int main()
{
	int ylength, ywidth, hlength, hwidth, Yarea, Harea, Agrass;
	float time;
	cout<<"Enter length of yard=";
	cin>>ylength;
	cout<<"Enter width of yard=";
	cin>>ywidth;
	cout<<"Enter length of house=";
	cin>>hlength;
	cout<<"Enter width of house=";
	cin>>hwidth;
	
	Yarea=ylength*ywidth;
	Harea=hlength*hwidth;
	Agrass=Yarea-Harea;
	
	time=Agrass*0.5;
	
	cout<<"time required to cut the grass="<<time;
	
	return 0;
}
