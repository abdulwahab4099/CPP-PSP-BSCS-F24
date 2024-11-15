/*
 write, compile, and run a C++ program that accepts an automobile’s 
year and weight and determines and displays its weight class and registration fee.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int model;
    double weight;
    int weightClass;
    double registrationFee;
    cout << "Enter the automobile's model year: ";
    cin >> model;
    cout << "Enter the automobile's weight (in lbs): ";
    cin >> weight;
    if (model <= 1990) 
	{
        if (weight < 2700) 
		{
            weightClass = 1;
            registrationFee = 26.50;
        } 
		else if (weight <= 3800) 
		{
            weightClass = 2;
            registrationFee = 35.50;
        } 
		else 
		{
            weightClass = 3;
            registrationFee = 56.50;
        }
    } 
	else if (model>= 1991 && model <= 1999) 
	{
        if (weight < 2700) {
            weightClass = 4;
            registrationFee = 35.00;
        } 
		else if (weight <= 3800) 
		{
            weightClass = 5;
            registrationFee = 45.50;
        } 
		else 
		{
            weightClass = 6;
            registrationFee = 62.50;
        }
    } 
	else if (model>= 2000) 
	{
        if (weight < 3500) 
		{
            weightClass = 7;
            registrationFee = 49.50;
        } 
		else 
		{
            weightClass = 8;
            registrationFee = 62.50;
        }
    }
    cout << "Weight Class: " << weightClass << endl;
    cout << "Registration Fee: $" << registrationFee;

    return 0;
}

