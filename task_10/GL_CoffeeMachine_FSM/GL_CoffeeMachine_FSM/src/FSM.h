/*
 * FSM.h
 *
 *  Created on: Jun 16, 2018
 *      Author: A
 */

#ifndef FSM_H_
#define FSM_H_

#define OFF 0
#define ON 1
#define ESPRESSO_READY 2
#define MAKE_ESPRESSO 3
#define STEAMER_READY 4
#define MAKE_STEAM 5

void InitFSM( void );
void ProcessFSM( void );

#endif /* FSM_H_ */
