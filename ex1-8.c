#include <stdio.h>

int main() {
	int c, nl, tab, space;

	nl = 0;
	tab = 0;
	space = 0;
	while ((c = getchar()) != EOF){
		switch (c){
			case '\n' :
				++nl;
				break;
			case '\t' :
				++tab;
				break;
			case ' ' :
				++space;
				break;
		}
	}
	printf("New lines: %d\n", nl);
	printf("Tabs: %d\n", tab);
	printf("Spaces: %d\n", space);

	

}
