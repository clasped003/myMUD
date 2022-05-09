// get user age
#include <stdio.h>
#include <stdlib.h>
#include "../player.h"
#include "ageGetter.h"


void ageGetter(int *ageVar)
{
    char agePasser[4];
    int loopVar = 1;
    int ch;
    while(loopVar)
    {
    puts("What is your Age? (Number between 18 to 126)");
    if(fgets(agePasser, 4, stdin) != NULL)
    {
        if(!strchr(agePasser, '\n'))
        {
            while(((ch = getchar()) != EOF) && (ch != '\n'));
            if(ch == EOF)
            {
                puts(" ");
            }else
            {
                puts(" ");
            }


        }
    }

        *ageVar = atoi(agePasser);
        if(atoi(agePasser) <= 17)
        {
            puts("Too young, character must be 18 or older");
            puts("Please enter a valid age");
            continue;
        }
        else if(atoi(agePasser) >= 126)
        {
            puts("Too old, character must be younger than 126");
            puts("Please enter a valid age.");
            continue;
        }
        else
        {
            printf("Your character is: %s", agePasser);
            loopVar = 0;
            break;
        }//if else
    }//while
}// ageGetter

