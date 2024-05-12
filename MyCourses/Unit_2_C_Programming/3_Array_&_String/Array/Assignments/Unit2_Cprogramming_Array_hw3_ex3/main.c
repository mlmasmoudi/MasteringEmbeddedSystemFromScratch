/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to enter a matrix (size defined by user) and finds the transpose
 */

#include "stdio.h"

int main()
{
	int r,c;
	int arr[50][50];
	int i,j;

	printf("Enter rows and column number of matrix:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&r,&c);

	printf("\nEnter matrix element:\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("Enter element a%d%d: ", i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\nThe entered Matrix:\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d  ",arr[i][j]);
		}

		printf("\n\n");
	}

	printf("\nThe Transpose of Matrix:\n");
	for (i=0;i<c;i++)
	{
		for (j=0;j<r;j++)
		{
			printf("%d  ",arr[j][i]);
		}

		printf("\n\n");
	}



	return 0;
}


