/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C Program to Find ASCII Value of a Character
 */

#include "stdio.h"

int main()
{
	char a;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &a);
	printf("ASCII value of %d \n",a);
	return 0;
}

