Sudoku: fichier « lisez_moi.txt »

Programme pour résoudre les sudokus:
									, 31/12/2006

Pour le lancer:
  - ouvrir une fenêtre de console:
    Dans Windows XP, si ça n'existe pas dans
    le menu Démarrer-Programmes, il faut faire ceci:
	Démarrer - Exécuter... - taper "cmd" puis Entrée
    Dans Windows 98, c'est "command" au lieu de "cmd"

  - aller dans le répertoire où se trouve le programme (avec CD)

  - utiliser une des méthodes suivantes:

  1) en ligne de commande:

sudoku xxxxx8x1x x37xxxxxx x5xx7x4x9  xxxxxx2xx xxx6xxxxx 41xxx2xx3  x71xxxxxx xx9x2x6x4 xx6x935xx

	   2) en tapant ligne par ligne

sudoku -
xxxxx8x1x 
x37xxxxxx 
x5xx7x4x9  
xxxxxx2xx 
xxx6xxxxx 
41xxx2xx3  
x71xxxxxx 
xx9x2x6x4 
xx6x935xx

	3) en utilisant une grille existante dans un fichier

type expert.txt | sudoku -


Remarques:
  1) le "-" indique au programme que la grille est fournie dans l'entrée standard
     c'est-à-dire soit au clavier, soit depuis un autre programme avec le "pipe": "|"
  2) dans tous les cas, les espaces, tabulations, fins de ligne, et caractères "-|+" 
     servant à dessiner les grilles sont ignorés. Les autres, s'ils ne sont pas un
     chiffre de 1 à 9, sont considérés comme correspondant à une case encore vide
  3) si on veut mettre le résultat dans un fichier, il suffit de rajouter "> fichier.txt"
     à la fin de la commande. Exemple:

type expert.txt | sudoku - > resultat_expert.txt


****************
* Le programme *
****************

C'est un tout petit programme écrit en C++, langage bien adapté dans ce cas.
Il fonctionne sous Linux et sous Windows de façon identique.
Pour Windows, il a été compilé avec l'environnement Bloodshed Dev-C++ qui
utilise le compilateur Mingw-GCC.
L'exécutable doit fonctionner tout seul sur n'importe quelle version
de Windows à partir de Windows 95.

**************
* La méthode *
**************

Je pense que ce programme est relativement intelligent. En tous cas, sur un PC,
le calcul est instantané.
Autre raffinement: le programme dit s'il y a une solution, ou aucune, ou bien
plusieurs (et dans ce cas il en exhibe deux). Il est amusant d'essayer avec une
grille vide:

sudoku xxxxxxxxx xxxxxxxxx xxxxxxxxx  xxxxxxxxx xxxxxxxxx xxxxxxxxx  xxxxxxxxx xxxxxxxxx xxxxxxxxx


