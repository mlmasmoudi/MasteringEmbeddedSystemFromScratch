/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: C program to check whether a number is positive or negative
 */

#include "stdio.h"

int main()
{
	int i;
	for(i=1;i<=2;i++)
	{
		float a;
		printf("\n\nEnter a numbers: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &a);

		if(a>0)
		{
			printf("\n%.2f is a positive number. ",a);
		}
		else if(a<0)
		{
			printf("\n%.2f is a negative number. ",a);
		}

		else
		{
			printf("\nYou entered zero.");
		}
	}
	return 0;
}


