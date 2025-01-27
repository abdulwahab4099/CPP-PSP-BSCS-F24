/*
Question2:
An electrical manufacturer tests five generators by measuring their output voltages at three different times. 
Write a C++ program that uses a nested loop to enter each generator’s test results, and then computes and 
displays the average voltage for each generator. Assume the following generator test results:
                     Test result1       Test result2         Test result3
1st generator: 			122.5 				122.7 				123.0
2nd generator:  		120.2 				127.0  				125.1
3rd generator: 			121.7 				124.9 				126.0
4th generator: 			122.9 				123.8 				126.7
5th generator: 			121.5 				124.7 				122.6

Also calculate and display the average voltage for all the generators. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int generators=5;
	const int tests=3;
	int i,j;
	
	float voltages[generators][tests] = { {122.5,122.7,123.0},{120.2,127.0,125.1},{121.7,124.9,126.0},{122.9,123.8,126.7},{121.5,124.7,122.6}};
	float totalSum=0;
	cout<<"Results: \n\n";
	cout<<"\t Generator \t Test1 \t test2 \t test3 \t Average \n";
	cout<<"--------------------------------------------------------------------------------------------\n";
	for(i=0;i<generators;i++)
	{
		float resultSum=0;
		cout<<"\t Generator"<<i+1;
			
		for(j=0;j<tests;j++)
		{
			cout<<"\t"<<voltages[i][j];
			resultSum+=voltages[i][j];
			
		}
		
		float genAvg=resultSum/tests;
		totalSum+=resultSum;
		cout<<"\t"<<genAvg <<"\n";
		
	}
	cout<<"--------------------------------------------------------------------------------------------\n";
	cout<<endl;
	cout<<"Total avg of all the results: "<<(totalSum/(generators*tests));
	 
	
    return 0;	
}
