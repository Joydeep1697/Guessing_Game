import random
import time

print("Welcome to the guessing game.")
time.sleep(1)
print("Guess a number between 1 and 100.")
time.sleep(1)

guess = int(input("Please pick a Number: "))
correct_number = random.randint(1,100)
guess_count = 1

while guess != correct_number:
    time.sleep(1)
    guess_count += 1
    if guess<correct_number:
        guess = int(input("WRONG...!!! You need to guess Higher. Please pick a Number: "))
    else:
        guess = int(input("WRONG...!!! You need to guess Lower. Please pick a Number: "))
        
        
print(f"CONGRATULATIONS..!! You have guessed the Correct Number {correct_number}. It took you {guess_count} guesses.")