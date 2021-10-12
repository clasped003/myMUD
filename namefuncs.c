/*This Naming function takes in a string or numbers with or without spaces. You can set a max length and the strings are stored in variables.

NOTES:
-clear getchar buffer to add repetitive use entries
- - make it so user can press enter repeatedly and then enter a name
when they want to and it will all still work.
-add a function and variable to add a gender.
- -maybe just use a char and a M, F, or O?
-
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "intro.h"
#include "menu.h"
#include "quitfuncs.h"
#include "subfuncs.h"
#include "namefuncs.h"
//sets max length for the name strings
#define STRLEN 25

int readln(char s[], int maxlen){
		char ch;
		int i;
		int chars_remain;
		i = 0;
		chars_remain = 1;
		while (chars_remain){
				ch = getchar();
				if ((ch == '\n') || (ch == EOF)){
						chars_remain = 0;
				}else if (i < maxlen - 1){
						s[i] = ch;
						i++;
				}//if
		}//while
		s[i] = '\0';
		return i;
}//readln

int playerId(){
		system("clear");
		char pName[STRLEN];
		int len_pName;
		printf("Let the Journey begin.\n\n"); 
		printf("What is your Name (25 Characters max): ");
		
		//Fix this by clearing buffer for getchar and then test, maybe do while loop
		getchar();
		len_pName = readln(pName, STRLEN);		
		if(len_pName == 0 || pName[0] ==' ' || pName[0] == '\n'){
		  puts("You must enter a name, try again.");			
			sleep(1);							
			return playerId();
		}	else{printf("\nHello, %s\n", pName);
		/*printf("Length of Name = %d \n", 
		len_pName);*/			
		puts("Please press 'Enter' to return to main menu.");
		int a;
		a = getchar();
		if(a == '\n'){
			return 1;	
		}else{
			 system("clear");	
			 printf("ERROR: You entered %c \n", a);	
			 puts("Incorrect entry. \n");
			 puts("Please press 'Enter' to return to main menu.");			
			 return 1;		 
		}// if else}
}		
}// playerId