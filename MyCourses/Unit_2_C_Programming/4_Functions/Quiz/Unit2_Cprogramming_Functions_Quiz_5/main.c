/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: write z C function that clears bit in a given number
 */


#include <stdio.h>

/*---------------------------------------------*/
/*------------ Function Declaration -----------*/
/*---------------------------------------------*/

int clearBit(int n, int bit);


/* Main Function */
int main()
{
	int n,bit;
		printf("Input Number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
		printf("Bit position: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&bit);
		printf("Result = %d", clearBit(n,bit));
	return 0;
}/* End of Main Function */

/*---------------------------------------------*/
/*------------- Function Definition -----------*/
/*---------------------------------------------*/

int clearBit(int n, int bit)
{
	return n &= ~(1<< bit);
}
