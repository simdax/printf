#!/usr/bin/python
import sys

def triangle(start, cr):
    if (start > 1):
        return cr + triangle(start - 1, cr)
    elif(start == 0):
        return 0
    else:
        return 1

def calculate_spaces(niveau, lignes):
    if(niveau > 0):
        return lignes + calculate_spaces(niveau-1,lignes+1)
    else:
        return 0

def draw(times, char):
    if(times > 0):
       sys.stdout.write(char)
       draw(times -1, char)
    else:
        return 0


niveau = 5
i = 1
globLine=0
while i <= niveau:
    reverse = niveau - i
    lignes = i+2
    levelMod = (i) / 2
    levelMod2 = (i-1) /2
    espaces = calculate_spaces(reverse,lignes) + 3*reverse
#    print(levelMod2)
#     print(i)
#     print(lignes)
#     print(espaces)
    for x in range(0,lignes):
        globLine += 1
        draw(espaces, ' ')
        stars = triangle(globLine, 2) + (i - 1)*4
        draw(triangle(lignes - x, 1), ' ')
        draw(1, '/')
        draw(stars, '*')
        print('\\')
    i += 1


#   /*\
#  /***\
# /**|**\


