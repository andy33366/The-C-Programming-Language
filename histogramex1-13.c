#include <stdio.h>

#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/

int main () {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t'){
			printf("\n");
		}
		else
			/*
			 * for vertical, will need to create array of words per line
			 *
			 * for i in word 
			 * */
			printf("_");
	}
}
