#include "intro.h"
#include "menu.h"
#include "quitfuncs.h"
#include "subfuncs.h"
#include "namefuncs.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void quitConfirm(){
		system("clear");
		puts("\n\n\n\n\n");
		printf("Copyright 2021, ZTD Software");
}//quitConfirm

void exitPrompt(){
		atexit(quitConfirm);
		char verify;
		puts("\nAre you sure you want to quit? y/n");
		scanf(" %c", &verify);
		switch(verify){
			case 'y':
				system("clear");
				puts("Too bad, running away so soon?\n\n");
				sleep(2);
	      puts("We will be waiting for you to return. . . ");
	      sleep(2);
				exit(1);		    
			case 'n':
				 system("clear");			     
				 puts("\nDeciding to return. . . \n");
				 puts("Glad to see you've changed your mind.\n");
				 puts("Returning");
				 sleep(1);
				 menu(); 				     				    
			 default:
				 puts("Invalid selection, try again. . .");
			   sleep(1);
				 exitPrompt();
				}	//switch
}//exitPrompt


