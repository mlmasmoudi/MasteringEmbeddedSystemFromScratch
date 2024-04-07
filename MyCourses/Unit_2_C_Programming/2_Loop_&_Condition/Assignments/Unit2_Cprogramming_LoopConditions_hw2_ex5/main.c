/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: C program to check whether a character is an alphabet or not
 */

#include "stdio.h"

int main()
{
	int i;
	for(i=1;i<=2;i++)
	{
		char a;
		printf("\n\nEnter a character: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &a);

		if((a>='a' && a<='z')||(a>='A' && a<='Z'))
		{
			printf("%c is an alphabet.",a);
		}
		else
		{
			printf("%c is not an alphabet.",a);
		}
	}
	return 0;
}


