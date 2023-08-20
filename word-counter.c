#include <stdio.h>

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
	printf("%d %d %d\n", nl, nw, nc);
}
