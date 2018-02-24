/*
 * sqrt.c
 *
 *  Created on: Feb 24, 2018
 *      Author: fidan
 */


#include <math.h>
#include <stdio.h>

int find_sqrt(int a, int b, int c);


int main(void){

	int x, y, z, result ;

	printf("Enter 3 integers: ");

	scanf("%d %d %d", &x, &y, &z);

	result = find_sqrt(x, y, z);

	printf("Result is %d\n", result);

	printf("Ratio of result is %.6f\n", pow(result, -1));

	return 0;

}


int find_sqrt(int a, int b, int c){

	int sum, res;

	sum = pow(3, 2) + pow(5, 2) + pow(6, 2) ;

	res = sqrt(sum);

	return res;

}
