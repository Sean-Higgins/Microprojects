/*
 * FizzBuzz.cpp
 *
 * A C++ program to demonstrate a classic programming problem, FizzBuzz!
 *
 * The rules of FizzBuzz:
 * For the numbers from 1 to 100, print out the words Fizz, Buzz, and FizzBuzz based on the following rules:
 * If a number is divisible by 3, print out the word Fizz.
 * If a number is divisible by 5, print out the word Buzz.
 * If a number is divisible by both 3 and 5 (i.e. 15), print out both Fizz and Buzz (i.e. FizzBuzz).
 */

#include <iostream>
using namespace std;

void fizzBuzz();

int main() {

	cout << "Welcome to FizzBuzz!" << endl << endl;

	cout << "A classic programming problem! Here are the rules:" << endl;
	cout << "For the numbers from 1 to 100, print out either the numbers, or the words Fizz, Buzz, or FizzBuzz" << endl;
	cout << "based on the following rules:" << endl << endl;

	cout << "If a number is divisible by 3, print out the word \"Fizz\"." << endl;
	cout << "If a number is divisible by 5, print out the word \"Buzz\"." << endl;
	cout << "If a number is divisible by both 3 and 5 (i.e., divisible by 15), print out both" << endl;
	cout << "	Fizz and Buss (i.e., FizzBuzz)." << endl;
	cout << "If a number is not divisible by either 3 or 5, then just print the number." << endl << endl;

	fizzBuzz();

	return 0;
}

void fizzBuzz() {

	for (int i = 1; i < 101; i++) {
		if (i % 15 == 0)	// If i is evenly divisible by both 3 and 5, print FizzBuzz
			cout << "FizzBuzz";
		else if (i % 3 == 0)		// If i is evenly divisible by 3, print Fizz
			cout << "Fizz";
		else if (i % 5 == 0)	// If i is evenly divisible by 5, print Buzz
			cout << "Buzz";
		else			// If i is NOT evenly divisible by either 3 or 5, just print i.
			cout << i;

		cout << endl;		// Make sure we go to a new line
	}
}
