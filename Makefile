#_*_Makefile_*_

all : intro.o main.o menu.o modularCharSetter/charSetter.o modularCharSetter/attributeFuncs/ageGetter.o modularCharSetter/attributeFuncs/letterGetter.o modularCharSetter/attributeFuncs/classGetter.o modularCharSetter/attributeFuncs/nameGetter.o quitfuncs.o subfuncs.o
	clang -Wall intro.c main.c menu.c modularCharSetter/charSetter.c modularCharSetter/attributeFuncs/ageGetter.c modularCharSetter/attributeFuncs/letterGetter.c modularCharSetter/attributeFuncs/classGetter.c modularCharSetter/attributeFuncs/nameGetter.c quitfuncs.c subfuncs.c -o myMud

nameGetter.o: modularCharSetter/attributeFuncs/nameGetter.c
	clang -Wall -c modularCharSetter/attributeFuncs/classGetter.c

classGetter.o:	modularCharSetter/attributeFuncs/classGetter.c
	clang -Wall -c modularCharSetter/attributeFuncs/classGetter.c

letterGetter.o: modularCharSetter/attributeFuncs/letterGetter.c
	clang -Wall -c modularCharSetter/attributeFuncs/letterGetter.c

ageGetter.o: modularCharSetter/attributeFuncs/ageGetter.c
	clang -Wall -c modularCharSetter/attributeFuncs/ageGetter.c
subfuncs.o: subfuncs.c
	clang -Wall -c subfuncs.c  

quitfuncs.o: quitfuncs.c
	clang -Wall -c quitfuncs.c

namefuncs.o: modularCharSetter/charSetter.c
	clang -Wall -c modularCharSetter/charSetter.c

menu.o: menu.c
	clang -Wall -c menu.c

main.o: main.c
	clang -Wall -c main.c

intro.o: intro.c
	clang -Wall -c intro.c

