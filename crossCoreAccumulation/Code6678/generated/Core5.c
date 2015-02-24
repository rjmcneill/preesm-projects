/** 
 * @file Core5.c
 * @generated by C6678CPrinter
 * @date Tue Feb 24 16:43:51 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char SharedMem[8736]; //  size:= 8736*char
extern long *const init_out__runningTotal__4;  // accumulateMatrices_4_init_runningTotal_init_out > accumulateMatrices_4_runningTotal size:= 8*long defined in Core0
extern char *const explode_generateMatrices_sta__7;  // explode_generateMatrices_startArray > accumulateMatrices_20 size:= 32*char defined in Core0
extern char *const explode_generateMatrices_sta__13;  // explode_generateMatrices_startArray > accumulateMatrices_11 size:= 32*char defined in Core0
extern char *const explode_generateMatrices_sta__3;  // explode_generateMatrices_startArray > accumulateMatrices_4 size:= 32*char defined in Core0
extern long *const startArray_32__inputArray__0;  // explode_generateMatrices_startArray_startArray_32 > accumulateMatrices_4_inputArray size:= 8*long defined in Core0
extern long *const output__input_32__1;  // accumulateMatrices_4_output > implode_broadcastOutput_0_input_input_32 size:= 8*long defined in Core0
extern char *const accumulateMatrices_4__implod__0;  // accumulateMatrices_4 > implode_broadcastOutput_0_input size:= 32*char defined in Core0
extern char *const broadcastOutput_0__accumulat__5;  // broadcastOutput_0 > accumulateMatrices_11 size:= 32*char defined in Core0
extern long *const output1_24__runningTotal__1;  // broadcastOutput_0_output1_24 > accumulateMatrices_11_runningTotal size:= 8*long defined in Core0
extern long *const startArray_88__inputArray__0;  // explode_generateMatrices_startArray_startArray_88 > accumulateMatrices_11_inputArray size:= 8*long defined in Core0
extern long *const output__input_24__0;  // accumulateMatrices_11_output > implode_broadcastOutput_1_input_input_24 size:= 8*long defined in Core0
extern char *const accumulateMatrices_11__implo__0;  // accumulateMatrices_11 > implode_broadcastOutput_1_input size:= 32*char defined in Core0
extern char *const broadcastOutput_1__accumulat__4;  // broadcastOutput_1 > accumulateMatrices_20 size:= 32*char defined in Core0
extern long *const output1_32__runningTotal__0;  // broadcastOutput_1_output1_32 > accumulateMatrices_20_runningTotal size:= 8*long defined in Core0
extern long *const startArray_160__inputArray__0;  // explode_generateMatrices_startArray_startArray_160 > accumulateMatrices_20_inputArray size:= 8*long defined in Core0
extern long *const output__input_32__0;  // accumulateMatrices_20_output > implode_broadcastOutput_2_input_input_32 size:= 8*long defined in Core0
extern char *const accumulateMatrices_20__implo__0;  // accumulateMatrices_20 > implode_broadcastOutput_2_input size:= 32*char defined in Core0
extern char *const broadcastOutput_2__broadcast__4;  // broadcastOutput_2 > broadcastOutput_2_end_output1_48 size:= 32*char defined in Core0
extern char *const FIFO_Head_broadcastOutput_2___5;  // FIFO_Head_broadcastOutput_2_end_output1_48 > accumulateMatrices_6_init_runningTotal size:= 32*char defined in Core2
extern long *const output1_48__end_in__0;  // broadcastOutput_2_output1_48 > broadcastOutput_2_end_output1_48_end_in size:= 8*long defined in Core0

// Core Global Definitions
char *const FIFO_Head_broadcastOutput_2___7 = (char*) (SharedMem+6976);  // FIFO_Head_broadcastOutput_2_end_output1_32 > accumulateMatrices_4_init_runningTotal size:= 32*char

void core5(void){
	// Initialisation(s)
	communicationInit();
	fifoInit(FIFO_Head_broadcastOutput_2___7, 32*sizeof(char), NULL, 0);
	cache_wbInv(FIFO_Head_broadcastOutput_2___7, 32*sizeof(char));

	// Begin the execution loop 
	while(1){
		busy_barrier();
		cache_inv(FIFO_Head_broadcastOutput_2___7, 32*sizeof(char));
		fifoPop(init_out__runningTotal__4, FIFO_Head_broadcastOutput_2___7, 32*sizeof(char), NULL, 0);
		receiveStart(); // Core0 > Core5: explode_generateMatrices_sta__7 
		receiveEnd(0); // Core0 > Core5: explode_generateMatrices_sta__7 
		cache_inv(explode_generateMatrices_sta__7, 32*sizeof(char));
		receiveStart(); // Core0 > Core5: explode_generateMatrices_sta__13 
		receiveEnd(0); // Core0 > Core5: explode_generateMatrices_sta__13 
		cache_inv(explode_generateMatrices_sta__13, 32*sizeof(char));
		receiveStart(); // Core0 > Core5: explode_generateMatrices_sta__3 
		receiveEnd(0); // Core0 > Core5: explode_generateMatrices_sta__3 
		cache_inv(explode_generateMatrices_sta__3, 32*sizeof(char));
		add(8/*rows*/,8/*columns*/,init_out__runningTotal__4,startArray_32__inputArray__0,output__input_32__1); // accumulateMatrices_4
		cache_inv(init_out__runningTotal__4, 8*sizeof(long));
		cache_inv(startArray_32__inputArray__0, 8*sizeof(long));
		cache_wbInv(accumulateMatrices_4__implod__0, 32*sizeof(char));
		sendStart(7); // Core5 > Core7: accumulateMatrices_4__implod__0 
		sendEnd(); // Core5 > Core7: accumulateMatrices_4__implod__0 
		receiveStart(); // Core7 > Core5: broadcastOutput_0__accumulat__5 
		receiveEnd(7); // Core7 > Core5: broadcastOutput_0__accumulat__5 
		cache_inv(broadcastOutput_0__accumulat__5, 32*sizeof(char));
		add(8/*rows*/,8/*columns*/,output1_24__runningTotal__1,startArray_88__inputArray__0,output__input_24__0); // accumulateMatrices_11
		cache_inv(output1_24__runningTotal__1, 8*sizeof(long));
		cache_inv(startArray_88__inputArray__0, 8*sizeof(long));
		cache_wbInv(accumulateMatrices_11__implo__0, 32*sizeof(char));
		sendStart(7); // Core5 > Core7: accumulateMatrices_11__implo__0 
		sendEnd(); // Core5 > Core7: accumulateMatrices_11__implo__0 
		receiveStart(); // Core7 > Core5: broadcastOutput_1__accumulat__4 
		receiveEnd(7); // Core7 > Core5: broadcastOutput_1__accumulat__4 
		cache_inv(broadcastOutput_1__accumulat__4, 32*sizeof(char));
		add(8/*rows*/,8/*columns*/,output1_32__runningTotal__0,startArray_160__inputArray__0,output__input_32__0); // accumulateMatrices_20
		cache_inv(output1_32__runningTotal__0, 8*sizeof(long));
		cache_inv(startArray_160__inputArray__0, 8*sizeof(long));
		cache_wbInv(accumulateMatrices_20__implo__0, 32*sizeof(char));
		sendStart(7); // Core5 > Core7: accumulateMatrices_20__implo__0 
		sendEnd(); // Core5 > Core7: accumulateMatrices_20__implo__0 
		receiveStart(); // Core7 > Core5: broadcastOutput_2__broadcast__4 
		receiveEnd(7); // Core7 > Core5: broadcastOutput_2__broadcast__4 
		cache_inv(broadcastOutput_2__broadcast__4, 32*sizeof(char));
		fifoPush(output1_48__end_in__0, FIFO_Head_broadcastOutput_2___5, 32*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_2___5, 32*sizeof(char));
		cache_inv(output1_48__end_in__0, 8*sizeof(long));
	}
}
