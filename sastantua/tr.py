import sys

def triangle(start):
    if (start > 1):
        return 2 + triangle(start - 1)
    else:
        return 1

def draw(times, char):
    if(times > 0):
       sys.stdout.write(char)
       draw(times -1, char)
    else:
        return 0


i = 5
j = 0
while i > 0:
    draw(triangle(i), ' ')
    draw(1,'/')
    draw(triangle(3 + i), '*')
    print('\\')
    i -= 1


#   /*\
#  /***\
# /**|**\
