#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* converts fahrenheit to celsius
 * so fun */

int main (int argc, char *argv[]) {
	
	float temp;

	if (argc == 3 && *argv[1] == 'r') {
		temp = atof(argv[2]);

		printf("celsius\t\tfahrenheit\n");
		printf("%.1f\t\t %.1f\n", temp, ((9.0/5.0)*temp) + 32.0);
	}
	else if (argc == 2) {
		temp = atof(argv[1]);

		printf("fahrenheit\t\tcelsius\n");
		printf("%.1f\t\t %.1f\n", temp, (5.0/9.0)*(temp - 32.0));
	
	}
	else {
		printf("Supply a temperature\nfarenheit to celsius is default\nto convert from celsius to fahrenheit use an r as a command line option\n example: f2c.out 45.9\nf2c.out r 23");
	}

}
