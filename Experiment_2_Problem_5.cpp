#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{ 
	 int num, a, b, c, temp;
	num = 21;
	a = 0;
	b = 1;
	cout << "The first 20 numbers of the Fibonacci series: " << endl;
 
   for ( c = 0 ; c < num ; c++ )
   {
      if ( c <= 1 )
         temp = c;
      else
      {
         temp = a + b;
         a = b;
         b = temp;
      }
      cout << temp << "," ; 
   }

	cout << "10946" << endl;





		
  
system("pause");
getch();
return 0;
}