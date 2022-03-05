/*
 * pointer.c
 *
 *  Created on: 3 Mar 2022
 *      Author: dwhitney
 */


#include<stdio.h>


long long int g_data = 0xFFFEABCD11112345;

int main(void )
{
	short *pAddress1;

	pAddress1 = (short*) &g_data;
	printf("Value at pAddress1 %p\n", pAddress1);
	printf("Value at Address %p is %x\n", pAddress1, *pAddress1);

	pAddress1 = pAddress1 +1;
	printf("Value at pAddress1 %p\n", pAddress1);
	printf("Value at Address %p is %x\n", pAddress1, *pAddress1);


	while(getchar() != '\n')
	{

	}


	getchar();

	return 0;
}
