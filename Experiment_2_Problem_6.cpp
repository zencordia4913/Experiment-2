#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num, sum, a;
	cout << "Experiment 2 - Problem 6" << endl;
do 
{
	
	cout << "------------------------ \n\n\n";
	cout << "Please enter a number: "; 
	cin >> num;
		 
		 if (num <= 0) 
		 {
			 cout << "Please enter a positive number." <<endl;
		 }

		 else 
		 {
			 sum = 0;
		 for (a = 1; a <= num; ++a)
		 {
			 sum += a;
		 }

		cout << "sum of all numbers from 1, leading to " << num;
		cout << " is " << sum << "." << endl;
		cout << " " << endl;
		 }
}

while (num != 0 && num >=0); 
{
		cout << "Thank you! \n\n";
}
system ("pause");
getch ();
return 0;
}