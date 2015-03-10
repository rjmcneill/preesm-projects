/** 
 * @file Core1.c
 * @generated by C6678CPrinter
 * @date Sat Feb 28 20:12:57 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char SharedMem[218104068]; //  size:= 218104068*char
extern long *const init_out__runningTotal__1;  // accumulateMatrices_2_init_runningTotal_init_out > accumulateMatrices_2_runningTotal size:= 2097152*long defined in Core0
extern char *const accumulateMatrices_2_init_ru__0;  // accumulateMatrices_2_init_runningTotal > accumulateMatrices_2 size:= 8388608*char defined in Core0
extern char *const accumulateMatrices_5_init_ru__0;  // accumulateMatrices_5_init_runningTotal > accumulateMatrices_5 size:= 8388608*char defined in Core0
extern char *const explode_generateMatrices_sta__3;  // explode_generateMatrices_startArray > accumulateMatrices_5 size:= 8388608*char defined in Core0
extern long *const init_out__runningTotal__0;  // accumulateMatrices_5_init_runningTotal_init_out > accumulateMatrices_5_runningTotal size:= 2097152*long defined in Core0
extern long *const startArray_10485760__inputAr__0;  // explode_generateMatrices_startArray_startArray_10485760 > accumulateMatrices_5_inputArray size:= 2097152*long defined in Core0
extern long *const output__input_10485760__0;  // accumulateMatrices_5_output > implode_broadcastOutput_input_input_10485760 size:= 2097152*long defined in Core0
extern char *const accumulateMatrices_5__implod__0;  // accumulateMatrices_5 > implode_broadcastOutput_input size:= 8388608*char defined in Core0
extern char *const broadcastOutput__broadcastOu__7;  // broadcastOutput > broadcastOutput_end_output1_4194304 size:= 8388608*char defined in Core0
extern long *const output1_4194304__end_in__0;  // broadcastOutput_output1_4194304 > broadcastOutput_end_output1_4194304_end_in size:= 2097152*long defined in Core0

// Core Global Definitions
char *const FIFO_Head_broadcastOutput_en__7 = (char*) (SharedMem+159383808);  // FIFO_Head_broadcastOutput_end_output1_4194304 > accumulateMatrices_2_init_runningTotal size:= 8388608*char

void core1(void){
	// Initialisation(s)
	communicationInit();
	fifoInit(FIFO_Head_broadcastOutput_en__7, 8388608*sizeof(char), NULL, 0);
	cache_wbInv(FIFO_Head_broadcastOutput_en__7, 8388608*sizeof(char));

	// Begin the execution loop 
	while(1){
		busy_barrier();
		cache_inv(FIFO_Head_broadcastOutput_en__7, 8388608*sizeof(char));
		fifoPop(init_out__runningTotal__1, FIFO_Head_broadcastOutput_en__7, 8388608*sizeof(char), NULL, 0);
		cache_wbInv(accumulateMatrices_2_init_ru__0, 8388608*sizeof(char));
		sendStart(4); // Core1 > Core4: accumulateMatrices_2_init_ru__0 
		sendEnd(); // Core1 > Core4: accumulateMatrices_2_init_ru__0 
		receiveStart(); // Core6 > Core1: accumulateMatrices_5_init_ru__0 
		receiveEnd(6); // Core6 > Core1: accumulateMatrices_5_init_ru__0 
		cache_inv(accumulateMatrices_5_init_ru__0, 8388608*sizeof(char));
		receiveStart(); // Core0 > Core1: explode_generateMatrices_sta__3 
		receiveEnd(0); // Core0 > Core1: explode_generateMatrices_sta__3 
		cache_inv(explode_generateMatrices_sta__3, 8388608*sizeof(char));
		add(4096/*rows*/,4096/*columns*/,init_out__runningTotal__0,startArray_10485760__inputAr__0,output__input_10485760__0); // accumulateMatrices_5
		cache_inv(init_out__runningTotal__0, 2097152*sizeof(long));
		cache_inv(startArray_10485760__inputAr__0, 2097152*sizeof(long));
		cache_wbInv(accumulateMatrices_5__implod__0, 8388608*sizeof(char));
		sendStart(7); // Core1 > Core7: accumulateMatrices_5__implod__0 
		sendEnd(); // Core1 > Core7: accumulateMatrices_5__implod__0 
		receiveStart(); // Core7 > Core1: broadcastOutput__broadcastOu__7 
		receiveEnd(7); // Core7 > Core1: broadcastOutput__broadcastOu__7 
		cache_inv(broadcastOutput__broadcastOu__7, 8388608*sizeof(char));
		fifoPush(output1_4194304__end_in__0, FIFO_Head_broadcastOutput_en__7, 8388608*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__7, 8388608*sizeof(char));
		cache_inv(output1_4194304__end_in__0, 2097152*sizeof(long));
	}
}
