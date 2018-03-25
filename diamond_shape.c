/*
 * Assignment5-1.c
 *
 *  Created on: Dec 17, 2017
 *      Author: fidan
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int mid_num = atoi(argv[1]);
	int i;
	int j;
	int k;

	for(i=0;i<mid_num;i++){

		for(j=0;j<mid_num-i-1;j++){

			printf(" ");
		}
		printf("/");

			for(k=0;k<i*2;k++){

				printf(" ");
		}
			printf("\\");

	printf("\n");
	}

	for(i=mid_num;i>0;i=i-1){

		for(j=0;j<mid_num-i;j++){

			printf(" ");
		}
		printf("\\");

			for(k=0;k<i*2-2;k++){

				printf(" ");
		}
			printf("/");

	printf("\n");
	}

	return 0;
}
