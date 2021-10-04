#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "intro.h"
#include "menu.h"
#include "quitfuncs.h"
#include "subfuncs.h"

/*Notes
-Finish exitprompt .h and .c file, copy from intro.c file and
add it to the .c file exitprompt so func can be called anywhere
X-Create funcs for menu option pages
X-Find out how to get ascii chars as inputs for %c scanf entries
-Find out how to avoid quitconfirm() func looping when using 2 getchar() funcs
*/
int main(){		
		intro();
		menu();
		return 0;
}//main func