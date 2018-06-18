/*
 ============================================================================
 Name        : GL_CoffeeMachine_FSM.c
 Author      : A
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "messages.h"
#include "FSM.h"

extern uint8_t FSM_State;

int main(void) {

	InitFSM();
	InitMessages();

	for( ;; ){

		// Here we can work with FSM: send different messages from interruptions
		// or from other periphery:
		// in the end of the cycle we need to call ProcessMessages()

		/*
		 ProcessFSM();

		  if( Button_start_is_Pressed ){
			SendMessage( SWITCH_ON_MESSAGE );
		  }

		  ProcessMessages();

		*/

	}

	return 0;
}
