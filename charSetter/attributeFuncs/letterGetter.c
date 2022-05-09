// get user gender
#include <stdio.h>
#include <stdlib.h>
#include "../player.h"
#include "letterGetter.h"

void letterGetter(char *genderVar)
{
    // init vars
    char genderGetter;
    int ch;

    // prompt
    puts("What is your Gender? 'M'ale, 'F'emale, or 'O'ther");        
    genderGetter = getchar();
    while(((ch = getchar()) != EOF) && (ch != '\n')); 
    //result
    //snprintf(genderGetter, *genderVar);
    *genderVar = genderGetter;
    printf("You are: %c\n", *genderVar);
}// letterGetter
