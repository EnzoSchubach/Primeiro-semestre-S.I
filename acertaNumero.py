import random

# generates a random number that the user has to guess
number = random.randint(1, 100)
guess = input('Insert your guess: ')
guess_int =  int(guess)
while (guess_int != number):
    if guess_int > number:
        print(f"Wrong!!\nThe number is lower than {guess_int}")
    else:
        print(f"Wrong!!\nThe number is higher than {guess_int}")
    guess = input("Try again, insert your guess: ")
    guess_int = int(guess)
print('Congratulations!! You won "Try to guess the number3000omg"')
    
