/*
 * messages.h
 *
 *  Created on: Jun 16, 2018
 *      Author: A
 */

#ifndef MESSAGES_H_
#define MESSAGES_H_

#define MAX_MESSAGES 64

#define SWITCH_ON_MESSAGE 0
#define SWITCH_OFF_MESSAGE 1
#define HEAT_UP_MESSAGE 2
#define ESPRESSO_ON_MESSAGE 3
#define STEAM_ON_MESSAGE 4
#define ESPRESSO_OFF_MESSAGE 5
#define STEAM_OFF_MESSAGE 6
#define STEAM_KNOB_FORWARD_MESSAGE 7
#define STEAM_KNOB_BACKWARD_MESSAGE 8


#include "stdint.h"

void InitMessages(void);
void SendMessage( uint8_t message );
uint8_t GetMessage( uint8_t message );
void ProcessMessages(void);

#endif /* MESSAGES_H_ */
