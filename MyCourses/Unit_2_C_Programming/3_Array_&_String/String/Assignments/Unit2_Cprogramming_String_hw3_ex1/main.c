/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to find the frequency of char in string
 */

#include "stdio.h"
#include <string.h>

int main()
{
	char elem;
	char phrase[50];
	int i;
	int j=0;
	int taille;

	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(phrase);

	taille = strlen(phrase);

	printf("\nEnter a character to find : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&elem);

	for (i=0;i<taille;i++)
	{
		if(phrase[i]==elem)
			j=j+1;
	}

	printf("\nFrequency of %c = %d ", elem,j);


	return 0;
}

