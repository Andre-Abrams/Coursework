//Andre Abrams, 5/9/2015
//Homework 5.33
//Coin toss program

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
int flip(void);
 
int main()
{
   srand( time(0) );
   int t = 0;
   int h = 0;
 
   for( int i = 1; i <= 100; i++)
   {
      if(flip() == 0)
      {
         cout << "Tails" << endl;
         t++;
      }
      else
      {
         cout << "Heads" << endl;
         h++;
      }
 
   }
   cout << "Tails count: " << t << "\nHeads count: " << h << endl;
   system("pause");
   return 0;
}
 
int flip(void)
{
   return rand() % 2;
}