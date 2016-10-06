//Andre Abrams, 3/1/2015
//Homework 2.20
//Diameter, Circumference and Area of a Circle


#include <iostream>

using namespace std;
 
int main()
{
   float pi = 3.14159;
   int radius;
 
  cout << "Please enter the radius: ";
  cin >> radius;
 
  cout << "The diameter is " << 2 * radius << endl;
  cout << "Circumference is " << 2 * pi * radius << endl;
  cout << "The area of circle is " << pi * (radius * radius) << endl;

  system("pause");
 
   return 0;
}