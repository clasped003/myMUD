/*This is an early draft of the Character Creation modular file meant
 * to replace namefuncs.c. This might be renamed to that in the future.
 * The data from both files needs to be merged appropriately as needed
 * and then replaced. Header file for this is playerInfo.h
 *
NOTE: 
-NEED TO ADD POINTERS TO FUNCTION PARAMETERS TOPASS THE VALUES! LOOK THIS UP &
START WITH THE GENDERSELECTOR. 

-ALSO NEED TO ADD AN FGETS PARSER WITH A ISDIGIT IF OR SWITCH TO VERIFY THAT
ONLY DIGITS ARE ENTERED. FIND OUT HOW TO CHECK THE AGES GO BETWEEN 18 TO
126 ALSO.

-ALSO REMEMBER!!!!! YOU ARE DOING THE BEST YOU CAN. DONT STRESS THIS OUT. 
YOU ARE DOING A GOOD JOB AND YOU SHOULDN'T SWEAT THIS SO MUCH!!!!!

TO-DO:s
XChange class var to a string variable in struct
X - But keep the letter choice input. just add a var to pass it to
XMove character struct to a separate file, link to this file
-Finish ageSelector func to parse values correctly (possibly w/atoi)
-Create a Makefile for this program
-Clean up prompts to sound more game-ish
-Create a generalized separate function like fgets to get user input
- - maybe it gets parsed in another file? maybe in the function?
- - maybe it can be three. one to get strings, one for chars and one
for numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include "playerInfo.h"

void ageSelector();
void nameSelector();
void classSelector();
void genderSelector();

/*NOTE: using a global struct for now. either make a copy of this struct to 
 * transfer to a file, or find a way to pass the struct to the functions and 
 * return values without overwriting previous struct entries from other funcs.
 */

player playerOne;
int main(){
    //Var dec & init
    int loopVar = 1;
    char choiceVar;
    int ch;

    //Loop & prompt
    while(loopVar){
        system("clear");
        puts("Character creation.");
        puts("Tell me about yourself. . . .\n");
        puts("*********************\n");

        //function calls
        genderSelector();
        ageSelector();
        nameSelector();
        classSelector();

        //Character Summary
        system("clear");
        printf("\n*****************************\n");
        printf("\nYour information so far:\n");
        printf("Gender: %c\n", toupper(playerOne.playerGender));
        printf("Age:    %d\n", playerOne.playerAge);
        printf("Name:   %s\n", playerOne.playerName);
        printf("Class:  %s\n", playerOne.playerClass);
            puts("\nContinue to next screen?\n");
            puts("Press 'Y' + Enter to continue,");
            puts("or press 'N' + Enter to redo your character.\n");
            choiceVar = getchar();
            while((ch = getchar()) != '\n');
            
        switch(toupper(choiceVar))
        {
            case 'Y':
            puts("You have decided to continue.");
            sleep(1);
            loopVar = 0;
            break;

            case 'N':
            puts("You have decided to re-do your character. Re-setting . . . ");
            sleep(1);
            continue;

            default:
            puts("Error in slection, resetting Character. . . ");
            sleep(1);
            continue;
        }//switch
    }//while 
    return 0;
}

void genderSelector(/*&playerOne.playerGender*/){
    //Var dec & init
    int loopVar = 1;
    int ch;
    //Loop & prompt
    while(loopVar){
        puts("\nWhat is your character's gender?: ");
        puts("'M' for Male, 'F' for female, 'O' for other.");
        playerOne.playerGender = getchar();
        while((ch = getchar()) != '\n');
        switch(toupper(playerOne.playerGender))
        {
            case 'M':
                printf("You chose: %c.\nYou are a Male.\n", toupper(playerOne.playerGender));
                loopVar = 0;
                break;

            case 'F':
                printf("You chose %c.\nYou are a Female.\n", toupper(playerOne.playerGender));
                loopVar = 0;
                break;
        
            case 'O':
                printf("You chose %c.\nYou are an Other.\n", toupper(playerOne.playerGender));
                loopVar = 0;
                break;

            default:
                printf("You chose %c.\nInvalid selection, try again . . .\n", playerOne.playerGender);
                continue;
        }//switch
    }//while
}//genderSelector

void ageSelector(){
    //Var dec & init
    int ch;
    int loopVar = 1;

    //Loop & Prompt
    while(loopVar){
        puts("\nEnter your character's age: (from 18 to 126)");
        scanf("%d", &playerOne.playerAge);
        while(((ch = getchar()) != EOF) && (ch != '\n'));
        if(playerOne.playerAge <= 17)
        {
            printf("Too young, they must be 18 or older.\n");
            printf("Please enter a valid age.\n");
            loopVar = 1;
        }else if(playerOne.playerAge >= 126){
            printf("Too old, they must be 126 or older.\n");    
            printf("Please enter a valid age.\n");
            loopVar = 1;
        }else{
            printf("Your character is: %d\n", playerOne.playerAge);
            loopVar = 0;
        }//if else
    }//while
}//ageSelector

void nameSelector(){
    //Var dec & init
    int loopVar = 1;
    char choiceVar;
    int ch;

    //Prompt
    while(loopVar)
    {
        puts("\nEnter a Your Character's Name: ");
        fgets(playerOne.playerName, MAX_BUFF, stdin);
        playerOne.playerName[strlen(playerOne.playerName) - 1] = '\0';//remove newline
        //This loop was just here to check the strings for newline chars. Tester.
        /*for(int i = 0; i < strlen(playerOne.playerName); i++){
            printf("Letter #: %d\n", i); 
        }//for

        for(int j = 0; j < strlen(playerOne.playerName); j++){
            printf("Letter Value: %c\n", playerOne.playerName[j]);
        }//for*/
        printf("Your name is: %s\n", playerOne.playerName);
        puts("\nIs the name ok?");
        puts("If so, press 'Y' + Enter to continue,");
        puts("or else Press 'N' + Enter to re-write name.");
        choiceVar = getchar();
        while(((ch = getchar()) != EOF) && (ch != '\n'));

        switch(toupper(choiceVar))
        {
            case 'Y':
            puts("Continuing. . . ");
            loopVar = 0;
            break;

            case 'N':
            puts("Restarting. . . ");
            break;

            default:
            puts("Unknown command, resetting name. . . ");
            break;
        }
    }//while
}//nameSelector

void classSelector(){
    //Var dec & init
    int ch;
    int loopVar = 1;
    char classGetter; //This is going to pass char to class string

    //Prompt
    while(loopVar)
    {
        puts("What is your class?: ");
        puts("'B'for Brute, 'V' for Vandal, 'S' for Stranger.");
        classGetter = getchar();
        while((ch = getchar()) != '\n');
        switch(toupper(classGetter))
        {   
            case 'B':
                printf("You chose: %c.\nYou are a Brute.\n", toupper(classGetter));
                strcpy(playerOne.playerClass, "Brute");
                loopVar = 0;
                break;

            case 'V':
                printf("You chose %c.\nYou are a Vandal.\n", toupper(classGetter));
                strcpy(playerOne.playerClass, "Vandal");
                loopVar = 0;
                break;
        
            case 'S':
                printf("You chose %c.\nYou are a Stranger.\n", toupper(classGetter));
                strcpy(playerOne.playerClass, "Stranger");
                loopVar = 0;
                break;

            default:
                printf("You chose %c.\nInvalid selection, try again . . .\n", classGetter);
                continue;
        }//switch
    }//while  
}//classSelector
