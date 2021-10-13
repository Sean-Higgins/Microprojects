/*
	Program Nane:		Collatz Conjecture Program
	Program Purpose:	To calculate the numbers following a user defined input according to the following rules:
							Rule 1: If the number is even, divide by 2 (n/2).
							Rule 2: If the number is odd, multiply by three and add 1 (3n+1).
	Programmer:			Sean B. Higgins
	Date:				August 8, 2016
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void collatzConjecture(unsigned long);

int main()
{
	unsigned long userInput;
	ofstream results;

	results.open("Results.txt", ios::out);

	cout << "Welcome to the Collatz Conjecture Calculator!" << endl;

	if (results.fail())
	{
		cout << "We're sorry, but the file cannot be opened. Please try again." << endl;
	}
	else
	{
		cout << "Please enter the number you wish to calculate: ";
		cin >> userInput;

		collatzConjecture(userInput);
	}

	return 0;
}

void collatzConjecture(unsigned long number)
{
	int stepCounter = 0;

	cout << "Initial Number:" << setw(10) << number << endl;
	while (number > 1)
	{
		if (number % 2 == 0)
		{
			number = number / 2;
		}
		else
		{
			number = 3 * number + 1;
		}
		cout << "Step #" << ++stepCounter << ":" << setw(17) << number << endl;
	}
	cout << "Total Number of Steps: " << stepCounter << endl;
}