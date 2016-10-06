#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream text;
	text.open("dracstrip.txt", ios::in);
	string line;

	if (text.is_open())
	{
		float freq[26] = { 0.0 };
		float book_length = 0.0;
		float sum = 0.0;

		getline(text, line);

		for (unsigned i = 0; i < line.length(); i++)
		{
			freq[line[i] - 'a']++;
			book_length++;
		}

		cout << "Char\t\tFreq\t\tPercentage" << endl << endl;

		for (int i = 0; i < 26; i++)
		{
			cout << char(i + 97) << "\t|" << "\t" << freq[i] << "\t|"
				<< "\t" << freq[i] / book_length << endl;
		}

		for (int i = 0; i < 26; i++)
		{
			sum += (freq[i] / book_length * freq[i] / book_length);
		}

		cout << endl << "Sum of squares: \t" << sum << endl << endl;
		text.close();
	}
	else
		cout << "Error." << endl;

	system("pause");
	return 0;
}