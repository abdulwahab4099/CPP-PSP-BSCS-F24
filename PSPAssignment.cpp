/*
It is a program for managing patient records in a hospital.
*/




#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#include<cstdlib>
#include<windows.h>

using namespace std;



////////////////////////////////////Patient Structure//////////////////////////////////////////

struct Patient
{
	char name[50];
	int ID;
	char symptoms[150];
	char doctor[50];
	bool discharged;
	
};
Patient patients[10000];

int records=0;


// These are the function prototypes of the functions that are used in this program.//


void addNewPatient(Patient patients[], int &records);
void displayRecords(Patient patients[], int records); // To display patient record.
void searchPatientRecord(Patient patients[], int records);
void updatePatientRecord(Patient patients[], int records);
void dischargePatient(Patient patients[], int records);


// Main Function

int main()
{
    char menu;
	while (1)
	{
		system("cls"); // Clear Screen Function.
		cout <<"================================="<< endl
             <<"|| Hospital Management System ||"<<endl
             <<"================================="<<endl
             <<"\nYou can choose any of these options: "<<endl<<endl
             <<"( A ) Add New Patient Record"<<endl
             <<"( D ) Display all the Patients"<<endl
             <<"( S ) Search for a Patient"<<endl
             <<"( U ) Update Patient Record"<<endl
             <<"( L ) Discharge a Patient"<<endl
             <<"( Q ) Quit"<<endl
             <<"\nEnter Option :";
         // gotoxy is a built in function that is used to make cursor blink on our console screen
        menu = getche();
        cin.ignore();
        //Switch statement
        switch(menu)
        {
        	case 'a':
        	case 'A': addNewPatient(patients, records); break;
        	
        	case 'd':
        	case 'D': displayRecords(patients, records); break;
			
			case 's':
			case 'S': searchPatientRecord(patients, records); break;
			
			case 'u':
			case 'U': updatePatientRecord(patients, records); break;
			
			case 'l':
			case 'L': dischargePatient(patients, records); break;
			
			case 'q':
			case 'Q': exit(0); break;
			
			default :
				cout<<"\nInvalid input. Try again." <<endl;
		}
		
	}
	
	
}

//////////////////////////////////////
///////////////////Display///////////////
/////////////////////////////////////
void displayRecords(Patient patients[], int records)
{
	system("cls");
	
	if (records==0)
	{
		cout<<"No records have been added yet!"<<endl;	
	}
	
	else
	{
		cout<<setw(15)<<"\nName"<<setw(10)<<"ID"<<setw(30)<<"Symptoms"<<setw(15)<<"Doctor"<<setw(15)<<"Status"<<endl;
        cout<<"==================================================================================================================================================="<<endl<<endl;
        for(int i=0; i<records; i++) 
		{
            cout<<setw(15)<<patients[i].name<<setw(10)<<patients[i].ID<<setw(30)<<patients[i].symptoms<<setw(15)<<patients[i].doctor<<setw(15)<<(patients[i].discharged ? "Discharged" : "Admitted")<<endl; 
                
        }
	}
	
	cout<<"Press enter to go to main manu...";
		getch();
	
}

//////////////////////////////////////
///////////Add new record////////////
/////////////////////////////////////

void addNewPatient(Patient patients[], int &records)
{
	char ch;
	do
	{
	
	system("cls");
	
	if (records >= 10000) 
	{
        cout << "Error: Maximum record limit reached. Cannot add more patients." << endl;
        break;
    }
	cout<<"Add new record:\n\n";
	cout<<"Name of patient: ";
	cin.getline(patients[records].name,50);
	cin.ignore();
	cout<<"\nEnter ID: ";
	cin>>patients[records].ID;
	cin.ignore();
	cout<<"\nEnter the symptoms in patient: ";
	cin.getline(patients[records].symptoms,150);
	cin.ignore();
	cout<<"\nRecommended Doctor: ";
	cin.getline(patients[records].doctor,50);
	cin.ignore();
	patients[records].discharged = false;
	records++;
	cout<<"A new record has been added!"<<endl;
	cout<<"Want to add more records? [y/n]";
    ch=getch();
	}
	while(ch!='n' && ch!='N');
}

//////////Search////////////////////

void searchPatientRecord(Patient patients[], int records)
{
	system("cls");
	int id;
    cout<<"\nEnter Patient  ID to Search: ";
    cin>>id;
    cin.ignore();
    
    
    bool found=false;
    
    for(int i=0; i<records; i++)
    {
    	if(patients[i].ID==id)
    	{
    		cout<<"\nRecord Found:\n";
    		cout<<"\nName: "<<patients[i].name<<"\nID: "<<patients[i].ID<<"\nSymptoms: "<<patients[i].symptoms<<"\nDoctor: "<<patients[i].doctor<<"\nStatus: "<<(patients[i].discharged ? "Discharged" : "Admitted");
		found=true;
		break;
		}
	}
	if (found==false) 
	{
        cout<<"Record not found!"<<endl;
    }
    getch();
}

///////////Update Record//////////////////////

void updatePatientRecord(Patient patients[], int records)
{
	system("cls");
	int id;
	char ch;
	cout<<"\nEnter patient ID: ";
	cin>>id;
	bool found=false;
	for(int i=0; i<records; i++)
	{
		if(patients[i].ID==id)
		{
			found = true;
			cout<<"Updating...";
			cout<<"\nWant to change patient name?[y/n]";
			ch=getch();
			if(ch!='n' && ch!='N')
			{
				cout<<"Enter new name: ";
				cin.ignore();
				cin.getline(patients[i].name,50);
			}
			cout<<"\nWant to change patient ID?[y/n]";
			ch=getch();
			if(ch!='n' && ch!='N')
			{
				cout<<"Enter new ID: ";
				cin.ignore();
				cin>>patients[i].ID;
			}
			cout<<"\nWant to update patient symptoms?[y/n]";
			ch=getch();
			if(ch!='n' && ch!='N')
			{
				cout<<"Enter new symptoms: ";
				cin.ignore();
				cin.getline(patients[i].symptoms,150);
			}
			cout<<"\nWant to update patient doctor?[y/n]";
			ch=getch();
			if(ch!='n' && ch!='N')
			{
				cout<<"\nEnter doctor name: ";
				cin.ignore();
				cin.getline(patients[i].doctor,50);
			}
			cout<<"\nRecord Updated Successfully!"<<endl;
            break;	
		}
		
	}
	if (found==false) 
		{
        	cout<<"\nRecord not found!"<<endl;
    	}
    	getch();
}

///////////////discharge a patient////////////////////

void dischargePatient(Patient patients[], int records)
{
	system("cls");
	int id;
	cout<<"\nEnter Patient ID: ";
	cin>>id;
    cin.ignore();

    
    bool found = false;
    for(int i=0; i<records; i++)
    {
    	if(patients[i].ID==id)
    	{
    		found = true;
    		patients[i].discharged = true;
    		cout<<"\nPatient "<<patients[i].name<<"has been discharged."<<endl;
            
            break;
		}
	}
	if (found==false) 
	{
        	cout<<"\nRecord not found!"<<endl;
    }
    getch();
    
	
	
}



