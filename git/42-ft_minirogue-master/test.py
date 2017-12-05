from __future__ import print_function

from collections import deque

import curses 
import fenetre
import random

stdscr = curses.initscr()

TAILLE_X = 30
TAILLE_Y = 100
LMAX_X = TAILLE_X/4
LMAX_Y = TAILLE_Y/4
carteV  = [[" " for i in range(0,TAILLE_Y)] for j in range(0,TAILLE_X)]

carte  = [[" " for i in range(0,TAILLE_Y)] for j in range(0,TAILLE_X)]
portes = []
allSalles=[]
totalPortes = 0

def afficherCarte():
	for i in range(0, TAILLE_X):
		for j in range(0 ,TAILLE_Y-1):
			print(carte[i][j],end="")
		print(carte[i][TAILLE_Y-1])

def genererSalle(salle,x,y,l,L):
	global allSalles
	allSalles.append((x,y,l,L))
	for i in range(x,x+l):
		for j in range(y,y+L):
			if(j==y or j==y+L-1):
				carte[i][j]="|"
			elif(i==x or i==x+l-1):
				carte[i][j]="-"

			else:
				carte[i][j] = "."
	genererPortes(salle,x,y,l,L)

def genererPortes(salle,x,y,l,L):
	global totalPortes
	tab = [True, True, True, True]
	#N E S W 
	if(x<1):
		tab[3]=False
	if(x>TAILLE_X-2):
		tab[1]=False
	if(y<1):
		tab[0]=False
	if(y>TAILLE_Y-2):
		tab[2]=False


	nbPortes = random.randint(1,max(3, sum(tab[i] for i in range(0,4))))
	while (nbPortes+totalPortes) % 2 !=  0:
		nbPortes = random.randint(1,max(3, sum(tab[i] for i in range(0,4))))
	
	totalPortes+=nbPortes

	for porte in range(0,nbPortes):
		for i in range(0,4):
			if tab[i]:
				xporte=0
				yporte=0
				if i%2==0:
					xporte = random.randint(x+1,x+l-2)
				else:
					yporte=random.randint(y+1,y+L-2)

				if i==0:
					yporte=y
				elif i==1:
					xporte = x+l-1
				elif i==2:
					yporte=y+L-1
				else:
					xporte = x
				carte[xporte][yporte]="+"
				portes[salle].append((xporte,yporte,True))
				tab[i]=False
				break
def dessineChemin(x,y,x2,y2):
	#print(str(x)+" "+str(y)+" "+str(x2)+" "+str(y2))
	deplacement = [[0,1],[0,-1],[1,0],[-1,0]]
	previous  = [[(-1,-1) for i in range(0,TAILLE_Y)] for j in range(0,TAILLE_X)]
	file = []
	file.append((x,y))
	while len(file)>0:
		cur= file.pop(0)
		#print(cur)
		curx = cur[0]
		cury = cur[1]
		if curx==x2 and cury==y2:
			break
		for i in range(0,4):
			dx = deplacement[i][0]
			dy = deplacement[i][1]
			if curx+dx>=0 and cury+dy>=0 and curx+dx<TAILLE_X and cury+dy<TAILLE_Y and (carte[curx+dx][cury+dy]=="o" or carte[curx+dx][cury+dy]==" " or carte[curx+dx][cury+dy]=="+")and previous[curx+dx][cury+dy]==(-1,-1):
				file.append((curx+dx,cury+dy))
				previous[curx+dx][cury+dy]=(curx,cury)

	cur = (x2,y2)
	while cur!=(x,y):
		cur = previous[cur[0]][cur[1]]
		if cur!=(x,y):
			carte[cur[0]][cur[1]]="o"

def rechercheCC(voisins):
	global portes
	visited = [0 for i in range(0,len(voisins))]
	count = 1
	for i in range(0, len(voisins)):
		if visited[i]==0:
			pile = [i]
			visited[i]=count
			while len(pile)>0:
				cur = pile.pop()
				for j in voisins[cur]:
					if visited[j]==0:
						visited[j]=count
						pile.append(j)
			count +=1
	print(visited)
	fenetre.afficheGUI(visited,carte,TAILLE_X,TAILLE_Y)
	if count>2: #presence de plusieurs groupes
		a = visited.index(1)
		for i in range(2,count):
			b=visited.index(i)
			x1= portes[a][0][0]
			y1= portes[a][0][1]
			x2= portes[b][0][0]
			y2= portes[b][0][1]
			dessineChemin(x1,y1,x2,y2)
	return visited
