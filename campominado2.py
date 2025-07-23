import numpy as np
import os
import random

#creating the matrices for the board and mines
mat = np.full([21,21],'[ ] ')
mines = np.full ([21,21],'[ ] ')
#setting the mines position using random
for i in range (39):
    rng1 = random.randint(1,20)
    rng2 = random.randint(1,20)
    while (mines[rng1][rng2] == '[X]'):
        #in case the random position already has been selected
        rng1 = random.randint(1,20)
        rng2 = random.randint(1,20)
    mines[rng1][rng2] = '[X]'
#puts the numbers for rows and columns in mat
for i in range(21):
    mat[0][i] = f'[{i}] '
    if (i < 10):
        mat[i][0] = f' [{i}]'
    else:
        mat[i][0] = f'[{i}]'

#prints the matrice
def print_mat(mat):
    os.system("clear")
    for i in range(21):
        for j in range(21):
            print(f"{mat[i][j]}", end=' ')
        print(" ")
    return mat

#function to let the player choose the position and check if there is a bomb
def selec_pos(mat, mines):
    print_mat(mat)
    #asks for the row and column
    row = float(input("Select the row (1-20): "))
    column = float(input("Select the column(1-20): "))
    #checks if the position is valid (non decimal, between 1 and 20)
    while ((1 > row ) or (row > 20) or (row != int(row)) or (1 > column) or (column > 20) or (column != int(column))):
        #asks again for the position
        row = float(input("Invalid position!\nSelect the row (1-20): "))
        column = float(input("Select the column(1-20): "))
    #sends the value of row and column to another two variable with type int
    ro = int(row)
    co = int(column)
    #checks if the player choose a position with a bomb
    if mines[ro][co] == '[X]':
        mat[ro][co] = '[X] '
        print_mat(mat)
        print("You choose a position with a bomb, you lost BombaBill3000")
        #ends the game
        exit()
    return ro, co

def check_bombs(mat, mines, ro, co, visited=None):
    if visited is None:
        visited = set()
    
    if (ro, co) in visited:
        return
    visited.add((ro, co))

    #creates a variable to count the bombs around matrice[ro][co]
    count = 0
    for i in range(ro - 1, ro + 2):
        for j in range(co - 1, co + 2):
            #checks if it's going out of bounds
            if 1 <= i <= 20 and 1 <= j <= 20:
                if mines[i][j] == '[X]':
                    count += 1

    if count == 0:
        #if there aren't any bombs around, start chain effect
        mat[ro][co] = '[0] '
        for i in range(ro - 1, ro + 2):
            for j in range(co - 1, co + 2):
                if 1 <= i <= 20 and 1 <= j <= 20:
                    if mat[i][j] == '[ ] ':
                        check_bombs(mat, mines, i, j, visited)
    else:
        mat[ro][co] = f'[{count}] '

#main game loop
for i in range(20):
    print_mat(mat)
    ro, co = selec_pos(mat, mines)
    check_bombs(mat, mines, ro, co)
