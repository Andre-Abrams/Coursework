//Andre Abrams, 7/9/2015
//Project 1
//Tortoise and Hare Program

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int RACE_END = 75;

void moveT(int & );				//Tortoise movement function prototype
void moveH(int & );				//Hare movement function prototype
void PrintPosition(int &, int &); 

int main()
{
	int tortoise = 1;
	int hare = 1;
	int timer;

	srand(time(0));

	cout << "3...2...1....\n GO!!!\n";
	
	while (tortoise != RACE_END && hare != RACE_END)	//Controls the race
	{
		moveT(tortoise);
		moveH(hare);
		PrintPosition(tortoise, hare);
		++timer;
	}

	if(tortoise >= hare)			//Determines the winner
		cout << "\nTHE TORTOISE WINS!!!!\n";
	else
		cout << "\nTHE HARE WINS!!!!\n";
	
	cout << "That race took " << timer << "seconds" << endl;

	return 0;			//End of main function
}
	