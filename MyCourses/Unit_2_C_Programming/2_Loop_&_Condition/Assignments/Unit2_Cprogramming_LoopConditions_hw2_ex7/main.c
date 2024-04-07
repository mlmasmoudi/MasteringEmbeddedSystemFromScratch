/*
 * main.c
 *
 *  Created on: 7 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: C program to find factorial of a number
 */

#include "stdio.h"

int main()
{
	int j;
	for(j=1;j<=2;j++)
	{
		int a,prod=1;
		printf("\n\nEnter an integer: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &a);

		if(a<0)
		{
			printf("Error!!! Factorial of negative number doesn't exist.");
		}
		else if(a==0)
		{
			printf("Factorial = %d. ",1);
		}
		else
		{
			int i;
			for(i=1;i<=a;i++)
			{
				prod = prod*i;
			}
			printf("Factorial = %d",prod);
		}
	}
	return 0;
}


