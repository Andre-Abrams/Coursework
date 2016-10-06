#include <iostream>
#include <cstdlib>
#include "Date.h"
 
using namespace std;
 
int main()
{
  
  MyDate xDate( 9, 25, 2012 );	// create Date class object
 
  
  xDate.displayDate();			// display initial date
 
  // test program that demonstrates class Date’s capabilities
  cout << "I can guess your birthday.\n"
       << "Please complete following steps and enter final number.\n"
       << "1. Multiply the DAY of the month in which you were born by 2.\n"
       << "2. Add 5 to that number.\n"
       << "3. Multiply that number by 50.\n"
       << "4. Add the number that represents the month\n(1-January, 2-February etc) to new number.\n"
       << "5. Enter the result: ";
  int result;
  cin >> result;
  xDate.guessBirthday( result );
 
  char a;
  cin >> a;
 
  system( "pause" );
  return 0;
}