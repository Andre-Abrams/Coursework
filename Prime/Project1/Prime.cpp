#include <iostream>
#include <thread>
using namespace std;

void primeNumbers( int num, int prime )
{
	cout << "The prime numbers equal to or below " << num << " are: " << endl;

	for ( int i = 1; i <= num; i++ )
	{
		prime = 0;
		for ( int j = 2; j <= i / 2; j++ )
		{
			if (i % j == 0)
			{
				prime++;
				break;
			}
		}
		if (prime == 0 && i != 1)
			cout << i << endl;
	}
}

int main()
{
	int num;
	int prime = 0;


	cout << "Enter a positive integer: ";
	cin >> num;

	std::thread primeN( primeNumbers, num, prime );
	primeN.join();

	system("pause");
	return 0;
}