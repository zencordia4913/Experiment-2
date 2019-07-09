#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{ 
	int x, y;
double V, z;
	x=0;
	y=0;
	z=2.5;
	V = 0;
	long i;
	i= y + z;
	cout << "Experiment 2 - Problem 3. \n\n\n" << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter two values. \n\n" << endl;
	cout << "x= "<<flush;
	cin  >> x;
	cout << "y= "<<flush;
	cin  >> y;
	switch (x)
	{
	 
	case 1: x = 1;
		if( 1<y<5)
		{
		
			cout << "V = "<< x*y*static_cast<double>(z) << endl;
			
		}
	
	    else if ( y >= 5)
		{
			
			cout << "V = "<< x + y/static_cast<double>(z) << endl;
			
		}
		break;
	case 2: x = 2;
		if( y<=5)
		{
			
			cout << "V = "<<  abs((x - y)/static_cast<double>(z)) << endl;
			
		
		}
		
		else if( y > 5)
		{
		
			cout << "V = "<< x- sqrt(double(i)) << endl;
			
		}
		
	
	default:
	
		cout << "V = "<< x + y + static_cast<double>(z) << endl;
		break;
	}
	system("pause");
getch();
return 0;
}
