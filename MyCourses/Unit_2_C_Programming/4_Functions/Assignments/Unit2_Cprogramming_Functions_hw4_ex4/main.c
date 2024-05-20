/*
 * main.c
 *
 *  Created on: 20 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: C program to calculate the power of a number using recursion
 */

#include "stdio.h"
#include <string.h>

int NumPow(int base, int pow);

int main()
{
	int base, pow, result;

	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number (positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&pow);

	result = NumPow(base, pow);

	printf("%d ^ %d = %d ", base, pow, result);
	return 0;
}

int NumPow(int base, int pow)
{
	if (pow>=1)
	{
		return (base * NumPow(base,pow-1));
	}
	else
		return 1;

}


