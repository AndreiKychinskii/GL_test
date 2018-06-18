/*
 * FSM.c
 *
 *  Created on: Jun 16, 2018
 *      Author: A
 */

#include "FSM.h"
#include "messages.h"
#include <stdint.h>

uint8_t FSM_State;

void InitFSM( void ){
	FSM_State = OFF;
}

void ProcessFSM( void ){

	switch( FSM_State ){

	case OFF:
		printf("\nFSM_State is OFF\n");

		if( GetMessage( SWITCH_ON_MESSAGE ) ){
			printf("FSM: I have got SWITCH_ON_MESSAGE\n");
			FSM_State = ON;
		}

		break;

	case ON:
		printf("\nFSM_State is ON\n");

		if( GetMessage( SWITCH_OFF_MESSAGE ) ){
			printf("FSM: I have got SWITCH_OFF_MESSAGE\n");
			FSM_State = OFF;
		}
		if( GetMessage( HEAT_UP_MESSAGE ) ){
			printf("FSM: I have got HEAT_UP_MESSAGE\n");
			FSM_State = ESPRESSO_READY;
		}

		break;

	case ESPRESSO_READY:
		printf("\nFSM_State is ESPRESSO_READY\n");

		if( GetMessage( SWITCH_OFF_MESSAGE ) ){
			printf("FSM: I have got SWITCH_OFF_MESSAGE\n");
			FSM_State = OFF;
		}
		if( GetMessage( ESPRESSO_ON_MESSAGE ) ){
			printf("FSM: I have got ESPRESSO_ON_MESSAGE\n");
			FSM_State = MAKE_ESPRESSO;
		}
		if( GetMessage( STEAM_ON_MESSAGE ) ){
			printf("FSM: I have got STEAM_ON_MESSAGE\n");
			FSM_State = STEAMER_READY;
		}

		break;

	case MAKE_ESPRESSO:
		printf("\nFSM_State is MAKE_ESPRESSO\n");
		if( GetMessage( ESPRESSO_OFF_MESSAGE ) ){
			printf("FSM: I have got ESPRESSO_OFF_MESSAGE\n");
			FSM_State = ESPRESSO_READY;
		}
		break;

	case STEAMER_READY:
		printf("\nFSM_State is STEAMER_READY\n");

		if( GetMessage( SWITCH_OFF_MESSAGE ) ){
			printf("FSM: I have got SWITCH_OFF_MESSAGE\n");
			FSM_State = OFF;
		}
		if( GetMessage( STEAM_OFF_MESSAGE ) ){
			printf("FSM: I have got STEAM_OFF_MESSAGE\n");
			FSM_State = ESPRESSO_READY;
		}
		if( GetMessage( STEAM_KNOB_FORWARD_MESSAGE ) ){
			printf("FSM: I have got STEAM_KNOB_FORWARD_MESSAGE\n");
			FSM_State = MAKE_STEAM;
		}

		break;

	case MAKE_STEAM:
		printf("\nFSM_State is MAKE_STEAM\n");

		if( GetMessage( STEAM_KNOB_BACKWARD_MESSAGE ) ){
			printf("FSM: I have got STEAM_KNOB_BACKWARD_MESSAGE\n");
			FSM_State = STEAMER_READY;
		}

		break;

	default:
		// go to OFF
		break;
	}

}
