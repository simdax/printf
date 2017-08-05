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

def draw_door(stars, niveau):
    stars = stars / 2 - niveau / 2
    draw(stars, '*')
    draw(niveau, '|')
    draw(stars, '*')
    if niveau % 2 == 0:
        draw(1, '*')

niveau = 6
i = 1
j = -2
globLine=0
while i <= niveau:
    j += 1
    reverse = niveau - i
    lignes = i+2
    if i <= 3:
        mod = 0
    else:
        mod = i/2 - 1
    espaces = calculate_spaces(reverse,lignes) + 3*reverse 
    if niveau > 3 and mod < niveau / 2:
        plus = niveau/2 - mod - 1
#        print(niveau/2 - mod - 1)
 #       espaces += plus
    for x in range(0,lignes):
        globLine += 1
        draw(espaces, ' ')
        amount = 4
#        amount = triangle(i+1, 1) + 1 
 #       if i % 2 == 0:
  #xs          amount = 4
        stars = triangle(globLine, 2) + ((i-1) * amount)
        draw(triangle(lignes - x, 1), ' ')
        draw(1, '/')
        if niveau > 4 and i == niveau and x > 1:
            draw_door(stars, niveau)
        else:
            draw(stars, '*')
        print('\\')
    i += 1


#   /*\
#  /***\
# /**|**\


