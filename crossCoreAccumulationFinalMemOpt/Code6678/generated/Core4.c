/** 
 * @file Core4.c
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
extern long *const init_out__runningTotal__7;  // accumulateMatrices_1_init_runningTotal_init_out > accumulateMatrices_1_runningTotal size:= 2097152*long defined in Core0
extern char *const accumulateMatrices_1_init_ru__0;  // accumulateMatrices_1_init_runningTotal > accumulateMatrices_1 size:= 8388608*char defined in Core0
extern char *const accumulateMatrices_2_init_ru__0;  // accumulateMatrices_2_init_runningTotal > accumulateMatrices_2 size:= 8388608*char defined in Core0
extern long *const init_out__countIn__0;  // displayMatrices_init_countIn_init_out > displayMatrices_countIn size:= 1*long defined in Core0
extern char *const displayMatrices_init_countIn__0;  // displayMatrices_init_countIn > displayMatrices size:= 4*char defined in Core0
extern char *const explode_generateMatrices_sta__2;  // explode_generateMatrices_startArray > accumulateMatrices_2 size:= 8388608*char defined in Core0
extern long *const init_out__runningTotal__1;  // accumulateMatrices_2_init_runningTotal_init_out > accumulateMatrices_2_runningTotal size:= 2097152*long defined in Core0
extern long *const startArray_4194304__inputArr__0;  // explode_generateMatrices_startArray_startArray_4194304 > accumulateMatrices_2_inputArray size:= 2097152*long defined in Core0
extern long *const output__input_4194304__0;  // accumulateMatrices_2_output > implode_broadcastOutput_input_input_4194304 size:= 2097152*long defined in Core0
extern char *const accumulateMatrices_2__implod__0;  // accumulateMatrices_2 > implode_broadcastOutput_input size:= 8388608*char defined in Core0
extern char *const broadcastOutput__broadcastOu__4;  // broadcastOutput > broadcastOutput_end_output1_6291456 size:= 8388608*char defined in Core0
extern char *const FIFO_Head_broadcastOutput_en__6;  // FIFO_Head_broadcastOutput_end_output1_6291456 > accumulateMatrices_3_init_runningTotal size:= 8388608*char defined in Core7
extern long *const output1_6291456__end_in__0;  // broadcastOutput_output1_6291456 > broadcastOutput_end_output1_6291456_end_in size:= 2097152*long defined in Core0

// Core Global Definitions
char *const FIFO_Head_broadcastOutput_en__3 = (char*) (SharedMem+150995200);  // FIFO_Head_broadcastOutput_end_output1_2097152 > accumulateMatrices_1_init_runningTotal size:= 8388608*char
char *const FIFO_Head_displayMatrices_en__0 = (char*) (SharedMem+67109056);  // FIFO_Head_displayMatrices_end_countOut > displayMatrices_init_countIn size:= 4*char

void core4(void){
	// Initialisation(s)
	communicationInit();
	fifoInit(FIFO_Head_broadcastOutput_en__3, 8388608*sizeof(char), NULL, 0);
	cache_wbInv(FIFO_Head_broadcastOutput_en__3, 8388608*sizeof(char));
	fifoInit(FIFO_Head_displayMatrices_en__0, 4*sizeof(char), NULL, 0);
	cache_wbInv(FIFO_Head_displayMatrices_en__0, 4*sizeof(char));

	// Begin the execution loop 
	while(1){
		busy_barrier();
		cache_inv(FIFO_Head_broadcastOutput_en__3, 8388608*sizeof(char));
		fifoPop(init_out__runningTotal__7, FIFO_Head_broadcastOutput_en__3, 8388608*sizeof(char), NULL, 0);
		cache_wbInv(accumulateMatrices_1_init_ru__0, 8388608*sizeof(char));
		sendStart(0); // Core4 > Core0: accumulateMatrices_1_init_ru__0 
		sendEnd(); // Core4 > Core0: accumulateMatrices_1_init_ru__0 
		receiveStart(); // Core1 > Core4: accumulateMatrices_2_init_ru__0 
		receiveEnd(1); // Core1 > Core4: accumulateMatrices_2_init_ru__0 
		cache_inv(accumulateMatrices_2_init_ru__0, 8388608*sizeof(char));
		cache_inv(FIFO_Head_displayMatrices_en__0, 4*sizeof(char));
		fifoPop(init_out__countIn__0, FIFO_Head_displayMatrices_en__0, 4*sizeof(char), NULL, 0);
		cache_wbInv(displayMatrices_init_countIn__0, 4*sizeof(char));
		sendStart(0); // Core4 > Core0: displayMatrices_init_countIn__0 
		sendEnd(); // Core4 > Core0: displayMatrices_init_countIn__0 
		receiveStart(); // Core0 > Core4: explode_generateMatrices_sta__2 
		receiveEnd(0); // Core0 > Core4: explode_generateMatrices_sta__2 
		cache_inv(explode_generateMatrices_sta__2, 8388608*sizeof(char));
		add(4096/*rows*/,4096/*columns*/,init_out__runningTotal__1,startArray_4194304__inputArr__0,output__input_4194304__0); // accumulateMatrices_2
		cache_inv(init_out__runningTotal__1, 2097152*sizeof(long));
		cache_inv(startArray_4194304__inputArr__0, 2097152*sizeof(long));
		cache_wbInv(accumulateMatrices_2__implod__0, 8388608*sizeof(char));
		sendStart(7); // Core4 > Core7: accumulateMatrices_2__implod__0 
		sendEnd(); // Core4 > Core7: accumulateMatrices_2__implod__0 
		receiveStart(); // Core7 > Core4: broadcastOutput__broadcastOu__4 
		receiveEnd(7); // Core7 > Core4: broadcastOutput__broadcastOu__4 
		cache_inv(broadcastOutput__broadcastOu__4, 8388608*sizeof(char));
		fifoPush(output1_6291456__end_in__0, FIFO_Head_broadcastOutput_en__6, 8388608*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__6, 8388608*sizeof(char));
		cache_inv(output1_6291456__end_in__0, 2097152*sizeof(long));
	}
}
