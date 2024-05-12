/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to find the length of string
 */

#include "stdio.h"
#include <string.h>

int main()
{
	char phrase[50];
	int i;
	int j=0;


	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(phrase);


	for (i=0;i<sizeof(phrase);i++)
	{
		if(phrase[i]== '\0')
			break;
		j=j+1;
	}

	printf("\nLength of string: %d", j);


	return 0;
}

