//Andre Abrams, 3/20/2015
//Homework Exercise 2
//Class Average Calculator

#include <iostream>
using namespace std;

int main()
{
	int total;
	int gradeCounter;
	int grade;
	int average;

	total = 0;
	gradeCounter = 1;

	while(gradeCounter <= 20)
	{
		cout << "Enter grade: ";
		cin >> grade;
		total = total + grade;
		gradeCounter = gradeCounter + 1;
	}

	average = total / 20;

	cout << "\nTotal of all 20 grades is " << total << endl;
	cout << "Class average is " << average << endl;

	system("pause");

	return 0;
}