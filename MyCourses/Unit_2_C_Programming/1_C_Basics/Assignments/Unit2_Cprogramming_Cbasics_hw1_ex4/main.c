/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment:  Write C Program to Multiply two Floating Point Numbers
 */

#include "stdio.h"

int main()
{
	float a,b;
	printf("Enter 2 numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&a, &b);
	printf("Sum :%f \n",a*b);
	return 0;
}


