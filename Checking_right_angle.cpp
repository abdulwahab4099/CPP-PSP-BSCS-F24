 // If an angle is equal to 90 degrees, print the message “The angle is a right angle.”; else, print the message “The angle is not a right angle.”
 
 #include <iostream>
 #include <iomanip>
 using namespace std;
  int main()
  {
  	float angle;
  	cout<<"Enter angle in degrees:";
  	cin>>angle;
  	if (angle=90) {
  		cout<<"The angle is a right angle.";
	  }
	else
	{
		cout<<"The angle is not a right angle."; 
	}
	     
	
  return 0;    
  }
 
