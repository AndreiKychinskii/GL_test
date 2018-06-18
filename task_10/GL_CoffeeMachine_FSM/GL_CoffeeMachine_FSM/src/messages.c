/*
 * messages.c
 *
 *  Created on: Jun 16, 2018
 *      Author: A
 */

/*
 * messages.c
 *
 *  Created on: Jun 16, 2018
 *      Author: A
 */

#include "messages.h"
#include <stdint.h>

uint8_t messages[ MAX_MESSAGES ];

void InitMessages(void){
	for( uint8_t i = 0; i < MAX_MESSAGES; i++ ){
		messages[ i ] = 0;
	}
}

void SendMessage( uint8_t message ){
	messages[ message ] = 1;
}

uint8_t GetMessage( uint8_t message ){
	if( messages[ message ] == 2){
		messages[ message ] = 0;
		return 1;
	}
	return 0;
}

void ProcessMessages(void){
	for( uint8_t i = 0; i < MAX_MESSAGES; i++ ){
		if( messages[i] == 2){
			 messages[i] = 0;
		}
		if( messages[i] == 1){
			 messages[i] = 2;
		}
	}
}
