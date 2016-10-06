//Andre Abrams, 4/25/2015
//Even-Odd Finder

#include<iostream>
using namespace std;

bool even(int n);

bool even(int n)
{
	if(n % 2 == 0)
		return true;
	else
		return false;
}


int main()
{
	int n;
	while(true)
	{
		cout << "Enter a number: ";
		cin >> n;
		if(even(n))
			cout << n << " is even" << endl;	
		else
			cout << n << " is odd" << endl;
	}
}