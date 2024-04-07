/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: C program to find the largest number among 3 numbers
 */

#include "stdio.h"

int main()
{
	float a,b,c;
	printf("Enter 3 numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f", &a,&b,&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("The largest number = %.2f ",a);
		}
		else
		{
			printf("The largest number = %.2f ",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("The largest number = %.2f ",b);
		}
		else
		{
			printf("The largest number = %.2f ",c);
		}
	}


	return 0;
}


