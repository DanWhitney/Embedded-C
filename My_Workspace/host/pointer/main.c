/*
 * main.c
 *
 *  Created on: 2 Mar 2022
 *      Author: dwhitney
 */

#include <stdio.h>

int main(void)
{

	//0x00007FFF8E3C3824

	//long long int someAddress = 0x00007FFF8E3C3824;

	char temp = 100;

	char* tempAddress = &temp;

	printf("Address of temp: %p\n", tempAddress);

	char temp1 = *tempAddress;

	printf("Data from address %p is %c %d\n", tempAddress, temp1, temp1);

	*tempAddress = 65;

	//char* address1 = (char*) 0x00007FFF8E3C3824;

	printf("temp: %c\n", temp);

	printf("Press enter key to exit application \n");

	while(getchar() != '\n')
	{

	}


	getchar();
}
