/*
 * main.c
 *
 *  Created on: 1 Mar 2022
 *      Author: dwhitney
 */


#include<stdio.h>

int main(void)
{

	double chargeE = -1.60217662e-19;

	printf("chargeE = %0.28lf\n", chargeE);

	printf("chargeE = %0.8le\n", chargeE);
	printf("Press 'Enter' to exit this application\n");

	getchar();

	return 0;
}
