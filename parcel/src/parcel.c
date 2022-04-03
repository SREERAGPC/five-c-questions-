/*
 ============================================================================
 Name        : parcel.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,s;
	setbuf(stdout,NULL);
	printf("enter the weight of the parcel in grams");
	scanf("%d",&limit);
	s=limit/500;

	if(s>=2){s=(s-1)*170+200;
		printf("parcel charge is:%d",s);
	}
	else{printf("parcel charge is equal to: 200");

	}

	return EXIT_SUCCESS;
}
