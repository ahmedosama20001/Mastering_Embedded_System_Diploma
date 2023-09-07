/*
 * state.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */


#ifndef STATE_H_
#define STATE_H_

/* Automatic State Function Generated*/
#define STATE_define(_statFUN_) void ST_##_statFUN_()
#define STATE(_statFUN_) ST_##_statFUN_

/*States connections */
void US_Set_distance(int d);
void DC_motor (int s);

#endif /* STATE_H_ */
