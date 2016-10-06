// Andre Abrams, 8/1/2015
// Main file

#include <cstdlib>
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
 

 
int main()
{
   Employee employee1 ( "Andre" , "Abrams", 9000);
   Employee employee2 ( "Barack" , "Obama", 40000);
 
   cout << "The new employees:\n" << employee1.getFirstName() << " " 
     << employee1.getLastName() << " " << employee1.getSalary() << endl;
   cout << employee2.getFirstName() << " " << employee2.getLastName() 
     << " " << employee2.getSalary() << endl << endl;
 
   cout << "Yearly salary of employees:\n" 
       << employee1.getFirstName() << " " << employee1.getLastName() << " " << (employee1.getSalary())*12 << endl;
   cout << employee2.getFirstName() << " " << employee2.getLastName() << " " << (employee2.getSalary())*12 << endl;
 
   cout << "Increased yearly salary of employees:\n"
        << employee1.getFirstName() << " " << employee1.getLastName() << " " << (employee1.getSalary())*12*1.1 << endl;
   cout << employee2.getFirstName() << " " << employee2.getLastName() << " " << (employee2.getSalary())*12*1.1 << endl;
 
   system("pause");  
   return 0;
}