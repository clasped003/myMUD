#include "intro.h"
#include "menu.h"
#include "quitfuncs.h"
#include "subfuncs.h"
#include "namefuncs.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

/*Notes: Need to figure out how to have this screen pause until someone presses
enter to return to menu. Then save this file as a template for that type of function*/
int settings(){
		 system("clear");	
	   puts("**/===============================/**");
	   puts("* */--       O P T I O N S      --/* *");
	   puts("**/====                       ====/**\n");
		 puts("Options page coming soon!");
		 puts("Press 'Enter' to return to main menu.");
		 //added 'press enter to return to main menu' prompt using two getchar() functions
		 //getchar();
		
		 char a = getchar(); 
		 if(a == '\n'){
			return 1;	
		}else{
			 system("clear");	
			 printf("ERROR: You entered %c \n", a);	
			 puts("Incorrect entry. \n");
			 puts("Please press 'Enter' to return to main menu.");
			 sleep(1);		
			 settings();					 
		}// if else
		  return 1;
}// Options
int credits(){
		 system("clear");
		 puts("**/===============================/**");
	   puts("* */--       C R E D I T S      --/* *");
	   puts("**/====                       ====/**\n");
		 puts("Created by ZTD Software\n");
		 puts("Game design and concept by ZTD Software\n");
		 puts("Code written by ZTD Software\n");
		 puts("Press 'Enter' to return to main menu.");
		 //getchar();
		 char a;
		 a = getchar();
		 if (a == '\n'){
			return 1;	
		}else{
			 system("clear");	
			 printf("ERROR: You entered %c \n", a);	
			 puts("Incorrect entry. \n");
			 puts("Please press 'Enter' to return to main menu.");
			 sleep(1);		
			 settings();					 
		}// if else
		  return 1;
}// Credits

int instructions(){
		 system("clear");
		 puts("**/=========================================/**");
	   puts("* */--       I N S T R U C T I O N S      --/* *");
	   puts("**/====                                  ====/**\n");
		 puts("You are a traveler who has mysteriously arrived in a room.");
		 puts("Your task is to explore the area and learn about your surroundings.");
		 puts("Wander through the different rooms.\n");
		 puts("Press 'Enter' to return to main menu.");
		 //getchar();
		 char a;
		 a = getchar();
		if (a == '\n'){
		  return 1;
		}else{
		    system("clear");
			  printf("ERROR: You entered %c \n", a);	
		  	puts("Incorrect entry. \n");
			  puts("Please press 'Enter' to return to main menu.");
			  sleep(1);		
			  settings();					 
		}	// if else 
	      sleep(2);
		 return 0;
}// Instructions
