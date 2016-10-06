#include <iostream>
#include <cstdlib>
 
class MyDate
{
public:
  MyDate( int, int, int );
  
  int getDay();					// function for get day
  void setDay( int );			// function for set day
  int getMonth();				// function for get month
  void setMonth( int );			// function for set month
   int getYear();				// function for get year
  void setYear( int );			// function for set year	
  void displayDate();			// function for display date
  void guessBirthday( int );	// function for guess birthday
private:
  int day;
  int month;
  int year;
};