/*This Naming function takes in a string or numbers with or without spaces. You can set a max length and the strings are stored in variables.

NOTES:
-clear getchar buffer to add repetitive use entries
- - *make it so user can press enter repeatedly and then enter a name
when they want to and it will all still work.
-fix function and variable to add a gender to either sleep or need enter press
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

//Allows user to input numbers, letters and symbols in the string
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

//Player ID Generation. Does Name and Gender.
int playerId(){
		system("clear");
		char pName[STRLEN];
		int len_pName; 
		
		//Character naming Function, ties to readln function above
		int validName = 0;
		getchar();
    while(validName == 0){
		system("clear");
		printf("Let the Journey begin.\n\n");		
		printf("What is your Name: (25 Characters max. Name can't begin with a space.)\n");		
		len_pName = readln(pName, STRLEN);		
		if(len_pName == 0 || pName[0] ==' ' || pName[0] == '\n'){			
		  puts("\nYou must enter a name correctly, try again. (Resetting. . . )\n");
			sleep(1);			
			validName = 0;																
		}	else{
		
		validName = 1;		
		}// if else
		}// while
		//This is here as emrg backup incase gender func goes bad
		/*printf("Length of Name = %d %d \n", 
		len_pName, pName);*/			
		/*puts("Please press 'Enter' to return to main menu.");
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
		}// if else*/
		
		//Gender Selection
		char pGender;
		int validGender = 0;
		while(validGender == 0){	
		printf("\nHello, %s!\n", pName);			
		puts("Please select a gender ('m' for male, 'f' for Female, 'o' for Other):");		
	  pGender = getchar();
		getchar(); 
		system("clear");		
		if(pGender == 'm' || pGender == 'M'){
		  //printf("You picked %c \n", pGender);
		  printf("You are '%s', a 'Male'\n", pName);	
		  validGender = 1;				
		  }else if(pGender == 'f' || pGender == 'F'){
		    //printf("You picked %c \n", pGender);
		    printf("You are '%s', a 'Female'\n", pName);
				validGender = 1;				
		  }else if(pGender == 'o' || pGender == 'O'){
		    //printf("You picked %c \n", pGender);
		    printf("You are '%s', an 'Other'\n", pName);
				validGender = 1;
			}else{			
				puts("Invalid Entry");
				sleep(1);
				system("clear");				
				validGender = 0;						
		  }	// if else	
		}//while
		
		//Enter to Return to Menu. Store this as a separate function source for later.					
		puts("Please press 'Enter' to return to main menu.");
		int b;
		b = getchar();
		if(b == '\n'){
			return 1;	
		}else{
			 system("clear");	
			 printf("ERROR: You entered %c \n", b);	
			 puts("Incorrect entry. Returning.\n");
			 puts("Please press 'Enter' to return to main menu.");			
			 return 1;		 
		}// if else
}// playerId