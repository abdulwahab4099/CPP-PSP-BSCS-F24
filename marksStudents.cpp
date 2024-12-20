/* 
This Program is about storing marks of each student in each eubject. Then it performs some operations on the marks abtained by student.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,j,student,subjects,ObtM,MaxM,loc1,loc2,loc3,Mmin,Mmax;
	float avg;
	cout<<"Enter the number of rows (Students) in your array:";
	cin>>student;
	
	subjects=5;
	int sMarks[student][subjects]={};
	cout<<"\nEnter the values in 2D array...";
	float sAvg[student]={};

	for (i=0;i<student;i++)
	{
		for(j=0;j<subjects;j++)
		{
			cout<<"\n\nEnter marks of Student "<<i+1<<" in Subject"<<j+1<<" : ";
			cin>>sMarks[i][j];
		}
		
	}
	
	cout<<"\n Student # \t Subject1 \t Subject2 \t Subject3 \t Subject4 \t Subject5 \t Average\n";
	cout<<"------------------------------------------------------------------------------------------------------------\n";
	
	for (i=0;i<student;i++)
	{
		cout<<"\n Student"<<i+1<<"\t ";
		ObtM=0;
		MaxM=500;
		
		for(j=0;j<subjects;j++)
		{
			cout<<sMarks[i][j]<<"    \t\t ";
			ObtM+=sMarks[i][j];
		}
		avg=(float)ObtM/subjects;
		cout<<avg;
		sAvg[i]=avg; //Stores average of each student.
		
		
	}
	cout<<"\n------------------------------------------------------------------------------------------------------------\n";
	
	//TO find student with maximum average.
	Mmax=sAvg[0];
	loc1=0;
	for(i=0;i<student;i++)
	{
		
		if(Mmax<sAvg[i])
		{
			Mmax=sAvg[i];
			loc1=i;
		}
	}
	
	
	cout<<"\n\nStudent'"<<loc1+1<<"' has the highest average.";
	
	// To find student with minimum average.
	Mmin=sAvg[0];
	loc2=0;
	for(i=0;i<student;i++)
	{
		
		if(Mmin>sAvg[i])
		{
			Mmin=sAvg[i];
			loc2=i;
		}
	}
	
	cout<<"\n\nStudent'"<<loc2+1<<"' has the lowest average.";
	
	// To find students with maximum and minimum marks in each subject.
	
	for(j=0;j<subjects;j++) 
	{
    int maxMarks=sMarks[0][j];
    int minMarks=sMarks[0][j];
    int maxStudent=0;
    int minStudent=0;

    for (i=0;i<student;i++) 
	{
        if (sMarks[i][j]>maxMarks) 
		{
            maxMarks=sMarks[i][j];
            maxStudent=i;
        }
        if (sMarks[i][j]<minMarks) 
		{
            minMarks=sMarks[i][j];
            minStudent=i;
        }
    }

    cout <<"\nSubject "<<j + 1<<":";
    cout << "\nStudent "<<maxStudent + 1<<" has the maximum marks ("<< maxMarks <<").";
    cout << "\nStudent "<< minStudent + 1<<" has the minimum marks ("<<minMarks<<").";
	}
	
	// To find number of students with A grade in Subject 4.
	
	
	int Sub4=0;
	
	for (i=0;i<student;i++)
	{
		for(j=0;j<subjects;j++)
		{
			if(j==3 && sMarks[i][j]>=80)
			{
				Sub4++;
				
				
			}
		}
		
	}
	cout<<"\n\n"<<Sub4<<" Students got A grade in Subject 4.";
	
	// To find student with mininum marks in subject 4.
	int min4=sMarks[0][3];
	
	for (i=0;i<student;i++)
	{
		for(j=0;j<subjects;j++)
		{
			if(j==3 && min4>sMarks[i][j])
			{
				min4=sMarks[i][j];
				loc3=i;
				
			}
		}
		
	}
	cout<<"\n\nStudent'"<<loc3+1<<"' has minimum marks in subject '4'";
	
	//Failed students in Subject 2.
	int Sub2=0;
	for (i=0;i<student;i++)
	{
		for(j=0;j<subjects;j++)
		{
			if(j==1 && sMarks[i][j]<50)
			{
				
				Sub2++;
				
			}
		}
		
	}
	
	cout<<"\n\n"<<Sub2<<" Students are fail in subject 2";
	
	
	return 0;
}
