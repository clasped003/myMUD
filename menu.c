#include "intro.h"
#include "menu.h"
#include "quitfuncs.h"
#include "subfuncs.h"
//#include "namefuncs.h"
#include "modularCharSetter/charSetter.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

void menu(){
	 int menuLoop;
	 menuLoop = 1;
     //char startChooser;
 	 char choiceChar;
		system("clear"); 
        //Initial prompt and start.
		puts("The die is cast. . .\n ");		
		puts("--Loading - Please Wait--");
		//Loop for menu
 	 do{
     //Menu
        system("clear");	
	    puts("**/===========================/**");
	    puts("* */--       M E N U        --/* *");
	    puts("**/====                   ====/**\n");
	    puts("Welcome to the World. . . \n");
	    puts("How do you wish to proceed? (Press selection and then 'Enter')\n\n ");
	    puts("'s' -- Start Game\n");
	    puts("'o' -- Options \n");
	    puts("'c' -- Credits\n");
		puts("'i' -- Instructions\n");
		puts("'q' -- Quit Game\n");				
		choiceChar = getchar();
		int ch; while (((ch = getchar()) != EOF) && (ch != '\n')); /* void */
		//Pages with corresponding functions in subfuncs file
        switch(tolower(choiceChar)){
            case 's':								 									
			    charSetter();	
			    break;							
		    case 'o':	
			    settings();											
			    break;	
		    case 'c':
			    credits();						
			    break;	
		    case 'i':
			    instructions();		
			    break;								 
		    case 'q':
		        exitPrompt();									
		    default:
			    puts("Invalid selection, try again. . .");
			    sleep(1);
			    continue;									
	    }//switch
	}while(menuLoop == 1);//do while loop
}//menu func 
