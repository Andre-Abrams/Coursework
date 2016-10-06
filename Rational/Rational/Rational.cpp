// Andre Abrams, 8/4/2015
// Project 2
// Rational program

// Main file

#include <iostream>
#include <iomanip>
#include "Rational.h"
using namespace std;

int main()
{
Rational sum1 ( 4, 6 );	// fraction 1
Rational sum2 ( 2, 8 );	// fraction 2
Rational sum;
sum  = sum1 + sum2;
sum.printResults();


Rational pro1 ( 4, 6 );	// fraction 1
Rational pro2 ( 2, 8 );	// fraction 2
Rational pro;
pro = pro1 * pro2;
pro.printResults();

Rational sub1( 4, 6 );		// fraction 1
Rational sub2( 2 / 8 );		// fraction 2
Rational sub;
sub = sub1 - sub2;
sub.printResults();

Rational div1 ( 4, 6 );	// fraction 1
Rational div2 ( 2, 8 );	// fraction 2
Rational div;
div = div1 / div2;
div.printResults();

system("pause");
return 0;
}