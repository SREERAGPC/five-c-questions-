/*
 ============================================================================
 Name        : pattern10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
int i,j,space;
for(i=0;i<5;i++){
	for(space=5;space>i-1;space--){
			printf(" ");
		}
	for(j=1;j<=i;j++){
		printf("%c",64+j);

	}
	for(j=i-1;j>=1;j--){
		printf("%c",64+j);
	}printf("\n");
}
	return EXIT_SUCCESS;
}
