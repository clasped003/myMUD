#include <stdio.h>
#include "intro.h"
#include "menuAndFunctions/menu.h"

/*Notes
x-Finish exitprompt .h and .c file, copy from intro.c file and
add it to the .c file exitprompt so func can be called anywhere
X-Add a name character function. Plug it into game.
X-Add a gender select function. Plug into game.
-Begin adding locations
X-Create funcs for menu option pages
X-Find out how to get ascii chars as inputs for %c scanf entries
-Find out how to avoid quitconfirm() func looping when using 2 getchar() funcs
*/
int main(){		
		intro();
		menu();
		return 0;
}//main func
