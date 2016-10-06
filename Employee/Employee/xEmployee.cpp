// Andre Abrams, 8/1/2015
// Hidden file

#include <cstdlib>
#include <iostream>
 
using namespace std;
 
#include "Employee.h"
 
// initialization with constructor
Employee::Employee(string initFirstName, string initLastName, int initSalary)
{
  setFirstName( initFirstName);
  setLastName( initLastName);
  setSalary( initSalary);
}
 
// function for set first name
void Employee::setFirstName( string initFirstName)
{
  firstName = initFirstName;
}
// function for get first name
string Employee::getFirstName()
{
  return firstName;
}
// function for set last name
void Employee::setLastName( string initLastName)
{
  lastName = initLastName;
}
// function for get last name
string Employee::getLastName()
{
  return lastName;
}
// function for set salary
void Employee::setSalary( int initSalary)
{
  if (initSalary < 0)
  {
     cout << "The salary amount can't be negative. Salary set as 0" << endl;
     salary = 0;
   }
    else
   {
     salary = initSalary;
   }
}
// function for get salary
int Employee::getSalary()
{
  return salary;
}