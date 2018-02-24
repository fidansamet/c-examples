/*
 * hollow_square.c
 *
 *  Created on: Feb 22, 2018
 *      Author: fidan
 */

#include <stdio.h>

void print_square(int num);
void up_and_down(int num);
void middle(int num);


int main(){

	int side;

	printf("Enter a number: ");

	scanf("%d", &side);

	print_square(side);

	return 0;

}


void up_and_down(int num){

	int i;

	for(i=0;i<num;i++)

		printf("*");

	printf("\n");

}


void middle(int num){

	int i,j;

	for(i=0;i<num-2;i++){

		printf("*");

		for(j=0;j<num-2;j++)

			printf(" ");

		printf("*\n");

	}

}


void print_square(int num){

	int i;

	up_and_down(num);

	middle(num);

	up_and_down(num);

}
