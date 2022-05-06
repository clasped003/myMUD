#_*_Makefile_*_

all : intro.o main.o menuAndFunctions/menu.o modularCharSetter/charSetter.o modularCharSetter/attributeFuncs/ageGetter.o modularCharSetter/attributeFuncs/letterGetter.o modularCharSetter/attributeFuncs/classGetter.o modularCharSetter/attributeFuncs/nameGetter.o menuAndFunctions/quitfuncs.o menuAndFunctions/subfuncs.o mainGame/mainGame.o
	clang -Wall intro.c main.c menuAndFunctions/menu.c modularCharSetter/charSetter.c modularCharSetter/attributeFuncs/ageGetter.c modularCharSetter/attributeFuncs/letterGetter.c modularCharSetter/attributeFuncs/classGetter.c modularCharSetter/attributeFuncs/nameGetter.c menuAndFunctions/quitfuncs.c menuAndFunctions/subfuncs.c mainGame/mainGame.c mainGame/parsexec.c -o myMud

parsexec.o: mainGame/parsexec.c
	clang -Wall -c mainGame/parsexec.c

mainGame.o: mainGame/mainGame.c
	clang -Wall -c mainGame/mainGame.c

nameGetter.o: modularCharSetter/attributeFuncs/nameGetter.c
	clang -Wall -c modularCharSetter/attributeFuncs/classGetter.c

classGetter.o:	modularCharSetter/attributeFuncs/classGetter.c
	clang -Wall -c modularCharSetter/attributeFuncs/classGetter.c

letterGetter.o: modularCharSetter/attributeFuncs/letterGetter.c
	clang -Wall -c modularCharSetter/attributeFuncs/letterGetter.c

ageGetter.o: modularCharSetter/attributeFuncs/ageGetter.c
	clang -Wall -c modularCharSetter/attributeFuncs/ageGetter.c
subfuncs.o: menuAndFunctions/subfuncs.c
	clang -Wall -c menuAndFunctions/subfuncs.c  

quitfuncs.o: menuAndFunctions/quitfuncs.c
	clang -Wall -c menuAndFunctions/quitfuncs.c

namefuncs.o: modularCharSetter/charSetter.c
	clang -Wall -c modularCharSetter/charSetter.c

menu.o: menuAndFunctions/menu.c
	clang -Wall -c menuAndFunctions/menu.c

main.o: main.c
	clang -Wall -c main.c

intro.o: intro.c
	clang -Wall -c intro.c