def genererChemins():
	global portes
	sallesAccessibles = [[] for i in range(0,len(portes))]
	for i in range(0,len(portes)):
		for j in range(0,len(portes[i])):
			if portes[i][j][2]:
				xp = portes[i][j][0]
				yp = portes[i][j][1]
				portes[i][j]= (xp,yp,False)
				inp = 0
				jnp = 0
				distMin = TAILLE_Y+TAILLE_X
				for k in range(0, len(portes)):
					for l in range(0,len(portes[k])):
						x =portes[k][l][0]
						y = portes[k][l][1]
						if k!=i and portes[k][l][2] and distMin>abs(x-xp)+abs(y-yp):
							distMin=abs(x-xp)+abs(y-yp)
							inp = k
							jnp = l
				portes[inp][jnp] = (portes[inp][jnp][0],portes[inp][jnp][1],False)
				if inp not in sallesAccessibles[i]:
					sallesAccessibles[i].append(inp)
				if i not in sallesAccessibles[inp]:
					sallesAccessibles[inp].append(i)
				dessineChemin(xp,yp,portes[inp][jnp][0],portes[inp][jnp][1])

	return rechercheCC(sallesAccessibles)
def genererMonstres():

	nbMonstres = random.randint(2,4)
	for monstre in range(0,nbMonstres):
		salle = random.randint(0,len(allSalles)-1)
		posx = random.randint(allSalles[salle][0]+1,allSalles[salle][0]+allSalles[salle][2]-2)
		posy = random.randint(allSalles[salle][1]+1,allSalles[salle][1]+allSalles[salle][3]-2)
		carte[posx][posy]="X"

def genererTresors():

	nbTresors = random.randint(1,2)
	for tresor in range(0,nbTresors):
		salle = random.randint(0,len(allSalles)-1)
		posx = random.randint(allSalles[salle][0]+1,allSalles[salle][0]+allSalles[salle][2]-2)
		posy = random.randint(allSalles[salle][1]+1,allSalles[salle][1]+allSalles[salle][3]-2)

		carte[posx][posy]="@"

def updatePosition(touche,curMeX, curMeY,oldMe):
	global carteV
	dx = 0
	dy = 0

	if touche==0:
		dx = -1
	elif touche==1:
		dy = 1
	elif touche==2:
		dx = 1
	elif touche==3:
		dy = -1
	print(dx)
	print(dy)
	if carte[curMeX+dx][curMeY+dy]==" " or carte[curMeX+dx][curMeY+dy]=="-" or carte[curMeX+dx][curMeY+dy]=="|":
		return curMeX,curMeY,oldMe
	if carte[curMeX+dx][curMeY+dy]=="X":
		return -1,-1,-1
	carte[curMeX][curMeY]=oldMe
	curMeX = curMeX + dx
	curMeY = curMeY + dy
	oldMe = carte[curMeX][curMeY]
	carte[curMeX][curMeY]="M"
	return (curMeX,curMeY,oldMe)
def updateCarte(x,y):
	global carteV
	deplacements = [[0,1],[0,-1],[1,0],[-1,0],[1,1],[-1,-1],[1,-1],[-1,1],
[0,2],[0,-2],[2,0],[-2,0],[-2,-1],[2,-1],[2,-1],[-2,1],[2,1],[-1,-2],[1,-2],[1,-2],[-1,2],[1,2]]

	for d in deplacements:
		if x+d[0]>=0 and y+d[1]>=0 and x+d[0]<TAILLE_X and y+d[1]<TAILLE_Y:
			carteV[x+d[0]][y+d[1]]=carte[x+d[0]][y+d[1]]

def genererEtage():
	nbSalles = random.randint(8,13)
	for i in range(0,nbSalles):
		portes.append([])

	for salle in range(0,nbSalles):
		lx=0
		ly=0
		while(lx<5 or ly<5):
			x= random.randint(0,TAILLE_X-LMAX_X)
			y= random.randint(0,TAILLE_Y-LMAX_Y)
			lx = random.randint(5,LMAX_X)
			ly = random.randint(5,LMAX_Y)

			for i in range(x-1,x+lx+1):
				for j in range(y-1,y+ly+1):
					if(i>=0 and j>=0 and i<TAILLE_X and j<TAILLE_Y 
and (carte[i][j]=="." or carte[i][j]=="|" or carte[i][j]=="-" or carte=="+")):
						#print(str(x)+" "+str(y)+" "+str(lx)+" "+str(ly))
						lx = i-x-3
						ly = j-y-3

						break


		genererSalle(salle,x,y,lx,ly)
	print(portes)

genererEtage()
visited=genererChemins()
genererMonstres()
genererTresors()

fenetre.afficheGUI(visited,carteV,TAILLE_X,TAILLE_Y)
curMeX = allSalles[0][0]+1
curMeY = allSalles[0][1]+1
oldMe = carteV[curMeX][curMeY]
updateCarte(curMeX,curMeY)
while(True):
	touche = fenetre.afficheGUI(visited,carteV,TAILLE_X,TAILLE_Y)
	curMeX,curMeY,oldMe = updatePosition(touche,curMeX,curMeY,oldMe)
	updateCarte(curMeX,curMeY)

	if curMeX ==-1 and curMeY==-1 and oldMe==-1:
		break
fenetre.afficheGO()
