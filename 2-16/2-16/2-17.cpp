//Andre Abrams, 2/21/2015
//Sum-Avg-Pro/Small-Large
//2.19
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
 
int main()
{
  int x, y, z;
  int sum, average, product;
  
   cout << "Input three different integers: ";
   cin  >> x >> y >> z;
 
   sum = x + y + z;
   average = (x + y + z)/3;
   product = x * y * z;
 
   cout << "Sum is " << sum << "\n"
	    << "Average is " << average << "\n"
	    << "Product is " << product << "\n";
 
   if ((x<y)&&(x<z))
     cout << "Smallest is " << x << "\n";
   if ((y<x)&&(y<z))
     cout << "Smallest is " << y << "\n";
   if ((z<x)&&(z<y))
     cout << "Smallest is " << z << "\n";
   if ((x>y)&&(x>z))
     cout << "Largest is " << x << "\n";
   if ((x<y)&&(z<y))
     cout << "Largest is " << y << "\n";
   if ((z>y)&&(z>x))
     cout << "Largest is " << z << endl;

   system("pause");
 
   return 0;
}