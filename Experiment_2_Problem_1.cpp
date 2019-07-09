#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{ 
	char package;
	int value;
	int A,B,C;
	value = 0;
	int hours;
	A = 995;
	B = 1495;
	C = 1995;
	bool abort = false;
	
	cout << "Experiment 2 - Problem 1 \n\n\n" << endl;
	cout << "Welcome to your monmthly internet bill calcuilator" << endl;
	cout << "--------------------------------------------------  \n\n" << endl;
do
  {
	
	cout << "Package A - P995/month, 10hrs. of access & +20/hr for additional hour" << endl;
	cout << "Package B - P1495/month, 20 hrs. of access & +10/hr for addiont for additional hour" << endl;
	cout << "Package C - P1995/month, unlimited access \n\n\n" << endl;
	cout << "Please choose between these packages (A,B,C): " << flush;
	cin  >>  package;
	cout << " " << endl;
	cout << " " << endl;

	switch (package)
	{
	case 'a':
	case 'A': 
		{ 	cout << "How many hours were used? " << flush;
	       cin >> hours;
		   if ( hours >=10)
		   {
			   cout << "Your amount due will be 995 pesos \n\n\n" << endl;
		   }
		   else 
		   {
			   cout << "Your amount due will be " << A* (20*(hours - 10)) << " " << "pesos \n\n\n" << endl;
		   }
		   abort = true;
		}
		break;

	case 'b':
	case 'B': 
		{ 	cout << "How many hours were used? " << flush;
	       cin >> hours;
		   if ( hours >=10)
		   {
			   cout << "Your amount due will be 1495 pesos \n\n\n" << endl;
		   }
		   else 
		   {
			   cout << "Your amount due will be " << A* (10*(hours - 20)) << " " << "pesos \n\n\n" << endl;
		   }
		   abort = true;
		}
		break;

	case 'c':
	case 'C':
		{ 
			   cout << "Your amount due will be 1995 pesos \n\n\n" << endl;
		}
        break;

		   
	default:
		{
			cout << "You can only choose between A, B, and C " << endl;
			cout << "--------------------------------------- \n\n\n" <<endl;
		}
		continue;
	}
  }	while (!abort);
system("pause");
getch();
return 0;
}