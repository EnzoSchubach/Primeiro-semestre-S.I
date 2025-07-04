import numpy as np
import random
import os

matrice = np.full([10,10], ' ')
#Function to get random coordinates
def random_coords():
    i = random.randint(0,9)
    j = random.randint(0,9)
    return i, j
#For and while to create the reward and robot position
for m in range(5):
    i, j = random_coords()
    while (matrice[i][j] == '#'):
        i, j = random_coords()
    matrice [i][j] = '#'

ri, rj = i, j
while (matrice[ri][rj] == '#'):
    ri, rj = random_coords()
matrice [ri][rj] = 'R'

#Function to print the matrice
def print_matrice(matrice):
    for i in range(10):
        print ('[', end=' ')
        for j in range(10):
            print (matrice[i][j], end=' ')
        print (']')

#Dumb user
def dumb_user(ri, rj):
    if (0 > ri > 9):
        return ri, rj
    elif ri < 0:
        print ("You can't get out of the matrice")
        ri = 0
    elif ri > 9:
        print ("You can't get out of the matrice")
        ri = 9
    if (0 > rj > 9):
        return ri, rj
    elif rj < 0:
        print ("You can't get out of the matrice")
        rj = 0
    elif rj > 9:
        print ("You can't get out of the matrice")
        rj = 9
    return ri, rj

#Function to control the robot
def robot_move():
    global ri, rj
    p = 5
    while (p > 0):
        os.system ('clear')
        print_matrice(matrice)
        print (f"There's {p} packages left")
        move = str(input("Use |W|A|S|D| to move UP, LEFT, DOWN or RIGHT\nPress Q to EXIT\n"))
        matrice[ri][rj] = ' '
        match move:
            case 'A':
                rj -= 1
            case 'W':
                ri -= 1
            case 'S':
                ri += 1
            case 'D':
                rj += 1
            case 'Q':
                print ("Thanks for playing BoraBill3000")
                exit()
        ri, rj = dumb_user(ri, rj)
        if (matrice[ri][rj] == '#'):
            p -= 1
        matrice[ri][rj] = 'R'
        if (p == 0):
            os.system ('clear')
            print_matrice(matrice)
    print ("All packages have been colected\nYou won BoraBill3000, congratulations!!!")
robot_move()


