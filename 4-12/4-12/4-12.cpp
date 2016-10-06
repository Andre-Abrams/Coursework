//Andre Abrams, 4/5/2015
//Homework 4.12
//Pattern Drawer

# include<iostream>
using namespace std;
int main()
{
//Part A
	for ( int i = 1 ; i <= 10 ; i ++)
	{ 
		for ( int j = 1 ; j <= 10 ; j++)
		{
			if( j > i) 
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
//Part B
	for ( int i = 1 ; i <= 10 ; i ++)
	{ 
		for ( int j = 1 ; j <= 10 ; j++)
		{
			if( j >= 12-i) 
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
//Part C
	for ( int i = 1 ; i <= 10 ; i ++)
	{ 
		for ( int j = 1 ; j <= 10 ; j++)
		{
			if( j < i) 
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
//Part D		
	for ( int i = 1 ; i <= 10 ; i ++)
	{ 
		for ( int j = 1 ; j <= 10 ; j++)
		{
			if( j <= 10-i) 
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0 ;
}
