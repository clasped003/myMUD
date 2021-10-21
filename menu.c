#include "intro.h"
#include "menu.h"
#include "quitfuncs.h"
#include "subfuncs.h"
#include "namefuncs.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

void menu(){
	 int menuLoop;
	 menuLoop = 1;
 	 char choiceChar;
		//sad attempt to clear buffer before menu lol
		system("clear"); 
		puts("The die is cast. . .\n ");		
		puts("--Press enter to start--");
		getchar();
		int startch; while (((startch = getchar()) != EOF) && (startch != '\n')) /* void */;
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
		 //scanf(" %c", &choiceChar);
		 	choiceChar = getchar();
			int ch; while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */;						
		//Pages with corresponding functions	in subfuncs file
	  switch(choiceChar){
		case 's':								 									
			playerId();	
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
			menu();									
	    }//switch
	}while(menuLoop == 1);//do while loop
}//menu func 