/*
 * main.c
 *
 *  Created on: 20 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Factorial of number using recursion
 */

#include "stdio.h"

int Factor(int Number1);

int main()
{
	int fac,Number1;
	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Number1);
	fac= Factor(Number1);
	printf("Factorial of %d : %d", Number1,fac);

	return 0;
}

int Factor(int Number1)
{

	if(Number1>1)
	{
		Factor(Number1-1);
		return Number1*Factor(Number1-1);
	}
	else
		return 1;
}


