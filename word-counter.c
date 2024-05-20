#include <stdio.h>


/*
 * TODO
 *
 * Make it print each word per line
 *
 * */

#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/

int main () {
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	char word[] = {""};
	while ((c = getchar()) != EOF) {
		++nc;
		word = word + c;
		if (c == '\n'){
			++nl;
			printf(word);
			word = "";
		}
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			printf(word);
			word = "";
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("New line \t words \t characters");_
	printf("%d %d %d\n", nl, '\t', nw, '\t', nc);
}
