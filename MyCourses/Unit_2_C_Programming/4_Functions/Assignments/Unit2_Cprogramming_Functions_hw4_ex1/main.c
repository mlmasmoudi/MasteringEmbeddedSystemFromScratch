/*
 * main.c
 *
 *  Created on: 20 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Prime Numbers between two intervals by making user-defined functions
 */

#include "stdio.h"

void PrimeNumbers(int Number1, int Number2);

int main()
{
	int Number1, Number2;
	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &Number1, &Number2);
	PrimeNumbers(Number1,Number2);

	return 0;
}

void PrimeNumbers(int Number1, int Number2)
{
	int i, arrayCount = 0;
	int array[100];
	if(Number1 > Number2)  /*switch number 1 and number 2*/
	{
		int temp;
		temp = Number1;
		Number1 = Number2;
		Number2 = temp;
	}

	for (i=Number1; i< Number2; i++)
	{
		if(i==2)
		{
			array[arrayCount]=i;
			arrayCount++;
		}
		else if(i%2 != 0 && i>2)
		{
			int j;
			for(j=3;j<=i; j++)
			{
				if(i%j==0 && j!=i)
				{
					break;
				}
				else if(i==j)
				{
					array[arrayCount]=i;
					arrayCount++;
					break;
				}
			}
		}
	}

	printf("The Prime numbers between %d and %d are: ", Number1, Number2);

	for (i = 0; i < arrayCount; i++)
	{
		printf("%d ", array[i]); /*print each single value in the array */
	}

}


