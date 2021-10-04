#include "intro.h"
#include "menu.h"
#include "quitfuncs.h"
#include "subfuncs.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void intro(){
		
		char introSel;
		
		system("clear");
		puts("Welcome to the land of shadows. . . \n");
		puts("Press 's' + 'Enter' to begin, or 'q' + 'Enter' to quit\n");
		scanf(" %c", &introSel);
		
		if(introSel == 's'){
			 system("clear");
			 menu();
		}else if(introSel == 'q'){
				exitPrompt();
				}	else{
				puts("\n\nIncorrect selection - - Try again");
				sleep(1);				
				intro();
		   }//If statement 		
}//intro
