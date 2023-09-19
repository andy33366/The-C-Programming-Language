#include <stdio.h>

#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/

int main () {
	int c, i;
	

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t'){
			/*printf("\n");
			 *
			 * no prinf("\n") 
			 *
			 * make it move to next index in the array. it moves right
			 *
			 * Two arrays? one for the words and one for the printing? like a matrix
			 *
			 * ^^^^^^^^
			 *
			 * .   .
			 * .   .
			 * . . .
			 * . . .
			 * */
			i++;
		}
		else
			/*
			 * for vertical, will need to create array of words per line
			 *
			 * for i in word 
			 * */
			printf("|");
	}
}
