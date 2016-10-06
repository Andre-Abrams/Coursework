#include <iostream>
#include "Date.h" 

using namespace std;

MyDate::MyDate( int month, int day, int year )	// initialization with constructor
{
  if( month < 1 || month > 12 )
  {
    setMonth(1);
    cout << "Month set as 1" << endl;
  }
  else
  setMonth( month );
  setDay( day );
  setYear( year );
}
 
int MyDate::getDay()			// function for get day
{
  return day;
}
 
int MyDate::getMonth()			// function for get month
{
  return month;
}
 
int MyDate::getYear()			// function for get year
{
  return year;
}
 
void MyDate::setDay( int d )	// function for set day
{
  day = d;
}
 
void MyDate::setMonth( int m )	// function for set month
{
  month = m;
}
 
void MyDate::setYear( int y )	// function for set year	
{
  year = y;
}
 
void MyDate::displayDate()		// function for display date
{
  cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
 
void MyDate::guessBirthday( int res )	// function for guess birthday
{
  int x;
  x = res - 250;
  setDay( x / 100 );
  setMonth( x % 100 );
  cout << "Your birthday: Month: " << getMonth() << " Day: " << getDay() << endl;
}