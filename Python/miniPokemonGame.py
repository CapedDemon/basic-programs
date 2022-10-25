from random import randint

map = [
    ["A","A","A","A","A", "" ,"" ,"A","A","A","A","A"],
    ["A","","","" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"A"],
    ["A","" ,"" ,"" ,"A","" ,"" ,"" ,"" ,"" ,"" ,"A"],
    ["A","E","E","E","A","E","E","E","G","G","G","A"],
    ["A","" ,"" ,"" ,"A","G","G","G","G","G","G","A"],
    ["A","E","E","E","A","G","G","G","G","G","G","A"],
    ["A","" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"A"],
    ["A","" ,"" ,"" ,"" ,"" ,"" ,"" ,"G","G","G","A"],
    ["A","A","E","E","E","A","A","A","G","G","G","A"],
    ["A","" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"A"],
    ["A","E","" ,"E","E","" ,"E","E","E","E","E","A"],
    ["A","" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"A"],
    ["A","" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" , "A"],
    ["A","A","A","A","A","A","G","G","G","E","E","A"],
    ["A","" ,"" ,"" ,"" ,"" ,"G","G","G","" ,"" ,"A"],
    ["A","" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"" ,"A"],
    ["A","E","E","" ,"" ,"E","E","E","E","E","E","A"],
    ["A","" ,"G","G","G","G","" ,"" ,"G","G","G","A"],
    ["A","G","G","G","" ,"" ,"" ,"G","G","" ,"" ,"A"],
    ["A","A","A","A","A","A","G","A","A","A","A","A"]
        ]

position = [19, 6]
pokedex = []
pokemons = ["Ratata", "Pidgey", "Weedle", "Caterpie","Paras", "Charmander", "Buldasaur", "Squirtle", "Pikachu", "Evee"]

def random(valor):
    return randint(0,valor)

def collision():
    print("\nBump!\n")

def wildPokemon():
    print("\nUm wild pokemon has appeared!")
    e = checkEntry([1, 2], int(input("Capture or Run? [1-Capture or 2-Run]\n")))
    if (e == 1):
        newPokemon()
        currentPosition()
    else:
        print("Fujão")
        currentPosition()

def newPokemon():
    pokemon = pokemons[random(9)]

    for i in range(len(pokedex)):
        if (pokedex[i]["Name"] == pokemon):
            print("There is already a record of a pokemon of the same species, nothing new will be saved")
            return False

    status = {
        "Name": pokemon,
        "HP": random(100),
        "Atk": random(100),
        "Def": random(100),
        "Sp. Def": random(100),
        "Speed": random(100)
    }

    pokedex.append(status)
    print(f"{status['Name']} captured!")
    print("New pokemon registrar!")
    
def menu():
    print("Welcome!\nAt any time you can choose one of the options")
    print(" 9 - To open this menu\n 8 - Up\n 2 - Down\n 4 - Go left")
    print(" 6 - Go Right\n 5 - Open Pokedex\n 0 - Quit Game")
    print("Your goal is to capture all types of pokemons available.")

def menuPokedex():
    while True:
        print("\nType\n1 to List Details\n2 to Delete Record\n0 to return to main menu")
        e = checkEntry([1, 2, 0], int(input("Choose an action:\n")))
        if (e == 1):
            listDetails()
        elif (e == 2):
            eraseRecord()
        elif (e == 0):
            break

def listDetails():
    for i in range(len(pokedex)):
        print(pokedex[i])

def eraseRecord():
    print("\nChoose which pokemon should be deleted from the registry: [0 to cancel action]")
    n = []
    for i in range(len(pokedex)):
        print(f"{i}", pokedex[i]["Name"])
        n.append(i)
    e = checkEntry(n, int(input()))
    pokemonRemove = pokedex.pop(e)["Name"]
    print(f"The pokemon {pokemonRemove} has been removed from the pokedex!")

def currentPosition():
    print("\nCurrent position:")
    column = position[0]
    line = position[1]
    print(f"column {column},  line {line}")

def printMap(map):
    print(" ", *range(0,12))
    i = 0
    
    for line in map:
        if i <= 9: print(i, end="  ")
        else:
            print(i, end=" ")
        for hause in line:
            if (hause == ""): print(" ", end=" ")
            else:
                print(hause, end=" ")
        print()
        i += 1

def route():
    print(f"Entering Route 1")

def checkGrass():
    if (map[position[0]][position[1]] == "G"):
        if (random(1) == 0):
             wildPokemon()

def checkVictory():
    if (len(pokedex) == 10):
        print("Congratulations! You have completed the pokedex.")
        exit()

def gameOver():
    print("End of the game")
    exit()

def Movement(movi):
    if (movi == "ride up"):
        if (position[0]-1 < 0):
            gameOver()
        else:
            l = map[position[0]-1][position[1]]
            if (l == "G"):
                position[0] = position[0] - 1
            elif (l == ""):
                position[0] = position[0] - 1
            elif (l == "A"):
                collision()
            elif (l == "E"):
                collision()
    elif (movi == "come down"):
        if (position[0]+1 > 19):
            gameOver()
        else:
            l = map[position[0]+1][position[1]]
            if (l == "G"):
                position[0] = position[0] + 1
            elif (l == ""):
                position[0] = position[0] + 1
            elif (l == "A"):
                collision()
            elif (l == "E"):
                position[0] = position[0] + 1
    elif (movi == "go left"):
        l = map[position[0]][position[1]-1]
        if (l == "G"):
            position[1] = position[1] - 1
            print("Grass")
        elif (l == ""):
            position[1] = position[1] - 1
        elif (l == "A"):
            collision()
        elif (l == "E"):
            collision()
    elif (movi == "go right"):
        l = map[position[0]][position[1]+1]
        if (l == "G"):
            position[1] = position[1] + 1
            print("Grass")
        elif (l == ""):
            position[1] = position[1] + 1
        elif (l == "A"):
            collision()
        elif (l == "E"):
            collision()

def checkEntry(validValues, check):
    while check not in validValues:
        check = int(input('Invalid Input. \nPlease enter a valid entry!\n'))
        currentPosition()
    return check

printMap(map)
print()
menu()
route()
currentPosition()

while True:
    checkGrass()
    checkVictory()
    R = checkEntry([9, 8, 2, 4, 6, 5, 0], int(input("")))
    if (R == 9):
        menu()
    elif (R == 8):
        Movement("ride up")
        currentPosition()
    elif (R == 2):
        Movement("come down")
        currentPosition()
    elif (R == 4):
        Movement("go left")
        currentPosition()
    elif (R == 6):
        Movement("go right")
        currentPosition()
    elif (R == 5):
        menuPokedex()
    elif (R == 0):
        break