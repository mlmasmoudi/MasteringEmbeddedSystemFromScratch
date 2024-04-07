/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: C program to calculate the sum of natural numbers
 */

#include "stdio.h"

int main()
{
	int a,sum=0;
	printf("\n\nEnter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &a);

	int i;
	for(i=1;i<=a;i++)
	{
		sum = sum+i;
	}
	printf("Sum = %d",sum);
	return 0;
}


