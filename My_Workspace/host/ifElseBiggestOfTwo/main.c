/*
 * castVote.c
 *
 *  Created on: 4 Mar 2022
 *      Author: dwhitney
 */


#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>



int main(void )
{
	int32_t number1;
	int32_t number2;

	printf("Display the greatest of two integers\n");
	printf("Enter first number (integer):");
	scanf("%"SCNi32, &number1);
	fflush(stdout);
	printf("\nEnter second number (integer):");
	scanf("%"SCNi32, &number2);
	fflush(stdout);

	if (number1 == number2) {
		printf("\nNumbers are equal");
	}
	else {
		if (number1 > number2) {
			printf("\n%"PRIi32 " is bigger",number1);
		}
		else {
			printf("\n%"PRIi32 " is bigger",number2);
		}
	}


	printf("\nPlease push Enter to exit");
	while(getchar() != '\n')
	{

	}


	getchar();

	return 0;
}
