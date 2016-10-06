//Andre Abrams, 4/25/15
//Homework 5.13
//Floor Program

#include <iostream>
#include <cmath>
using namespace std;


double floorNumber( double num )
{
	return floor(num);
}
int main()
{
	double num;
    cout << "Enter number to floor rounding( -999 to end): ";
    cin >> num;
 
  while( num != -999 )
  {
	  cout << "Entered number " << num << " rounded to " <<  floorNumber( num ) << endl;
      cout << "Enter number to floor rounding( -999 to end): ";
	  cin >> num;
  }

   system("pause");
   return 0;
}
 


 