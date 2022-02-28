#_*_Makefile_*_

all : intro.o main.o menu.o namefuncs.o quitfuncs.o subfuncs.o
	clang -Wall intro.c main.c menu.c namefuncs.c quitfuncs.c subfuncs.c -o myMud

subfuncs.o: subfuncs.c
	clang -Wall -c subfuncs.c  

quitfuncs.o: quitfuncs.c
	clang -Wall -c quitfuncs.c

namefuncs.o: namefuncs.c
	clang -Wall -c namefuncs.c

menu.o: menu.c
	clang -Wall -c menu.c

main.o: main.c
	clang -Wall -c main.c

intro.o: intro.c
	clang -Wall -c intro.c

