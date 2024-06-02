/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: C program to check if a given number is a power of 3
 */


#include <stdio.h>

/*---------------------------------------------*/
/*------------ Function Declaration -----------*/
/*---------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>

int isPowerOfThree(int n)
{
	if (n <= 0)
		return 0;
	if (n % 3 == 0)
		return isPowerOfThree(n / 3);
	if (n == 1)
		return 1;
	return 0;
}


int main()
{
	int number;

	printf("Enter a number:\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&number);

	if(isPowerOfThree(number))
		printf("%d ==> 0",number);
	else
		printf("%d ==> 1",number);

	return 0;
}/* End of Main Function */

