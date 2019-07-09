#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{ 
		int num, count;
	cout << "Experiment 2 - Problem 4" << endl;
	cout << "------------------------ \n\n\n";

	 for ( num = 1; num <= 10; num++ )
	 {
		 cout << num << ",";
	 } 
		 
	 
	 for ( num > 10; num <= 29; num++ )
		{
			count = num % 2;
			if (count==0)
			{
				cout << num << ",";
			}
	 }

	 cout << num ;
	 cout << " " << endl;
system("pause");
getch();
return 0;
}