#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wreturn-type"
bool parseAndExecute(char *input){
    
    char *verb = strtok(input, " \n");
    char *noun = strtok(NULL, " \n");

    if(verb != NULL)
    {
        if(strcmp(verb, "quit") == 0)
        {
            return false;
        }
        else if(strcmp(verb, "look") == 0)
        {
            puts("It is very dark in here.");
        }
        else if(strcmp(verb, "go") == 0)
        {
            puts("Its too dark to go anywhere");
        }
        else
        {
            printf("I dont know how to %s", verb);
        }
            return true;
    }
}
