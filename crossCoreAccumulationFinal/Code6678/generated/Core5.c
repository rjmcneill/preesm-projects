/** 
 * @file Core5.c
 * @generated by C6678CPrinter
 * @date Wed Feb 25 20:45:36 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char SharedMem[131520]; //  size:= 131520*char
extern long *const init_out__runningTotal__1;  // accumulateMatrices_4_init_runningTotal_init_out > accumulateMatrices_4_runningTotal size:= 512*long defined in Core0
extern char *const accumulateMatrices_4_init_ru__0;  // accumulateMatrices_4_init_runningTotal > accumulateMatrices_4 size:= 2048*char defined in Core0
extern char *const accumulateMatrices_7_init_ru__0;  // accumulateMatrices_7_init_runningTotal > accumulateMatrices_7 size:= 2048*char defined in Core0
extern char *const explode_generateMatrices_sta__2;  // explode_generateMatrices_startArray > accumulateMatrices_7 size:= 2048*char defined in Core0
extern long *const init_out__runningTotal__2;  // accumulateMatrices_7_init_runningTotal_init_out > accumulateMatrices_7_runningTotal size:= 512*long defined in Core0
extern long *const startArray_3584__inputArray__0;  // explode_generateMatrices_startArray_startArray_3584 > accumulateMatrices_7_inputArray size:= 512*long defined in Core0
extern long *const output__input_3584__0;  // accumulateMatrices_7_output > implode_broadcastOutput_input_input_3584 size:= 512*long defined in Core0
extern char *const accumulateMatrices_7__implod__0;  // accumulateMatrices_7 > implode_broadcastOutput_input size:= 2048*char defined in Core0
extern char *const broadcastOutput__broadcastOu__0;  // broadcastOutput > broadcastOutput_end_output1_1024 size:= 2048*char defined in Core0
extern char *const FIFO_Head_broadcastOutput_en__6;  // FIFO_Head_broadcastOutput_end_output1_1024 > accumulateMatrices_2_init_runningTotal size:= 2048*char defined in Core2
extern long *const output1_1024__end_in__0;  // broadcastOutput_output1_1024 > broadcastOutput_end_output1_1024_end_in size:= 512*long defined in Core0

// Core Global Definitions
char *const FIFO_Head_broadcastOutput_en__0 = (char*) (SharedMem+0);  // FIFO_Head_broadcastOutput_end_output1_2048 > accumulateMatrices_4_init_runningTotal size:= 2048*char

void core5(void){
	// Initialisation(s)
	communicationInit();
	fifoInit(FIFO_Head_broadcastOutput_en__0, 2048*sizeof(char), NULL, 0);
	cache_wbInv(FIFO_Head_broadcastOutput_en__0, 2048*sizeof(char));

	// Begin the execution loop 
	while(1){
		busy_barrier();
		cache_inv(FIFO_Head_broadcastOutput_en__0, 2048*sizeof(char));
		fifoPop(init_out__runningTotal__1, FIFO_Head_broadcastOutput_en__0, 2048*sizeof(char), NULL, 0);
		cache_wbInv(accumulateMatrices_4_init_ru__0, 2048*sizeof(char));
		sendStart(0); // Core5 > Core0: accumulateMatrices_4_init_ru__0 
		sendEnd(); // Core5 > Core0: accumulateMatrices_4_init_ru__0 
		receiveStart(); // Core4 > Core5: accumulateMatrices_7_init_ru__0 
		receiveEnd(4); // Core4 > Core5: accumulateMatrices_7_init_ru__0 
		cache_inv(accumulateMatrices_7_init_ru__0, 2048*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateMatrices_sta__2 
		receiveEnd(7); // Core7 > Core5: explode_generateMatrices_sta__2 
		cache_inv(explode_generateMatrices_sta__2, 2048*sizeof(char));
		add(64/*rows*/,64/*columns*/,init_out__runningTotal__2,startArray_3584__inputArray__0,output__input_3584__0); // accumulateMatrices_7
		cache_inv(init_out__runningTotal__2, 512*sizeof(long));
		cache_inv(startArray_3584__inputArray__0, 512*sizeof(long));
		cache_wbInv(accumulateMatrices_7__implod__0, 2048*sizeof(char));
		sendStart(7); // Core5 > Core7: accumulateMatrices_7__implod__0 
		sendEnd(); // Core5 > Core7: accumulateMatrices_7__implod__0 
		receiveStart(); // Core7 > Core5: broadcastOutput__broadcastOu__0 
		receiveEnd(7); // Core7 > Core5: broadcastOutput__broadcastOu__0 
		cache_inv(broadcastOutput__broadcastOu__0, 2048*sizeof(char));
		fifoPush(output1_1024__end_in__0, FIFO_Head_broadcastOutput_en__6, 2048*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__6, 2048*sizeof(char));
		cache_inv(output1_1024__end_in__0, 512*sizeof(long));
	}
}
