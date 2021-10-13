# Program Name:          Fibonacci Sequencer
# Program Purpose:       To calculate the numbers of the Fibonacci sequence
#                        up to, and if possible, including, a user defined input.
# Programmer:            Sean B. Higgins
# Date:                  February 26, 2017

print("Welcome to the Fibonacci Sequencer v1.0")

# This part is under refinement
def dataChecker(userData):
     userInt = 0
     try:
          int(userData, base=10)
     except TypeError:
          print("When I said upper value, I meant a number.")
          print("Please get it right next time.")
     userInt = int(userData, base=10)
     return userInt

def fib(n):
     a = 0
     b = 1
     temp = 0
     while a <= n:
         print(a, end=' ')
         temp = a
         a = b
         b = temp+a
     print()

repeater = 'Y'

while repeater.upper() == 'Y':
     userNum = input("Please enter an upper value for the sequence: ")
     print()
     fib(dataChecker(userNum))
     print()
     repeater = input("Would you like to run the program again? (Y/N): ")
