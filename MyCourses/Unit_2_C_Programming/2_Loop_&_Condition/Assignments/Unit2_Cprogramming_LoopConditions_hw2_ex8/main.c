/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to make a simple calculator to add, subtract, multiply or divide using switch case
 */

#include "stdio.h"

int main()
{
	char a;
	float b,c;
	printf("Enter an operator either \"+\" or \"-\" or \"*\" or \"/\" : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c %f %f", &a, &b, &c);

	switch(a)
	{

	case '+':
		printf("%.1f + %.1f = %.1f ",b,c,b+c);
		break;

	case '-':
		printf("%.1f + %.1f = %.1f ",b,c,b-c);
		break;

	case '*':
		printf("%.1f + %.1f = %.1f ",b,c,b*c);
		break;

	case '/':
		printf("%.1f + %.1f = %.1f ",b,c,b/c);
		break;

	default:
		printf("%c is not an operator.",a);
	}

	return 0;
}


