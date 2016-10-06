//Andre Abrams, 2/21/2015
//Larger or equal program

#include <iostream>

using namespace std;
 
int main()
{
   int x, y;
 
   cout << "Enter two numbers: ";
   cin >> x >> y;
 
    if(x == y)
      cout << "These numbers are equal.";
	if(x > y)
      cout << x << " is larger ";
	if (x < y)
	   cout << y << " is larger " << "\n";

   system("pause");
  
   return 0;
}