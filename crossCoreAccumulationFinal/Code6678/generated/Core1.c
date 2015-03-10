/** 
 * @file Core1.c
 * @generated by C6678CPrinter
 * @date Thu Feb 26 22:24:25 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const accumulateMatrices_3_init_ru__0;  // accumulateMatrices_3_init_runningTotal > accumulateMatrices_3 size:= 8192*char defined in Core0
extern char *const explode_generateMatrices_sta__1;  // explode_generateMatrices_startArray > accumulateMatrices_3 size:= 8192*char defined in Core0
extern long *const init_out__runningTotal__1;  // accumulateMatrices_3_init_runningTotal_init_out > accumulateMatrices_3_runningTotal size:= 2048*long defined in Core0
extern long *const startArray_6144__inputArray__0;  // explode_generateMatrices_startArray_startArray_6144 > accumulateMatrices_3_inputArray size:= 2048*long defined in Core0
extern long *const output__input_6144__0;  // accumulateMatrices_3_output > implode_broadcastOutput_input_input_6144 size:= 2048*long defined in Core0
extern char *const accumulateMatrices_3__implod__0;  // accumulateMatrices_3 > implode_broadcastOutput_input size:= 8192*char defined in Core0
extern char *const broadcastOutput__broadcastOu__6;  // broadcastOutput > broadcastOutput_end_output1_14336 size:= 8192*char defined in Core0
extern char *const FIFO_Head_broadcastOutput_en__0;  // FIFO_Head_broadcastOutput_end_output1_14336 > accumulateMatrices_7_init_runningTotal size:= 8192*char defined in Core5
extern long *const output1_14336__end_in__0;  // broadcastOutput_output1_14336 > broadcastOutput_end_output1_14336_end_in size:= 2048*long defined in Core0

// Core Global Definitions

void core1(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core3 > Core1: accumulateMatrices_3_init_ru__0 
		receiveEnd(3); // Core3 > Core1: accumulateMatrices_3_init_ru__0 
		cache_inv(accumulateMatrices_3_init_ru__0, 8192*sizeof(char));
		receiveStart(); // Core0 > Core1: explode_generateMatrices_sta__1 
		receiveEnd(0); // Core0 > Core1: explode_generateMatrices_sta__1 
		cache_inv(explode_generateMatrices_sta__1, 8192*sizeof(char));
		add(128/*rows*/,128/*columns*/,init_out__runningTotal__1,startArray_6144__inputArray__0,output__input_6144__0); // accumulateMatrices_3
		cache_inv(init_out__runningTotal__1, 2048*sizeof(long));
		cache_inv(startArray_6144__inputArray__0, 2048*sizeof(long));
		cache_wbInv(accumulateMatrices_3__implod__0, 8192*sizeof(char));
		sendStart(7); // Core1 > Core7: accumulateMatrices_3__implod__0 
		sendEnd(); // Core1 > Core7: accumulateMatrices_3__implod__0 
		receiveStart(); // Core7 > Core1: broadcastOutput__broadcastOu__6 
		receiveEnd(7); // Core7 > Core1: broadcastOutput__broadcastOu__6 
		cache_inv(broadcastOutput__broadcastOu__6, 8192*sizeof(char));
		fifoPush(output1_14336__end_in__0, FIFO_Head_broadcastOutput_en__0, 8192*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__0, 8192*sizeof(char));
		cache_inv(output1_14336__end_in__0, 2048*sizeof(long));
	}
}