La méthode de résolution est la suivante:

 1) pour chaque case, on mémorise toutes les chiffres autorisés sur cette case:
    initialement, tous les chiffres sont possibles sur chaque case.

 2) à chaque fois qu'on écrit un chiffre (qu'il soit donné dans l'énoncé ou bien
    qu'on l'ait trouvé plus tard), on retire ce chiffre de la liste des possibilités
    pour toutes les autres cases du carré, de la ligne, ou de la colonne

 3) la première méthode essayée est nommée "triviale": s'il n'y a qu'une seule
    possibilité pour une case, eh bien on écrit cette possibilité. C'est-à-dire
    quand tous les autres chiffres existent déjà dans la ligne, la colonne, ou le carré.

 4) ensuite, on utilise la méthode "seule position possible", qui fonctionne de
    façon inverse. Pour chaque ligne, chaque colonne, et chaque carré, il doit
    apparaître chaque chiffre une fois et une seule. Si on constate, pour chacun
    des cas, que toutes les positions sauf l'une sont impossibles, on écrit le chiffre
    en question à la position où ce n'est pas impossible.

 5) ensuite, on utilise la méthode "chiffres sur une ligne": dans chaque carré, si
    on n'a pas trouvé la position d'un chiffre, mais on a trouvé que toutes les
    positions possibilités de ce chiffre dans ce carré sont sur une même ligne
    ou sur une même colonne, alors on retire ce chiffre de la liste des possibilités
    pour toutes les cases de la même ligne ou colonne situées sur les autres carrés.

 6) si on n'a toujours pas trouvé la conclusion (c'est-à-dire soit la solution unique,
    soit une impossibilité), on passe à la méthode récursive basée sur des hypothèses:

    - on fait la liste des cases pour lesquelles on peut faire des hypothèses
    - on classe ces hypothèses par nombre croissant de choix possibles
    - on débute par celle qui a le moins de choix possibles
        (NB: en fait, cette hypothèse mène forcément à la solution du problème,
         mais au départ j'avais envisagé d'autres stratégies pour explorer
         plusieurs hypothèses en regardant laquelle aboutit le plus vite,
         mais j'y ai renoncé car en fait ça n'apportait aucune amélioration)
    - sur une copie de la grille, on écrit successivement chaque choix possible,
      et à chaque fois on cherche la solution avec les méthodes non itératives
      précédemment décrites:
        - si une solution unique est alors trouvée, on note cette solution
        - si une impossibilité est alors trouvée, on note que ce choix ne convient pas
        - si la conclusion n'est pas trouvée par les méthodes non itératives, on
          la cherche à nouveau par la méthode itérative:
            - si on trouve 2 solutions ou plus, c'est la conclusion
            - si on trouve une solution unique:
                - si c'est la première que l'on trouve, on l'enregistre
                - si c'est la 2e, on conclut qu'il y a au moins 2 solutions
            - si on trouve une impossibilité, on ne fait rien
            - si on ne trouve pas la conclusion, on mémorise cela (ceci ne doit pas arriver)
    - Si on est tombé au moins une fois sur une absence de conclusion, on revient en
      disant que le problème est trop difficile pour ce programme (ceci ne doit pas arriver)
    - Si on n'a trouvé aucune solution, la conclusion est une impossibilité.
    - Sinon (une seule solution trouvée), la conclusion est qu'il y a une solution unique.

En se basant sur des exemples de sudokus, tirés de http://sudoku.koalog.com/ , j'ai trouvé
  - les sudokus très faciles, faciles, et moyens, se résolvent avec les méthodes 1 à 4
  - le sudoku difficile demande l'aide de la méthode 5
  - le sudoku très difficile demande la méthode itérative avec 1 hypothèse (2 choix possibles)
  - le sudoku expert demande 3 hypothèses successives (2 choix possibles à chaque fois)

NB: la fonction de résolution marche également pour les autres tailles. On peut indiquer
"-1" (sudoku stupide), "-2" (sudoku enfant), "-4" (sudoku humainement infaisable, avec des 
lettres de A à P), ou même en théorie "-5" (lettres de A à Y) mais cette dernière option 
est désactivée (pas très utile, et sur une grille vide ça demande beaucoup de mémoire).


Exemples de commandes à coller dans la fenêtre de console (faire "copier" sur ce texte,
puis "clic droit" dans la consolle pour coller le texte):

  très facile: 
sudoku 3xxx24xxx 6xxxx8xxx xxxxxx918  xxxxxxxxx 8xx5xxx3x xxxx4xx62  x2xx87xx4 xx4xxx5xx x1xxx32xx

  facile:
sudoku 2xxxx7x6x 37xxxxxxx xxx2xx19x  xxxxxx6xx 1xx84x5xx x3xxx6x8x  412xxxxxx xxxx2x7x9 xx5x1xxxx

  moyen: 
sudoku 2xxx7xx6x 613xxxxx4 xx43xx2xx  xxxxxx8x5 xxx1xx7xx x8xxx3x19  4x17xxxxx xx2xxx5xx xxxx5xxxx

  difficile: 
sudoku 2xxx65xxx x57xxxxxx xx893xx56  xxxxxxxx7 xxx1xxxxx 71xxx4x89  xx68xxxxx xx9x2x4x8 xxxx4x6xx

  tres difficile:  
