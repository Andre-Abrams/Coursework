//Andre Abrams, 4/25/2015
//Asterisk Square

#include <iostream>
using namespace std;
 
void square ( int );
int side;
 
int main()
{
   cout << "Enter side: ";
   cin >> side;
   square( side );

   system("pause");
   return 0;
}
 
void square( int side )
{
   for( int i = 1; i <= side; i++ )
   {
      for( int j = 1; j <= side; j++)
      {
         cout << "*";
      }
      cout << endl;
   }
}