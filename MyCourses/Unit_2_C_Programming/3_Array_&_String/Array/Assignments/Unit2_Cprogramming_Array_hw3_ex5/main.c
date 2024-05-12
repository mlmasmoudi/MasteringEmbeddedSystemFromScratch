

/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to search an element in array
 */

#include "stdio.h"

int main()
{
	int elem,search;
	int location=-1;
	int arr[50];
	int i;

	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&elem);

	for (i=0;i<elem;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d", &arr[i]);
	}

	printf("\nEnter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&search);

	for (i=0;i<elem-1;i++)
	{
		if (arr[i]==search)
		{
			location = i+1;
			printf("\nNumber found at location = %d ", location);
			break;
		}
	}

	if (location == -1)
		printf("\nNumber not found in the array");




	return 0;
}




