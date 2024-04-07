/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to check whether a number is Even or Odd
 */

#include "stdio.h"

int main()
{
	int a;
	printf("\nEnter an integer you wan to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("\n%d is even\n",a);
	}
	else
	{
		printf("\n%d is odd\n",a);
	}


	return 0;
}


