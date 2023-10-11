import random
def main ():
    choiceList = [1, 2, 3]
    computer = random.choice(choiceList)

    again = 1

    while again == 1:
        player = getInput()
        showWinner(computer, player)
        again = int(input("Would you like to play again? (1 for yes, 0 for No) "))
        choiceList = [1, 2, 3]
        computer = random.choice(choiceList)

#get player input
def getInput():
    inputAnswer = input("Enter rock, paper, or scissors ")
    playerChoice = inputAnswer.lower()

    while playerChoice != "rock" and playerChoice != "paper" and playerChoice != "scissors":
        inputAnswer = input("Enter rock, paper, or scissors ")
        playerChoice = inputAnswer.lower()
    if playerChoice == "rock":
        player = 1
    elif playerChoice == "paper":
        player = 2
    elif playerChoice == "scissors":
        player = 3
    return  player

#who will win
def whoWon (computer, player):
    if computer == player:
        result = 0
    elif computer == 1:        #computer chooses rock
        if player == 2:        #player chooses paper
            result = 2         #player won
        elif player == 3:      #player chooses scissors
            result = 1         #computer won
    elif computer == 2:
        if player == 1:
            result = 1
        elif player == 3:
            result = 2
    elif computer == 3:
        if player == 1:
            result = 2
        elif player == 2:
            result = 1
    return result

def computerChoice(computer):
    if computer == 1:
        computerChoice = "rock"
    elif computer== 2:
        computerChoice= "paper"
    elif computer == 3:
        computerChoice = "scissors"

    return  computerChoice
def showWinner(computer, player):
    print("Computer chose: ", computerChoice(computer))
    result = whoWon(computer, player)

    if result == 0:
        print("It is a tie")
    elif result == 1:
        print("The computer wins")
    elif result == 2:
        print("The player wins")


main()
