/*This Naming function takes in a string or numbers with or without spaces. You can set a max length and the strings are stored in variables.*/

/* NOTES:
-change firstname var name to charname
-create namefuncs header file, plug into this file
-remove main function, replace name with function call to be called
from the main game files

*/
#include <stdio.h>
//sets max length for the name strings
#define STRLEN 20

int readln(char s[], int maxlen){
		char ch;
		int i;
		int chars_remain;
		i = 0;
		chars_remain = 1;
		while (chars_remain){
				ch = getchar();
				if ((ch == '\n') || (ch == EOF)){
						chars_remain = 0;
				}else if (i < maxlen - 1){
						s[i] = ch;
						i++;
				}//if
		}//while
		s[i] = '\0';
		return i;
}

int main(int argc, char **argv){
		char firstname[STRLEN];
		int len_firstname;
		printf("Let the Journey begin.\n\n"); 
		printf("What is your Name: ");
		len_firstname = readln(firstname, STRLEN);
		printf("Hello, %s\n", firstname);
		printf("Length of firstname = %d", 
		len_firstname);
		return 0;
}