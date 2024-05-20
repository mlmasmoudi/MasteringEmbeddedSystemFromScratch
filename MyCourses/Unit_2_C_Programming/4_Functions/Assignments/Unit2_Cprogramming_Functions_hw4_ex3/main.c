/*
 * main.c
 *
 *  Created on: 20 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Reverse a sentence using recursion
 */

#include "stdio.h"
#include <string.h>

void SenRev();

int main()
{

	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	/*scanf("%c",&sent);*/
	SenRev();

	return 0;
}

void SenRev()
{
	char sent;
	scanf("%c",&sent);
	if(sent != '\n')
	{
		SenRev();
		printf("%c",sent);
	}

}


