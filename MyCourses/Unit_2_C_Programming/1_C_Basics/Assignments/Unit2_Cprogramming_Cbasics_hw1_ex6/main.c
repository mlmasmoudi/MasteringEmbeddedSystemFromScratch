/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write Source Code to Swap Two Numbers without temp variable
 */

#include "stdio.h"

int main()
{
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping, value of a = %.2f \nAfter swapping, value of b = %.2f\n",a,b);
	return 0;
}

