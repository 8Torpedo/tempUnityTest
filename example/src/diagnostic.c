/*
 * diagnostic.c
 *
 *  Created on: 3 cze 2016
 *      Author: ciokb
 */

#include "diagnostic.h"

enum {LED_RED, LED_GREEN, LED_BLUE};

void showTempChange(const uint8_t tempPrev, const uint8_t temp){

	if(tempPrev==temp){
		Board_LED_Set(LED_GREEN,TRUE);
		Board_LED_Set(LED_BLUE,FALSE);
		Board_LED_Set(LED_RED,FALSE);
	}
	else if(tempPrev>temp){
		Board_LED_Set(LED_BLUE,TRUE);
		Board_LED_Set(LED_GREEN,FALSE);
		Board_LED_Set(LED_RED,FALSE);
	}
	else if(tempPrev<temp){
		Board_LED_Set(LED_RED, TRUE);
		Board_LED_Set(LED_BLUE,FALSE);
		Board_LED_Set(LED_GREEN,FALSE);
	}
}





