#include<iostream>
#include<fstream>
#include<string>

using namespace std;
char unshift_book(char, int);

int main()
{
	int k;

	cout << "Enter the key value: ";
	cin >> k;

	ifstream text;
	text.open("moreauencrypt.txt", ios::in);
	string line;

	if (text.is_open())
	{
		while (getline(text, line))
		{
			
			for (int x = 0; x < line.length(); x++)
			{
				cout << unshift_book(line[x], k);
			}
			
			cout << endl;
		}
	}

	text.close();

	system("pause");
	return 0;
}

char unshift_book(char c, int k)
{
	if (isalpha(c))
	{
		c = (((c + 65) - k) % 26) + 65;		// Uses ascii value to shift letters
	}

	return c;
}