import curses 

def afficheGUI(visited,carte,TAILLE_X,TAILLE_Y):

	stdscr = curses.initscr()
	stdscr.clear()
	#stdscr.noecho()
	curses.cbreak()
	for i in range(0,TAILLE_X):
		for j in range(0,TAILLE_Y):
			stdscr.addstr(i,j,carte[i][j])
   	stdscr.refresh()
   	touche = stdscr.getch()
   	#stdscr.addstr(0,0,str(touche))
   	if touche==65:
   		return 0
   	elif touche==66:
   		return 2
   	elif touche ==67:
   		return 1
   	elif touche==68:
   		return 3
   	else:
   		return 4
#wrapper(afficheGUI)
def afficheGO():
	stdscr = curses.initscr()
	stdscr.clear()
	stdscr.refresh()
	curses.cbreak()
	#stdscr.noecho()
	print("GAME OVER")
