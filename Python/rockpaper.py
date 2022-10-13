import random

#initialises the variables
user_wins = 0
computer_wins = 0

#choices for the user
options = ["rock", "paper", "scissor"]

#loop begins here
while True:
    user_input = input("Type Rock/Paper/Scissor or Q to quit: ").lower()

    if user_input == 'q':
        break

    if user_input not in options:
        print("Invalid Input")
        continue

    random_number = random.randint(0, 2)
    computer_input = options[random_number]
    print(f"Computer picked {computer_input}. ")

    # rock=0 paper=1 scissor=2
    if user_input == "rock" and computer_input == "scissor":
        user_wins += 1
        print("You've won \t", "[ C =", computer_wins,
              "/", "U =", user_wins, "]\n")
    elif user_input == "paper" and computer_input == "rock":
        user_wins += 1
        print("You've won \t", "[ C =", computer_wins,
              "/", "U =", user_wins, "]\n")

    elif user_input == "scissor" and computer_input == "paper":
        user_wins += 1
        print("You've won \t", "[ C =", computer_wins,
              "/", "U =", user_wins, "]\n")
        user_wins += 1
    elif user_input == computer_input:
        print("Its a draw \t", "[ C =", computer_wins,
              "/", "U =", user_wins, "]\n")
    else:
        computer_wins += 1
        print("You've lost \t",
              "[ C =", computer_wins, "/", "U =", user_wins, "]\n")


print(f"You've won {user_wins} times.")
print(f"Computer won {computer_wins} times.")

input()
