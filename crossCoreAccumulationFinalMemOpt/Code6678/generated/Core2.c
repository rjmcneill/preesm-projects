/** 
 * @file Core2.c
 * @generated by C6678CPrinter
 * @date Thu Feb 26 21:20:58 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const accumulateMatrices_2_init_ru__0;  // accumulateMatrices_2_init_runningTotal > accumulateMatrices_2 size:= 2048*char defined in Core0
extern char SharedMem[131520]; //  size:= 131520*char
extern long *const init_out__runningTotal__2;  // accumulateMatrices_7_init_runningTotal_init_out > accumulateMatrices_7_runningTotal size:= 512*long defined in Core0
extern char *const accumulateMatrices_7_init_ru__0;  // accumulateMatrices_7_init_runningTotal > accumulateMatrices_7 size:= 2048*char defined in Core0
extern char *const explode_generateMatrices_sta__1;  // explode_generateMatrices_startArray > accumulateMatrices_2 size:= 2048*char defined in Core0
extern long *const init_out__runningTotal__0;  // accumulateMatrices_2_init_runningTotal_init_out > accumulateMatrices_2_runningTotal size:= 512*long defined in Core0
extern long *const startArray_1024__inputArray__0;  // explode_generateMatrices_startArray_startArray_1024 > accumulateMatrices_2_inputArray size:= 512*long defined in Core0
extern long *const output__input_1024__0;  // accumulateMatrices_2_output > implode_broadcastOutput_input_input_1024 size:= 512*long defined in Core0
extern char *const accumulateMatrices_2__implod__0;  // accumulateMatrices_2 > implode_broadcastOutput_input size:= 2048*char defined in Core0
extern char *const broadcastOutput__broadcastOu__2;  // broadcastOutput > broadcastOutput_end_output1_1536 size:= 2048*char defined in Core0
extern char *const FIFO_Head_broadcastOutput_en__7;  // FIFO_Head_broadcastOutput_end_output1_1536 > accumulateMatrices_3_init_runningTotal size:= 2048*char defined in Core0
extern long *const output1_1536__end_in__0;  // broadcastOutput_output1_1536 > broadcastOutput_end_output1_1536_end_in size:= 512*long defined in Core0

// Core Global Definitions
char *const FIFO_Head_broadcastOutput_en__4 = (char*) (SharedMem+67648);  // FIFO_Head_broadcastOutput_end_output1_3584 > accumulateMatrices_7_init_runningTotal size:= 2048*char

void core2(void){
	// Initialisation(s)
	communicationInit();
	fifoInit(FIFO_Head_broadcastOutput_en__4, 2048*sizeof(char), NULL, 0);
	cache_wbInv(FIFO_Head_broadcastOutput_en__4, 2048*sizeof(char));

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core4 > Core2: accumulateMatrices_2_init_ru__0 
		receiveEnd(4); // Core4 > Core2: accumulateMatrices_2_init_ru__0 
		cache_inv(accumulateMatrices_2_init_ru__0, 2048*sizeof(char));
		cache_inv(FIFO_Head_broadcastOutput_en__4, 2048*sizeof(char));
		fifoPop(init_out__runningTotal__2, FIFO_Head_broadcastOutput_en__4, 2048*sizeof(char), NULL, 0);
		cache_wbInv(accumulateMatrices_7_init_ru__0, 2048*sizeof(char));
		sendStart(5); // Core2 > Core5: accumulateMatrices_7_init_ru__0 
		sendEnd(); // Core2 > Core5: accumulateMatrices_7_init_ru__0 
		receiveStart(); // Core7 > Core2: explode_generateMatrices_sta__1 
		receiveEnd(7); // Core7 > Core2: explode_generateMatrices_sta__1 
		cache_inv(explode_generateMatrices_sta__1, 2048*sizeof(char));
		add(64/*rows*/,64/*columns*/,init_out__runningTotal__0,startArray_1024__inputArray__0,output__input_1024__0); // accumulateMatrices_2
		cache_inv(init_out__runningTotal__0, 512*sizeof(long));
		cache_inv(startArray_1024__inputArray__0, 512*sizeof(long));
		cache_wbInv(accumulateMatrices_2__implod__0, 2048*sizeof(char));
		sendStart(7); // Core2 > Core7: accumulateMatrices_2__implod__0 
		sendEnd(); // Core2 > Core7: accumulateMatrices_2__implod__0 
		receiveStart(); // Core7 > Core2: broadcastOutput__broadcastOu__2 
		receiveEnd(7); // Core7 > Core2: broadcastOutput__broadcastOu__2 
		cache_inv(broadcastOutput__broadcastOu__2, 2048*sizeof(char));
		fifoPush(output1_1536__end_in__0, FIFO_Head_broadcastOutput_en__7, 2048*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__7, 2048*sizeof(char));
		cache_inv(output1_1536__end_in__0, 512*sizeof(long));
	}
}
