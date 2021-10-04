#include "intro.h"
#include "menu.h"
#include "quitfuncs.h"
#include "subfuncs.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void menu(){
	 int menuLoop;
	 menuLoop = 1;
 	 char choiceChar;
		 //Loop for menu		
 	 do{
     //Menu Function	
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
		 scanf(" %c", &choiceChar);						
		//Pages with corresponding functions	in subfuncs file
	  switch(choiceChar){
		case 's':								
		  system("clear"); 									
			puts("- Game coming soon -");
			puts("Returning to Menu. . . ");
		  sleep(1);										
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