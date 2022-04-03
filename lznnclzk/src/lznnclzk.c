/*
 ============================================================================
 Name        : lznnclzk.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,space,col;
	for(row=1;row<=5;row++){
		for(col=5;col>=row;col--){


		printf("%d",col);
	}printf("\n");
	}
	return EXIT_SUCCESS;
}
