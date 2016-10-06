#include<iostream>
#include<fstream>
#include<string>

using namespace std;
char shift_book(char, int);

int main()
{
	int k;

	cout << "Enter the key value: ";
	cin >> k;

	ifstream text;
	text.open("moreaustrip.txt", ios::in);
	string line;

	ofstream encrypted;
	encrypted.open("moreauencrypt.txt");

	if (text.is_open())
	{
		while (getline(text, line))
		{
			cout << line << endl << endl;

			for (int x = 0; x < line.length(); x++)
			{
				encrypted << shift_book(line[x], k);
			}
			cout << endl;
		}
	}

	text.close();
	encrypted.close();

	system("pause");
	return 0;
}

char shift_book(char c, int k)
{
	if (isalpha(c))
	{
		c = toupper(c); 
		c = (((c - 65) + k) % 26) + 65;		// Uses ascii value to shift letters
	}
	
	return c;
}
