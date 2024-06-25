#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	FILE *fptr;

	char c;

	if(argc==2) {

		//open file
		fptr = fopen(argv[1], "r");
		if (fptr == NULL){
			printf("cannot open file");
			exit(0);
		}

		//read contents from file
		c = fgetc(fptr);
		while (c != EOF){

			printf("%c", c);
			c = fgetc(fptr);

		}
		
		fclose(fptr);
		return 0;
		
		//printf("Hello, %s!\n", argv[1]);
		

	}

	else{

		fprintf(stderr, "Usage: c00lout nameoffile", argv[0]);
		return 1;

	}

	return 0;
}
