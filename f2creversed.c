#include <stdio.h>

/* prints fahrenheight to celsius table
 * so fun */

int main () {
	int fahr;

	printf("fahrenheight\tcelsius\n");
	for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
		printf("%3d\t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
