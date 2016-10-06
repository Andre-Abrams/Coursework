// Andre Abrams, 8/4/2015
// Project 2
// Rational program

// Header file

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
Rational( int = 0, int = 1 );	// initializes private members
~Rational();	// destructor
void setNumerator( int );	// sets the Numerator
int getNumerator();		// gets the value of Numerator
void setDenominator( int );	// Sets the Denominator
int getDenominator();	// gets the value of the Denominator
Rational operator + ( Rational );	// overloads +
Rational operator - ( Rational );	// overloads -
Rational operator * ( Rational );	// overloads *
Rational operator / ( Rational );	// overloads /
void printResults();	// prints out the value
int GCD ( int, int );	// finds the greatest common divisor


private:
int reduced();		// calls GCD

int numerator;		// Private member
int denominator;	// Private member
};
#endif