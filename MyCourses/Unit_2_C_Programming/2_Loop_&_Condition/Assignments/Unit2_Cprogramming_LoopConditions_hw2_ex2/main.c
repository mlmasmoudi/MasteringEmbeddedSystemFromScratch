/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to check whether a number is Even or Odd
 */

#include "stdio.h"

int main()
{
	char a;
	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &a);

	switch(a)
	{

	case 'a':
	case 'A':
		printf("%c is a vowel.",a);
		break;

	case 'i':
	case 'I':
		printf("%c is a vowel.",a);
		break;

	case 'e':
	case 'E':
		printf("%c is a vowel.",a);
		break;

	case 'o':
	case 'O':
		printf("%c is a vowel.",a);
		break;

	case 'u':
	case 'U':
		printf("%c is a vowel.",a);
		break;

	default:
		printf("%c is a consonant.",a);
	}

	/* Second scan */

	printf("\n\nEnter an alphabet: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &a);

		switch(a)
		{

		case 'a':
		case 'A':
			printf("%c is a vowel.",a);
			break;

		case 'i':
		case 'I':
			printf("%c is a vowel.",a);
			break;

		case 'e':
		case 'E':
			printf("%c is a vowel.",a);
			break;

		case 'o':
		case 'O':
			printf("%c is a vowel.",a);
			break;

		case 'u':
		case 'U':
			printf("%c is a vowel.",a);
			break;

		default:
			printf("%c is a consonant.",a);
		}
	return 0;
}


