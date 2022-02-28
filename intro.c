#include "intro.h"
#include "menu.h"
#include "quitfuncs.h"
#include "subfuncs.h"
#include "namefuncs.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void intro(){
    	
    char introSel;
	int loopVar = 1;
    while(loopVar == 1){
	    system("clear");
	    puts("Welcome to the land of shadows. . . \n");
	    puts("Press 's' + 'Enter' to begin, or 'q' + 'Enter' to quit\n");
	    
        introSel = getchar();
        int ch;
        while(((ch = getchar()) != EOF) && (ch != '\n'));
	    switch(tolower(introSel))
        {
            case 's':
	        system("clear");
		    menu();
            loopVar = 0;
            break;

	        case 'q':
	        exitPrompt();
            continue;
		    
            default:
		    puts("\n\nIncorrect selection - - Try again");
			sleep(1);				
			continue;
		}//If statement 		
    }//loopVar while
}//intro
