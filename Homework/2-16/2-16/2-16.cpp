//Andre Abrams, 2/20/2015
//Sum-Diff-Quo finder

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 
int main()
{
   int i, j;
 
   cout << "Enter two numbers: ";
   cin  >> i >> j;
   cout << "sum = " << i + j << "\n"
        << "product = " << i * j << "\n"
        << "difference = " << i - j << "\n"
        << "quotient = " << i / j << endl;

   system("pause");
 
   return 0;
}