//Andre Abrams, 3/1/2015
//Homework 2.25
//If Multiple Printer

#include <iostream>
using namespace std;
 
int main()
{
  int x, y;
 
  cout << "Enter the two integers: ";
  cin >> x >> y;
 
  if (x % y == 0)
    cout << "First is a multiple of the second.\n";
  else
    cout << "First is not a multiple of the second.\n";
 
 system("pause");

   return 0;
}
 