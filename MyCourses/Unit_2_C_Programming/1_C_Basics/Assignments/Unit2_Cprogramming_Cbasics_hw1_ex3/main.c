/*
 * main.c
 *
 *  Created on: 6 avr. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C Program to Add Two Integers
 */
#include "stdio.h"

int main()
{
	int a,b;
	printf("Enter 2 integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&a, &b);
	printf("Sum :%d \n",a+b);
	return 0;
}


