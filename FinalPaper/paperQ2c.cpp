/*
Show what will be the value of  x, y and z after function calling. 
*/
#include <iostream>
#include <conio.h>
using namespace std;
void sum ( int a, int& b, int& c) 
{  
	c=a+b+1;  
	a=a+2;  
	b=b+2;      
} 
int main() 
{ 
    int x,y,z; x=4; y=3;z=5;     
    sum(x,y,z);  
	cout<<x<<","<<y<<","<<z<<"\n";  
	 sum(y,x,z);   
	cout<<x<<","<<y<<","<<z<<"\n";  
	 sum(z,y,x);  
	cout<<x<<","<<y<<","<<z<<"\n";  
	 sum(z,z,x);  
	cout<<x<<","<<y<<","<<z<<"\n";   
	return 0; 
} 
