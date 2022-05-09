// name Getter func

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "nameGetter.h"

#define MAX_BUFF 22
void nameGetter(player *playerOne)
{
    // var init
    int loopVar = 1;
    //int spaceCounter = 0;
    char uName[MAX_BUFF];

    // function start
    while(loopVar){
        puts("What is your name?");
        puts("Rules: ");
        puts("1. 20 Characters Max (letters or numbers");     
        puts("2. Only 1 space allowed");
        puts("3. Name can't start with a space");
        puts("4. No blank names");
        puts("5. NO OFFENSIVE NAMES");
        //printf("Your current name is: %s", nameVar);

        fgets(uName, MAX_BUFF, stdin);

        strcpy(playerOne->playerName, uName);
        
        //printf("playerOne.PlayerName in func: %s", nameVar);
        //NAME TOO SHORT
        if(strlen(uName) == 1)
        {
            puts("Need to enter a name. Try again.\n");
            loopVar = 1;
            continue;
        }else{
            puts("Ok.");
            loopVar = 0;
            break;
        }// if
        //NAME TOO LONG
        if(strlen(uName) < 18)
        {
            puts("Name is too long. Can only be 20 letters total");
            loopVar = 1;
            continue;
        }else{
            puts("Length ok");
            loopVar = 0;
            break;
        }
        //TOO MANY SPACES
            
        //INAPPROPRIATE NAME

    }// loopVar while

}
