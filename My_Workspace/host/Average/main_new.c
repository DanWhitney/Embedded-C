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


	printf("Enter 3 numbers: ");
	scanf("%f %f %f", &number1, &number2, &number3);

	average = (number1 + number2 + number3) / 3;

	printf("\nAverage: %f\n",average);
	fflush(stdout);

	printf("Press enter key to exit application \n");

	while(getchar() != '\n')
	{

	}


	getchar();
}

