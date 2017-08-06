#!/usr/bin/python
import sys

def triangle(start):
    if (start > 1):
        return 2 + triangle(start - 1)
    elif(start == 0):
        return 0
    else:
        return 1

def triangle_modulo(level):
    if(level < 0):
        return 0
    else:
        return (1 + (level/2)) * 2 + triangle_modulo(level - 1)

def espacesPlus(niveau, niveau_global):
    if niveau_global < 4:        
        return 0
    else:
        if niveau < 0:
            return 1
        else:
            return niveau%2 + niveau/2 + espacesPlus(niveau - 2, niveau_global)
    
def calculate_spaces(level, lignes):
    if(level > 0):
        return lignes + calculate_spaces(level-1,lignes+1)
    else:
        return 0

def draw(times, char):
    if(times > 0):
       sys.stdout.write(char)
       draw(times -1, char)
    else:
        return 0

def draw_door(stars, niveau, ligne):
    stars = stars / 2 - niveau / 2
    draw(stars, '*')
    if niveau > 4 and x == 4:
        draw(niveau - 2, '|')
        draw(1, '$')
        draw(1, '|')
    else:
        draw(niveau, '|')
    draw(stars - 1, '*')
    if niveau % 2 == 0:
        draw(niveau/2, '*')

def w(lvl):
    if lvl <= 0:
        return 0
    else:
        return lvl+2 + w(lvl-1)
    
def where(width, number):
    return (width - number) / 2

def calcStars(globLine, i):
    amount = (i-1) * 4
    amountPlus= triangle_modulo(i - 4)
    return triangle(globLine) + amount + amountPlus

niveau = 5
i = 1
j = -2
globLine = 0
width = calcStars(w(niveau), niveau) + 2
print width
while i <= niveau:
    j += 1
    reverse = niveau - i
    lignes = i + 2
    espaces = calculate_spaces(reverse,lignes) + 3 * reverse 
    plus = espacesPlus(i - 1, niveau)
    espaces +=  plus
    for x in range(0,lignes):
        globLine += 1
        stars = calcStars(globLine, i)
        esp = where(width, stars) - 1
        print where(width, stars) - 1
        draw(esp, ' ')
#        draw(lignes - x, ' ')
        draw(1, '/')
        if i == niveau and x > 1:
            draw_door(stars, niveau, x)
        else:
            draw(stars, '*')
        print('\\')
    i += 1



