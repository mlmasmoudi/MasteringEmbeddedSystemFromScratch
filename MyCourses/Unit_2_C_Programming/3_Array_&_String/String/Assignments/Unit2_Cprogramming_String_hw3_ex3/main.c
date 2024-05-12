/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to reverse string
 */

#include "stdio.h"
#include <string.h>

int main()
{
	char phrase[50];
	char phraseInv[50];
	int taille;
	int i;

	printf("Enter the string : ");
	fflush(stdin);
	fflush(stdout);
	gets(phrase);

	taille = strlen(phrase);

	for (i=0;i<=taille-1;i++)
	{
		phraseInv[i]=phrase[taille-1-i];

	}

	phraseInv[taille]='\0';

	printf("\nReverse string is: %s",phraseInv);

	return 0;
}

