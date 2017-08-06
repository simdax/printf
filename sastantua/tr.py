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

def nbLines(lvl):
    if lvl <= 0:
        return 0
    else:
        return lvl+2 + nbLines(lvl-1)
    
def where(width, number):
    return (width - number) / 2

def calcStars(globLine, i):
    amount = (i-1) * 4
    amountPlus= triangle_modulo(i - 4)
    return triangle(globLine) + amount + amountPlus

niveau = 4
i = 1
globLine = 0
width = calcStars(nbLines(niveau), niveau) + 2
while i <= niveau:
    reverse = niveau - i
    lignes = i + 2
    for x in range(0,lignes):
        globLine += 1
        stars = calcStars(globLine, i)
        espaces = where(width, stars) - 1
        draw(espaces, ' ')
        draw(1, '/')
        if i == niveau and x > 1:
            draw_door(stars, niveau, x)
        else:
            draw(stars, '*')
        print('\\')
    i += 1



