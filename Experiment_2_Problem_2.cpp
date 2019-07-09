#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{ 
	float cons, gallon, pregallon, balance;
  cout << "Experiment 2 - Problem 2 \n\n\n" << endl;
  cout <<	"Please place the number of gallons used by the customer: "<< flush;
  cin >> gallon,gallon; 
  cout << "Is there previous gallons consumed? if so please state how many gallons: ";
  cout << (cin >> pregallon,pregallon) << " gallons" << endl;

  cons = gallon + pregallon;
  balance = 35 + 1.10 * cons;

  if(pregallon > 0 && gallon > 0) 
	{
		cout << "The water bill is: " << balance + 20 << " Pesos \n\n\n";
	}

else if(gallon == 0 || pregallon == 0)
	{
		cout << "The water bill is: " << balance << " Pesos \n\n\n";
	}
else 
	{	
		cout << "*Error! Please enter a valid input";
	}
system("pause");
getch();
return 0;
}