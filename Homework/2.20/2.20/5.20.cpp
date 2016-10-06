//Andre Abrams, 4/25/2015
//Homework 2.20
//Multiples Program

#include < iostream>
using namespace std;

bool multiple( int x, int y)
{
	if( y % x == 0 )
		return true;
	else
		return false;
} 
int main()
{
	int x, y;

	
	while(true)
	{
		cout << "Enter two integers: ";
		cin >> x >> y;
		
		if(multiple(x , y))
			cout << y << " is a multiple of " << x << endl << endl;
		else
			cout << y << " is not a multiple of " << x << endl << endl;
	}

	system("pause");
    return 0;
}
 
