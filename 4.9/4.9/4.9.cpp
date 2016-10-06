//Andre Abrams, 4/5/2015
//Homework 4.9
//Product Calculator

#include <iostream>
using namespace std;

int main()
{
	int product = 1;
	int i = 1;

	do
	{
		product = product * i; 
		i += 2;
		cout << "Product= " << product << endl; 
	}while(i <= 15);

	system("pause");

	return 0;
}