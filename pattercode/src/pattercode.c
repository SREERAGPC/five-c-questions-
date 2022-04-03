/*
 ============================================================================
 Name        : pattercode.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,space;
	for(i=0;i<4;i++){
		for(space=0;space<=i;space++);
		{printf(" ");
		{printf("*");
			for(space=0;space<=4-i;space++){
			printf(" ");


		}printf("*");
		printf("\n");

		}
		}
	}
	return EXIT_SUCCESS;
}