sudoku 5xxxx84xx x6xxxxxxx xx39xxx8x  xxxxxxxx3 x9x5xx8xx 47xxx1xx2   186xxxxxx xxxx4x5xx xx5x6x1xx

  expert: 
sudoku xxxxx8x1x x37xxxxxx x5xx7x4x9  xxxxxx2xx xxx6xxxxx 41xxx2xx3  x71xxxxxx xx9x2x6x4 xx6x935xx

  grille vierge: 
sudoku xxxxxxxxx xxxxxxxxx xxxxxxxxx  xxxxxxxxx xxxxxxxxx xxxxxxxxx  xxxxxxxxx xxxxxxxxx xxxxxxxxx


Exemple de résolution d'une grille diabolique (bien plus dur que la catégorie "très difficile"
des journaux):

> sudoku 5.....4.6 ...3295.. ..1...... .......23 ...7.6... 89....... ......8.. ..8951... 4.6.....7

Entrée:
+-------+-------+-------+
| 5 . . | . . . | 4 . 6 |
| . . . | 3 2 9 | 5 . . |
| . . 1 | . . . | . . . |
+-------+-------+-------+
| . . . | . . . | . 2 3 |
| . . . | 7 . 6 | . . . |
| 8 9 . | . . . | . . . |
+-------+-------+-------+
| . . . | . . . | 8 . . |
| . . 8 | 9 5 1 | . . . |
| 4 . 6 | . . . | . . 7 |
+-------+-------+-------+
Chiffre forcément sur une ligne: retrait de 17 possibilités

Passage à la recherche itérative basée sur des hypothèses
Nombre d'hypothèses possibles à chaque niveau de récursion:
2222 => échec
   \222 => échec
      \2 => échec
       \2 => échec
        \ => échec
     \ => échec
    \ => échec
  \ => échec
 \22 => échec
   \ => échec
  \ => échec
\22 => échec
  \ => solution
 \ => échec
Solution unique trouvée!

Sortie:
+-------+-------+-------+
| 5 2 9 | 8 1 7 | 4 3 6 |
| 7 6 4 | 3 2 9 | 5 1 8 |
| 3 8 1 | 4 6 5 | 2 7 9 |
+-------+-------+-------+
| 6 4 5 | 1 9 8 | 7 2 3 |
| 1 3 2 | 7 4 6 | 9 8 5 |
| 8 9 7 | 5 3 2 | 6 4 1 |
+-------+-------+-------+
| 9 1 3 | 6 7 4 | 8 5 2 |
| 2 7 8 | 9 5 1 | 3 6 4 |
| 4 5 6 | 2 8 3 | 1 9 7 |
+-------+-------+-------+


***************************
* Améliorations possibles *
***************************

Pour certaines grilles très difficiles, ce programme résout le problème
en essayant différentes hypothèses. Or il arrive qu'il existe des méthodes
de résolution plus élégantes. Par exemple la grille "diabolique" indiquée
ci-dessus a été classée comme "pas très difficile, ne nécessite pas
d'hypothèses, mais très inhabituelle" par mon père. La méthode qu'il
utilise et que mon programme n'utilise pas est celle-ci:
  * 3 nombres dans 3 cases: si on peut trouver 3 cases d'une même ligne,
colonne, ou carré, dont les possibilités sont constituées des 3 mêmes
chiffres, alors sait que ces 3 chiffres sont impossibles sur les 6 autres
cases de la ligne, colonne, ou carré (respectivement).
  Exemple: sur la ligne n°5, on constate que les possibilités restantes sont:
    * colonne 2: les chiffres 2, 5, 7
    * colonne 4: les chiffres 2, 7
    * colonne 5: les chiffres 5, 7
  Alors nous savons que sur la ligne n°5, les chiffres 2, 5, 7 sont
  nécessairement sur les colonnes 2, 4, 5.
  Dans ce cas, nous savons que les chiffres 2, 5, 7 ne sont pas possibles
  dans le reste de la ligne n°5, c'est-à-dire dans les colonnes 1,3,6,7,8,9.
Cependant, il semble que pour certaines grilles difficiles, même en utilisant
cette méthode, on doit faire des hypothèses pour pouvoir trouver la solution.
