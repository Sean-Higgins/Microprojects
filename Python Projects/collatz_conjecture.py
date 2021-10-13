# Program Name:		Collatz Conjecture Program
# Program Purpose:	To calculate the numbers following a user defined
#			input according to the following rules:
#				Rule 1: If the number is even divide by 2 (n/2).
#				Rule 2: If the number is odd, multiply by three
#                                       and add 1 (3n+1).
# Programmer:		Sean B. Higgins
# Date:			February 26, 2017

def collatzConjecture(number):
        
	stepCounter = 0

	print("Initial Number:", end=' ')
	print(number)

	while number > 1:

		if number % 2 == 0:
			number = number / 2
		else:
			number = 3 * number + 1

		stepCounter = stepCounter + 1

		print("Step #", end='')
		print(stepCounter, end=": ")
		print(number)

	print("Total Number of Steps:", end=' ')
	print(stepCounter)

print("Welcome to the Collatz Conjecture Calculator!")

repeater = 'Y'
userInput = 0

while repeater.upper() == 'Y':
        userInput = input("Please enter the number you wish to calculate: ")
        collatzConjecture(int(userInput))
        repeater = input("Would you like to calculate another number? (Y/N): ")
