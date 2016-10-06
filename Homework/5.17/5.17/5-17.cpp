//Andre Abrams, 4/25/2015
//Homework 5.17
//Random Number Chooser

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
    srand( time( 0 ));
 
	//Part A
    cout << "Random number from set A ( 2, 4, 6, 8, 10 ): " << (rand() % 5 + 1) * 2 << endl;

	//Part B
    cout << "Random number from set B ( 3, 5, 7, 9, 11 ): " << (rand() % 5 + 1) * 2 + 1 << endl;

	//Part C
    cout << "Random number from set C ( 6, 10, 14, 18, 22 ): " << ((rand() % 5 + 1) * 2 + 1) * 2 << endl;
 
	system("pause");
    return 0;
}
