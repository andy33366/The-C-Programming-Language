#include <stdio.h>

int main() {
	int c, nl, blanks, tabs;

	nl = 0;
	blanks = 0;
	tabs = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		if (c == ' ')
			++blanks;
		if (c == '\t')
			++tabs;

	printf("newlines:");		
	printf("%d\n", nl);
	printf("\nspaces:");
	printf("%d\n", blanks);
	printf("\ntabs:");
	printf("%d\n", tabs);
	

}
