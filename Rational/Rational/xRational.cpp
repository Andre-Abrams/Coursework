// Andre Abrams, 8/4/2015
// Project 2
// Rational program

// Hidden cpp file

#include <iostream>
#include "Rational.h"
using namespace std;

Rational::Rational ( int num, int den )		// assigns value to both num/den
{
numerator = num;
denominator = den;
}

Rational::~Rational()	// destructor
{
}

void Rational::setNumerator( int x )	// sets the numerator
{
numerator = x;
}

int Rational::getNumerator()	// gets the numerator
{
return numerator;
}

void Rational::setDenominator ( int x )		// sets denominator
{
denominator = x;
}

int Rational::getDenominator()		// gets denominator
{
return denominator;
}

void Rational::printResults()	// prints results
{
cout<<numerator<<'/'<<denominator<<endl;
}

Rational Rational::operator + ( Rational param )	// overloads +
{
int d = 0;		// common denominator
int x = 0;		// GCD

Rational sum;

d = denominator * param.denominator;		// common denominator
numerator = numerator * param.denominator;		// num*param den
param.numerator = param.numerator * denominator;// param num* den
sum.denominator = d;		// assign common denominator to denominator
sum.numerator = param.numerator + numerator;	// adds both numerators
x = sum.reduced();	// GCD
sum.numerator = sum.getNumerator() / x;		// reduces the numerator
sum.denominator = sum.getDenominator() / x;		// reduces the denominator

return( sum );		// copies values to empty class on main
}

Rational Rational::operator - ( Rational param )
{
int d = 0;	// common denominator
int r = 0;	// GCD
Rational sub;
d = denominator * param.denominator;
numerator = numerator * param.denominator;		// multiply n*param.n
param.numerator = param.numerator * denominator;	// multiply param n*n
sub.denominator = d;		// makes the denominator the same
sub.numerator = numerator - param.numerator;	// subtracts both numerato values
r = sub.reduced();	// GCD
sub.denominator = sub.getDenominator() / r;		// reduces the values
sub.numerator = sub.getNumerator() / r;		// reduces the values

return(sub);	// copies sum to the empty class on main
}

Rational Rational::operator * ( Rational param )
{
Rational pro;		//used to store values
pro.denominator = denominator * param.denominator;		// den*param den
pro.numerator = numerator * param.numerator;		// num * param num
int d = 0;
d = pro.reduced();	// GCD
pro.denominator = pro.getDenominator() / d;	// reduces
pro.numerator = pro.getNumerator()/d;		// reduces

return( pro );		// copies values to empty class on main
}

Rational Rational::operator / ( Rational param )
{

Rational div;
div.denominator = denominator * param.numerator;		// multiply den * param num
div.numerator = numerator * param.denominator;		// multiply num*param den
int red = div.reduced();	// finds GCD
div.denominator = div.getDenominator() / red;	// reduces den
div.numerator = div.getNumerator() / red;	// reduces num

return( div );
}

int Rational::GCD ( int num, int den )		// finds the GCD
{

if( den == 0 )
return num;
else

return GCD( den, num % den );
}

int Rational::reduced()		// calls GCD
{

return GCD( getNumerator(), getDenominator() );

}