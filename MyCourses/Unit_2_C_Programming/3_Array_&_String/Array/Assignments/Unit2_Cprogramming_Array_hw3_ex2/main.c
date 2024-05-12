/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to take n numbers from user, store the data in array and calculate the average
 */

#include "stdio.h"

int main()
{
	int n;
	float nb[50];
	float average=0;
	int i;

	printf("Enter the number of the data: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);

	for (i=0;i<n;i++)
	{
		printf("%d. Enter a number: ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &nb[i]);
	}


	for (i=0;i<n;i++)
	{
		average =average + nb[i];
	}
	printf("Average = %.2f\n", average/n);


	return 0;
}


