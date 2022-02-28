#_*_Makefile_*_

all : intro.o main.o menu.o namefuncs.o quitfuncs.o subfuncs.o
	clang -Wall intro.c main.c menu.c namefuncs.c quitfuncs.c subfuncs.c -o myMud
