/*
 * main.c
 *
 *  Created on: 11 May. 2024
 *      Author: Mohamed Lamine Masmoudi
 *      Assignment: Write C program to swap 2 arrays with different lengths
 */

#include <stdio.h>

/* Pre-processing part */



/*-----------------------------------------------------*/
/*----------------Function Deceleration----------------*/
/*-----------------------------------------------------*/

void inputArray(int arr[], int size);	/* Function to input the array elements */
void printArray(int arr[], int size);	/* Function to print the array elements */
void swapArray(int firstArray[], int secondArray[]);	/* Function to swap the elements of the array */


/* Main Function */
int main()
{
	int firstArray[50];
	int secondArray[50];
	int sizeOfFirstArray, sizeOfSecondArray;

	/* Asking the user to input the size of the first array and store it*/
	printf("Enter size of First array (max 100) : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&sizeOfFirstArray);

	/* Asking the user to input the size of the second array and store it*/
	printf("Enter size of Second array (max 100) : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&sizeOfSecondArray);

	/* Asking the user to input the elements of the first array */
	printf("Enter %d elements in first array: ",sizeOfFirstArray);
	fflush(stdout); fflush(stdin);
	inputArray(firstArray, sizeOfFirstArray);

	/* Asking the user to input the elements of the second array */
	printf("Enter %d elements in second array: ",sizeOfSecondArray);
	fflush(stdout); fflush(stdin);
	inputArray(secondArray, sizeOfSecondArray);


	/* Printing both arrays before swapping*/
	printf("\nFirst array before swapping: ");
	fflush(stdout);
	printArray(firstArray, sizeOfFirstArray);

	printf("\nSecond Array before swapping: ");
	fflush(stdout);
	printArray(secondArray, sizeOfSecondArray);

	/* swapping process */
	swapArray(firstArray, secondArray);

	/* Printing both arrays before swapping*/
	printf("\n\nFirst array after swapping: ");
	fflush(stdout);
	printArray(firstArray, sizeOfFirstArray);

	printf("\nSecond array after swapping: ");
	fflush(stdout);
	printArray(secondArray, sizeOfSecondArray);

	return 0;
}/* End of Main Function*/

/*-----------------------------------------------------*/
/*----------------Function Definitions-----------------*/
/*-----------------------------------------------------*/

void inputArray(int arr[], int size)
{
	int i;
	/* Taking the element one by one form the user */
	for (i = 0; i < size; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

/*-----------------------------------------------------*/

void printArray(int arr[], int size)
{
	int i;
	/* Print the element of array one by one */
	for (i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
}

/*-------------------------------------------*/

void swapArray(int firstArray[], int secondArray[])
{
	int i;
	int tempArray[50];
	for (i = 0; i < 50; ++i)
	{
		/* Write any swapping techniques */
		tempArray[i] = firstArray[i];
		firstArray[i] = secondArray[i];
		secondArray[i] = tempArray[i];
	}
}
