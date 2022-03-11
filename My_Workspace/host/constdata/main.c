/*
 * main.c
 *
 *  Created on: 10 Mar 2022
 *      Author: dwhitney
 */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint8_t const data = 10;


int main(void)
{

	uint8_t* ptr = (uint8_t *) &data;

	*ptr = 50;

	printf("Value = %"PRId8, data);

	getchar();


}

// Case1: Constant data
uint8_t const data= 50;

// Case2: Modifiable pointer and constant data
uint8_t const *pData = (uint8_t*) 0x40000000;

// Case3: Modifiable data and constant pointer
uint8_t *const pData = (uint8_t*) 0x40000000;

// Case4: constant data and constant pointer
uint8_t const *const pData = (uint8_t*) 0x40000000;



