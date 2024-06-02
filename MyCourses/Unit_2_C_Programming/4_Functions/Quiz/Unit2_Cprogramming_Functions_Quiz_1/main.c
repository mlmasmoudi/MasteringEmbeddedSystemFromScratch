/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: C program Takes String From The User and Checks if it's Same Username or Not
 */

#include <stdio.h>
#include <string.h>

/* Main Function */
int main()
{
	char array1[100], array2[100]; /* declaring the required arrays one for the string and the other for the user name */
	int test;	/* declaring result variable to contain the result of comparing presses */

	/* Asking the user to enter the string */
	printf("Enter a string : ");
	fflush(stdout);
	gets(array1);

	/* Asking the user to enter his user-name */
	printf("Enter your username : ");
	fflush(stdout);
	gets(array2);

	/* Comparing process using "stricmp" from string.h library */
	test = stricmp(array1, array2); /* Comparing with neglect the capital or small character */

	/* Checking and print the result of comparing process */
	if (test == 0)
		printf("Identical");
	else
		printf("Different");

	return 0;
}/* End of Main Function */

