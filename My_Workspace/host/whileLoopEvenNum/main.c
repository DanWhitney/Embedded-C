/*
 * main.c
 *
 *  Created on: 9 Mar 2022
 *      Author: dwhitney
 */

#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

void wait_for_user_input(void);

int main(void)
{
	uint32_t startnum;
	uint32_t endnum;

	printf("Even numbers between to numbers\n");
	printf("Enter start and end number (give space between 2 nos):");
	scanf("%" SCNd32 " %" SCNd32 ,&startnum, &endnum);
	fflush(stdout);


	printf("Even numbers between %d and %d", startnum, endnum);

	printf("\n");

	uint8_t temp = 0;

	uint8_t evenNumberCount = 0;

	while(temp <= (endnum - startnum)) {

		if (((startnum + temp) & 0x1) == 0x0) {
			printf("%"PRId8"\n",startnum + temp);
			evenNumberCount++;
		}


		temp++;
	}

	printf("There was %"PRId8" even numbers\n", evenNumberCount);

	wait_for_user_input();
}

void wait_for_user_input(void) {
	printf("Press enter key to exit application \n");

	while(getchar() != '\n')
	{

	}

	getchar();

}

