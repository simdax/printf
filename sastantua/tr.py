#!/usr/bin/python
import sys

def triangle(start, cr):
    if (start > 1):
        return cr + triangle(start - 1, cr)
    elif(start == 0):
        return 0
    else:
        return 1

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

def triangle_modulo(level):
    if(level <= 3):
        return 0
    else:
        if level%2 ==0:
            return 2 + triangle_modulo(level - 1)
        else:
            return 1 + triangle_modulo(level - 1)
        
niveau = 6
i = 1
j = -2
globLine=0
while i <= niveau:
    j += 1
    reverse = niveau - i
    lignes = i+2
    espaces = calculate_spaces(reverse,lignes) + 3*reverse 
    for x in range(0,lignes):
        globLine += 1
        draw(espaces, ' ')
        amount = (i-1) * 4
        amountPlus= triangle_modulo(i)
        stars = triangle(globLine, 2) + amount + amountPlus
        draw(triangle(lignes - x, 1), ' ')
        draw(1, '/')
        if i == niveau and x > 1:
            draw_door(stars, niveau, x)
        else:
            draw(stars, '*')
        print('\\')
    i += 1



