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
	uint8_t age;

	printf("Are you old enough to vote?\n");
	printf("How old are you?\n");
	printf("Please enter your age: ");
	scanf("%"SCNu8, &age);
	fflush(stdout);
	printf("You are ");
	if (age < 18) {
		printf("not ");
	}
	printf("eligible to vote\n\n");




	printf("Please push Enter to exit");
	while(getchar() != '\n')
	{

	}


	getchar();

	return 0;
}
