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
/*Character attribute selection menu. Player can pick character attributes they want tied to
their character. This will be transferred over to the character struct later on.
********* Notes:
- Need to link this file to main game files. Also need to add header and add header names
  to the top of this file to merge it with the main program.
- Need to Add error-checking for when a user only adds spaces as a name w/o chars
--Might need to modify getchar() func with buffer wiper code to do this.
-Need to take data gathered from the q's and transfer them to the character struct.
-Need to take the code from this file and create a generalized questionnare
that takes user first name, last name, gender, age and d.o.b. and loop it and add
a struct that the data goes into so this can be used as a template for future programs

*/


int playerId(){
		char uName[20];
		char uGenderLetter;
		char uGender[10];
		char uClassLetter;
		char uClass[10];
		
//Main Char selection loop
int looper = 0;		
while(looper == 0){
     system("clear");						
//Name selection
int nameChoiceLoop = 1;
while(nameChoiceLoop == 1){
		puts("**/=========================================/**");
	   puts("* */--       C h a r a c t e r      --/* *");
		 puts("* */--        C r e a t i o n      --/* *"); 				
	   puts("**/====                                  ====/**\n");				 								
     printf("What is your name? (Max 20 Characters)\n"); 
if (fgets(uName, 20, stdin) != NULL) { 								
		//consume rest of chars up to '\n'						
		if (!strchr(uName, '\n')) {  
		  int ch; while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */; 
		  if (ch == EOF) /* input error */; 										
				printf("Your name is too long, try again. . .  \n" );			
				}else{ 
						 // name includes ENTER
						 printf("Your name is: %s", uName);  
						 nameChoiceLoop = 0;
				} //if else								
		}//if
}//Name while		
//Gender Selection
int genChoiceLoop = 1;
while(genChoiceLoop == 1){
//usr can enter char for gender, but will add strcpy to anthr var so usr	can be given string result									
    puts("What is your gender?('M'ale, 'F'emale, or 'O'ther)");
		uGenderLetter	= getchar();
		int uGenderch; while (((uGenderch = getchar()) != EOF) && (uGenderch != '\n')) /* void */;
		//-using tolower so capital or lower entries could be given w/o adding more to if statement				
		if(tolower(uGenderLetter) == 'm'){
			 puts("You are a Male.");
			 strcpy(uGender, "Male");		
			 genChoiceLoop = 0;								
				}else if(tolower(uGenderLetter) == 'f'){
						 puts("You are a Female");
						 strcpy(uGender, "Female");		
						 genChoiceLoop = 0;		
				}	else if(tolower(uGenderLetter) == 'o'){
						 puts("You are an Other");
						 strcpy(uGender, "Other");		
						 genChoiceLoop = 0;		
				}	else{
						 puts("Wrong selection");
				}
}//Gender while
//Class Selection
/* -used strcpy from 	cstdlib to copy values of getchar vars from gender and class
  onto new vars so that strings could be shown to user giving chars attributes.	*/									
int classChoiceLoop = 1;
while(classChoiceLoop == 1){	
		 puts("What is your Class? ('B'rute, 'S'tranger, 'T'hief?)");
		 uClassLetter = getchar();
		 int uClassch; while (((uClassch = getchar()) != EOF) && (uClassch != '\n')) /* void */;
		if(tolower(uClassLetter) == 'b'){
		   puts("Your class is: Brute");
			 strcpy(uClass, "Brute");    				
			 classChoiceLoop = 0;				
		}else if(tolower(uClassLetter) == 's'){
				 puts("Your class is: Stranger");
				 strcpy(uClass, "Stranger");		
				 classChoiceLoop = 0;							
				}else if(tolower(uClassLetter) == 't'){
						puts("Your class is: Thief");
						strcpy(uClass, "Thief");		
						classChoiceLoop = 0;								
				}else{
						 puts("Wrong selection -- Try again. . .");
				}//else if
}	//Class while
				int confirmLooper = 1;
				while(confirmLooper == 1){
						 system("clear");
						puts("**/=========================================/**");
	   puts("* */--       C h a r a c t e r      --/* *");
		 puts("* */--        C r e a t i o n      --/* *"); 				
	   puts("**/====                                  ====/**\n");
					   printf("Your chosen Name is: %s", uName);
					   printf("Your Gender is: '%s' \n", uGender);						
					   printf("Your chosen class is: '%s' \n\n", uClass);    
				     puts("Do you wish to proceed or would you like to redo your Character?");
				     puts("(Press 'y' to continue to game, 'n' to redo your character.)");
			       char uContinue = getchar();
				     int chSecond; while (((chSecond = getchar()) != EOF) && (chSecond != '\n')) /* void */;		
				if(tolower(uContinue) == 'y'){
					 puts("You have decided to begin your journey.\n");
					 sleep(1);
					 confirmLooper = 0;		
					 looper = 1;
				}else if(tolower(uContinue == 'n')){	
						 puts("Resetting your character. . . \n");
						 sleep(1);
						 confirmLooper = 0;					
						 looper = 0;								
				}else{				
						puts("Invlid Entry - - Try again.");
						//system("clear");		
						sleep(1);		
				}//else if
			}//confirmLooper		while	 												
}	//Main while		
		return 0;
}		

