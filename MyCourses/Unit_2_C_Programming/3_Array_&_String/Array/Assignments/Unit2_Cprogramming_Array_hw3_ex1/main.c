/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to sum 2 matrixes of dim 2x2
 */

#include "stdio.h"

int main()
{
	float a[2][2];
	float b[2][2];
	int i,j;

	printf("Enter the elements of the 1st matrix:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter a%d%d: ", i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}

	printf("Enter the elements of the 2d matrix:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter b%d%d: ", i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &b[i][j]);
		}
	}

	printf("\nSum of the 2 matrices:\n ");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%.1f ",a[i][j]+b[i][j]);
		}

		printf("\n");
	}


	return 0;
}


