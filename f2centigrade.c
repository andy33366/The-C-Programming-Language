#include <stdio.h>

/* converts fahrenheit to celsius
 * so fun */

int main () {
	float fahr;

	printf("enter a temperature in fahrenheit:");
	scanf("%f", &fahr);

	printf("fahrenheight\tcelsius\n");
	printf("%6.1f\t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
