#include <iostream>
#include <cmath>
using namespace std;
// compositePrimes.cpp--A program that, given a positive whole integer,
// 	will return a list of all the primes that comprise it, including the
// 	number of times they are found in said composite value (i.e. their
// 	exponent).

int compositeNum = 0;
int primeFactor = 2;
int primeExponent = 0;
float sqrtOfNum = 0.0;
int *compositePrimes = [];
int index = 0;

cout << "Welcome to Composite Primes v1.0!" << endl;
cout << "Written by Sean B. Higgins" << endl;
cout << "This program, when given a positive whole integer greater than 1," << endl;
cout << "returns a list of all the composite primes that conprise said number," << endl;
cout << "as well as the number of times the composite primes are found in said" << endl;
cout << "composite number (i.e. the composite primes' exponents)." << endl;
cout << endl;

int main()
{
	// This section of code asks the user to provide a valid input to be evaluated
	while (compositeNum == 0)
	{
		cout << "Please enter a positive integer greater than 1: ";
		cin >> compositeNum;

		if (compositeNum < 2)
		{
			cout << "Sorry, this value is invalid. Try again." << endl << endl;
			compositeNum = 0;
		}
	}

	// And this section of code evaluates the composite number and all of its composite primes.
	sqrtOfNum = sqrt(compositeNum);

	while (primeFactor <= sqrtOfNum)
	{
		// If the prime goes into the composite number...
		if (compositeNum % primeFactor == 0)
		{
			compositeNum /= primeFactor;	// Factor out the prime,
			primeExponent++;		// update the number of times the prime was found in the num,
			sqrtOfNumber = sqrt(compositeNum);	// and update the end condition to be more precise.
		}
		// If the prime is not found in the composit number...
		else
		{
			// But it had been found at least once before...
			if (primeExponent > 0)
			{
				compositePrimes[index]=primeFactor;	// Then save that composite prime,
				compositePrimes[index+1]=primeExponent;	// as well as the number of times the prime was found,
				index += 2;	// And update the index for the next prime/exponent pair.
			}
			// Either way...
			primeFactor++;	// Increment the prime factor,
			primeExponent=0;	// And prepare to tally the number of times it turns up.
		}
	}
	
	// And if the user provided value was, in fact, a prime...
	if (index == 0)
	{
		// Then simply report it as a prime.
		compositePrimes[0]=1;
		compositePrimes[1]=1;
		compositePrimes[2]=compositeNum;
		compositePrimes[3]=1;
		index = 3;	// For use in the display loop
	}

	cout << "Evaluation complete. The composite values are:" << endl;
	for (int i=0; i < index; i += 2)
		cout << "Value " + compositePrimes[i] + " with exponent " + compositePrimes[i+1] << endl;
	
	cout << "Thank you for using this program. Goodbye!" << endl;

	return 0;
}
