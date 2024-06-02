/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: write a C function to print the last occurence of a number
 */


#include <stdio.h>

/*---------------------------------------------*/
/*------------ Function Declaration -----------*/
/*---------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>

int lastOccurrence (int array[],int size, int numbertofind);
int main()
{
	int numbersArray[20], numberToFind, numberOfElements, i;

	printf("Please enter the number of elements of the array:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&numberOfElements);

	printf("Please enter the elements of the array:");
	fflush(stdout); fflush(stdin);
	for(i=0;i<numberOfElements;i++)
	{
		fflush(stdout);
		scanf("%d",&numbersArray[i]);
	}

	printf("Please enter the number you want to get its last occurrence:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&numberToFind);

	printf("Last occurrence of %d is at index %d.",numberToFind,lastOccurrence(numbersArray,numberOfElements,numberToFind));

	return 0;
}/* End of Main Function */


int lastOccurrence (int array[],int size, int numbertofind)
{
	int i;
	for(i=size-1; i>=0;i--)
	{
		if(numbertofind==array[i])
			return i+1;
	}
	return -1;
}

