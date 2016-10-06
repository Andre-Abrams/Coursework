//Andre Abrams, 4/25/2015
//Homework 5.18
//Exponentiation Program

#include < iostream>
using namespace std;

int integerPower( int base, int exponent)
{
    int result = 1;
    while( exponent > 0)
    {
        result *= base;
        exponent--;
    }
    return result;
} 
int main()
{
	int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result: " << integerPower(base, exponent) << endl;
 
	system("pause");
    return 0;
}
 
