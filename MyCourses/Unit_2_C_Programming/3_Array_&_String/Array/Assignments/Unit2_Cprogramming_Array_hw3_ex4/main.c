/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to insert an element in an array
 */

#include "stdio.h"

int main()
{
	int elem,insert,location;
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

	printf("\nEnter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&insert);

	printf("\nEnter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);

	for (i=elem-1;i>0;i--)
	{
		if ((i+1)==location)
		{
			arr[i+1]=arr[i];
			arr[i]=insert;
		break;
		}
		else
			arr[i+1]=arr[i];
	}


	printf("\n");
	for (i=0;i<elem+1;i++)
	{
		printf("%d  ",arr[i]);
	}





	return 0;
}


