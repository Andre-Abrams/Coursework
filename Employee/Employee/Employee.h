// Andre Abrams, 8/1/2015
// Header File

#include <cstdlib>
#include <iostream>
 
using namespace std;
 
class Employee
{
public:
  Employee(string initFirstName, string initLastName, int initSalary);
  void setFirstName( string );		// function for set first name
  string getFirstName();			// function for get first name
  void setLastName( string );		// function for set last name
  string getLastName();				// function for get last name
  void setSalary( int );			// function for set salary
  int getSalary();					// function for get salary
 
private:
  string firstName;
  string lastName;
  int salary;
};