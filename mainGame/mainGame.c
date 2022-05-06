#include <stdbool.h>
#include <stdio.h>
#include "parsexec.h"
#include "../menuAndFunctions/menu.h"
static char input[100] = "look around";

static bool getInput(void){
    printf("\n -->");
    return fgets(input, sizeof input, stdin) != NULL;
}
void mainGame(){
    puts("Welcome to Spite and Malice!");
    puts("You are in the Drive-Thru parking lot.");
    while(parseAndExecute(input) && getInput());
    puts("Bye!");
    
}
