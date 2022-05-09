// get user class
#include <stdio.h>
#include "../player.h"
#include "classGetter.h"

void classGetter(char *classVar)
{
    // init vars
    char classGetter;
    int ch;

    // prompt
    puts("What is your Class? 'B'rute, 'V'andall, or 'S'tranger");        
    classGetter = getchar();
    while(((ch = getchar()) != EOF) && (ch != '\n')); 
    //result
    //snprintf(genderGetter, *genderVar);
    *classVar = classGetter;
    printf("You are: %c\n", *classVar);

}
