/*
 * main.c
 *
 *  Created on: 2 Mar 2022
 *      Author: dwhitney
 */

#include <stdio.h>

int main(void)
{
	char char1, char2, char3, char4, char5, char6;

	printf("Enter 6 characters of your choice: ");
	scanf("%c %c %c %c %c %c", &char1, &char2, &char3, &char4, &char5, &char6);

	printf("ASCII codes: %d, %d, %d, %d, %d, %d\n", char1, char2, char3, char4, char5, char6);
	fflush(stdout);

	printf("Press enter key to exit application \n");

	while(getchar() != '\n')
	{

	}


	getchar();
}
