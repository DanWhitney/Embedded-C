/*
 * main.c
 *
 *  Created on: 1 Mar 2022
 *      Author: dwhitney
 */


#include <stdio.h>

int main(void)
{
	float number1, number2, number3;
	float average;


	printf("Enter first number: ");
	fflush(stdout);
	scanf("%f", &number1);

	printf("\nEnter second number: ");
	fflush(stdout);
	scanf("%f", &number2);

	printf("\nEnter third number: ");
	fflush(stdout);
	scanf("%f", &number3);

	average = (number1 + number2 + number3) / 3;

	printf("\nAverage: %f\n",average);
	fflush(stdout);

	printf("Press enter key to exit application \n");

	while(getchar() != '\n')
	{

	}


	getchar();
}

