//Andre Abrams, 7/9/2015
//Project 1
//Tortoise and Hare Program

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int FINISH_LINE = 70;

void moveTortoise(int * );				//Tortoise movement function prototype
void moveHare(int * );				//Hare movement function prototype
void printPositions(int *, int *); 

int main()
{
   int tortoise = 1; 
   int hare = 1;
   int timer = 0;

   srand( time( 0 ) );

   cout << "ON YOUR MARK.... GET SET....\nBANG               !!!!"
        << "\nAND THEY'RE OFF    !!!!\n";
   
   // Controls the race
   while ( tortoise != FINISH_LINE && hare != FINISH_LINE ) 
   {
        moveTortoise(&tortoise);
		moveHare(&hare);
		printPositions(&tortoise, &hare);    
        ++timer;

   } // End of while loop

   // Determines who wins the race
   if ( tortoise >= hare )
      cout << "\nTORTOISE WINS!!! YAY!!!\n";

   else
      cout << "Hare wins. Yuch.\n";

   cout << "TIME ELAPSED = " << timer << " seconds" << endl;

   system( "pause" );
   return 0;

} // End of main function

// Tortoise movement
void moveTortoise( int *tortoisePtr )
{
   int x = 1 + rand() % 10;

   // Determines which move to make
   if ( x >= 1 && x <= 5 )        // Fast plod
      *tortoisePtr += 3;

   else if ( x == 6 || x == 7 )   // Slip
      *tortoisePtr -= 6;

   else                           // Slow plod
      ++( *tortoisePtr );
   
   // Makes sure that tortoise stays within race range(incase of win or slip before leaving the starting line)
   if ( *tortoisePtr < 1 )
      *tortoisePtr = 1;

   else if ( *tortoisePtr > FINISH_LINE )
      *tortoisePtr = FINISH_LINE;

} // End of function moveTortoise

// Hare movement
void moveHare(int *harePtr )
{
   int y = 1 + rand() % 10;

   if ( y == 1 || y == 2 )		 // Sleep  
		*harePtr += 0;
   else if ( y == 3 || y == 4 ) // Big hop  
		*harePtr += 9; 

	else if (y == 5)		    // Big slip
		*harePtr -= 12;

	else if (y >= 6 && y <= 8)  // Small hop
		*harePtr += 1;

	else if (y == 9 || y == 10) // Small slip
		*harePtr -= 2;

	else                          
		++( *harePtr );   

	// Makes sure that hare stays within race range(incase of win or slip before leaving the starting line)
	if ( *harePtr < 1 ) 
		*harePtr = 1; 

	else if ( *harePtr > FINISH_LINE ) 
		*harePtr = FINISH_LINE; 

} // End of function moveHare

// Outputs positions of animals
void printPositions(int *harePtr,int *tortoisePtr)
{
   if ( *harePtr == *tortoisePtr ) 
      cout << setw( *harePtr ) << "OUCH!!!";

   else if ( *harePtr < *tortoisePtr ) 
      cout << setw( *harePtr ) << "H" 
           << setw( *tortoisePtr - *harePtr ) << "T";

   else
      cout << setw( *tortoisePtr ) << "T" 
           << setw( *harePtr - *tortoisePtr ) << "H";

   cout << "\n";

} // End of function printPositions
