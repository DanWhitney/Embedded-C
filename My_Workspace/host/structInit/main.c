/*
 * main.c
 *
 *  Created on: 13 Mar 2022
 *      Author: Daniel
 */


#include<stdint.h>
#include<stdio.h>

struct carModel
{
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void) {

	struct carModel carBMW = {2021, 15000, 220, 1330};
	struct carModel carFord = {4031, 35000, 160, 1900.96};

	struct carModel carHonda = {.carWeight = 90.90, .carPrice = 15000};


	printf("Details of car BMW ias")

	return 0;
}
