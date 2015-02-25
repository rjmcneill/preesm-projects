/** 
 * @file Core7.c
 * @generated by C6678CPrinter
 * @date Wed Feb 25 01:38:29 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const accumulateMatrices_0_init_ru__0;  // accumulateMatrices_0_init_runningTotal > accumulateMatrices_0 size:= 32*char defined in Core0
extern char SharedMem[3360]; //  size:= 3360*char
extern long *const init_out__runningTotal__5;  // accumulateMatrices_3_init_runningTotal_init_out > accumulateMatrices_3_runningTotal size:= 8*long defined in Core0
extern char *const accumulateMatrices_3_init_ru__0;  // accumulateMatrices_3_init_runningTotal > accumulateMatrices_3 size:= 32*char defined in Core0
extern char *const explode_generateMatrices_sta__1;  // explode_generateMatrices_startArray > accumulateMatrices_0 size:= 32*char defined in Core0
extern long *const init_out__runningTotal__2;  // accumulateMatrices_0_init_runningTotal_init_out > accumulateMatrices_0_runningTotal size:= 8*long defined in Core0
extern long *const startArray_0__inputArray__0;  // explode_generateMatrices_startArray_startArray_0 > accumulateMatrices_0_inputArray size:= 8*long defined in Core0
extern long *const output__input_0__0;  // accumulateMatrices_0_output > implode_broadcastOutput_input_input_0 size:= 8*long defined in Core0
extern char *const accumulateMatrices_1__implod__0;  // accumulateMatrices_1 > implode_broadcastOutput_input size:= 32*char defined in Core0
extern char *const accumulateMatrices_2__implod__0;  // accumulateMatrices_2 > implode_broadcastOutput_input size:= 32*char defined in Core0
extern char *const accumulateMatrices_3__implod__0;  // accumulateMatrices_3 > implode_broadcastOutput_input size:= 32*char defined in Core0
extern char *const accumulateMatrices_4__implod__0;  // accumulateMatrices_4 > implode_broadcastOutput_input size:= 32*char defined in Core0
extern char *const accumulateMatrices_5__implod__0;  // accumulateMatrices_5 > implode_broadcastOutput_input size:= 32*char defined in Core0
extern char *const accumulateMatrices_6__implod__0;  // accumulateMatrices_6 > implode_broadcastOutput_input size:= 32*char defined in Core0
extern char *const accumulateMatrices_7__implod__0;  // accumulateMatrices_7 > implode_broadcastOutput_input size:= 32*char defined in Core0
extern long *const output__input_8__0;  // accumulateMatrices_1_output > implode_broadcastOutput_input_input_8 size:= 8*long defined in Core0
extern long *const output__input_16__0;  // accumulateMatrices_2_output > implode_broadcastOutput_input_input_16 size:= 8*long defined in Core0
extern long *const output__input_24__0;  // accumulateMatrices_3_output > implode_broadcastOutput_input_input_24 size:= 8*long defined in Core0
extern long *const output__input_32__0;  // accumulateMatrices_4_output > implode_broadcastOutput_input_input_32 size:= 8*long defined in Core0
extern long *const output__input_40__0;  // accumulateMatrices_5_output > implode_broadcastOutput_input_input_40 size:= 8*long defined in Core0
extern long *const output__input_48__0;  // accumulateMatrices_6_output > implode_broadcastOutput_input_input_48 size:= 8*long defined in Core0
extern long *const output__input_56__0;  // accumulateMatrices_7_output > implode_broadcastOutput_input_input_56 size:= 8*long defined in Core0
extern long *const output__input__0;  // implode_broadcastOutput_input_output > broadcastOutput_input size:= 64*long defined in Core0
extern long *const output2__outputArray__0;  // broadcastOutput_output2 > displayMatrices_outputArray size:= 64*long defined in Core0
extern long *const output1_32__end_in__0;  // broadcastOutput_output1_32 > broadcastOutput_end_output1_32_end_in size:= 8*long defined in Core0
extern long *const output1_8__end_in__0;  // broadcastOutput_output1_8 > broadcastOutput_end_output1_8_end_in size:= 8*long defined in Core0
extern long *const output1_0__end_in__0;  // broadcastOutput_output1_0 > broadcastOutput_end_output1_0_end_in size:= 8*long defined in Core0
extern long *const output1_16__end_in__0;  // broadcastOutput_output1_16 > broadcastOutput_end_output1_16_end_in size:= 8*long defined in Core0
extern long *const output1_24__end_in__0;  // broadcastOutput_output1_24 > broadcastOutput_end_output1_24_end_in size:= 8*long defined in Core0
extern long *const output1_40__end_in__0;  // broadcastOutput_output1_40 > broadcastOutput_end_output1_40_end_in size:= 8*long defined in Core0
extern long *const output1_48__end_in__0;  // broadcastOutput_output1_48 > broadcastOutput_end_output1_48_end_in size:= 8*long defined in Core0
extern long *const output1_56__end_in__0;  // broadcastOutput_output1_56 > broadcastOutput_end_output1_56_end_in size:= 8*long defined in Core0
extern char *const broadcastOutput__broadcastOu__6;  // broadcastOutput > broadcastOutput_end_output1_40 size:= 32*char defined in Core0
extern char *const broadcastOutput__broadcastOu__0;  // broadcastOutput > broadcastOutput_end_output1_24 size:= 32*char defined in Core0
extern char *const broadcastOutput__broadcastOu__5;  // broadcastOutput > broadcastOutput_end_output1_16 size:= 32*char defined in Core0
extern char *const broadcastOutput__broadcastOu__7;  // broadcastOutput > broadcastOutput_end_output1_0 size:= 32*char defined in Core0
extern char *const broadcastOutput__broadcastOu__2;  // broadcastOutput > broadcastOutput_end_output1_8 size:= 32*char defined in Core0
extern char *const broadcastOutput__broadcastOu__4;  // broadcastOutput > broadcastOutput_end_output1_32 size:= 32*char defined in Core0
extern char *const broadcastOutput__displayMatr__0;  // broadcastOutput > displayMatrices size:= 256*char defined in Core0
extern char *const FIFO_Head_broadcastOutput_en__7;  // FIFO_Head_broadcastOutput_end_output1_48 > accumulateMatrices_6_init_runningTotal size:= 32*char defined in Core1
extern char *const FIFO_Head_broadcastOutput_en__0;  // FIFO_Head_broadcastOutput_end_output1_56 > accumulateMatrices_7_init_runningTotal size:= 32*char defined in Core4

// Core Global Definitions
char *const FIFO_Head_broadcastOutput_en__3 = (char*) (SharedMem+256);  // FIFO_Head_broadcastOutput_end_output1_24 > accumulateMatrices_3_init_runningTotal size:= 32*char

void core7(void){
	// Initialisation(s)
	communicationInit();
	fifoInit(FIFO_Head_broadcastOutput_en__3, 32*sizeof(char), NULL, 0);
	cache_wbInv(FIFO_Head_broadcastOutput_en__3, 32*sizeof(char));

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core2 > Core7: accumulateMatrices_0_init_ru__0 
		receiveEnd(2); // Core2 > Core7: accumulateMatrices_0_init_ru__0 
		cache_inv(accumulateMatrices_0_init_ru__0, 32*sizeof(char));
		cache_inv(FIFO_Head_broadcastOutput_en__3, 32*sizeof(char));
		fifoPop(init_out__runningTotal__5, FIFO_Head_broadcastOutput_en__3, 32*sizeof(char), NULL, 0);
		cache_wbInv(accumulateMatrices_3_init_ru__0, 32*sizeof(char));
		sendStart(0); // Core7 > Core0: accumulateMatrices_3_init_ru__0 
		sendEnd(); // Core7 > Core0: accumulateMatrices_3_init_ru__0 
		receiveStart(); // Core0 > Core7: explode_generateMatrices_sta__1 
		receiveEnd(0); // Core0 > Core7: explode_generateMatrices_sta__1 
		cache_inv(explode_generateMatrices_sta__1, 32*sizeof(char));
		add(8/*rows*/,8/*columns*/,init_out__runningTotal__2,startArray_0__inputArray__0,output__input_0__0); // accumulateMatrices_0
		cache_inv(init_out__runningTotal__2, 8*sizeof(long));
		cache_inv(startArray_0__inputArray__0, 8*sizeof(long));
		receiveStart(); // Core5 > Core7: accumulateMatrices_1__implod__0 
		receiveEnd(5); // Core5 > Core7: accumulateMatrices_1__implod__0 
		cache_inv(accumulateMatrices_1__implod__0, 32*sizeof(char));
		receiveStart(); // Core6 > Core7: accumulateMatrices_2__implod__0 
		receiveEnd(6); // Core6 > Core7: accumulateMatrices_2__implod__0 
		cache_inv(accumulateMatrices_2__implod__0, 32*sizeof(char));
		receiveStart(); // Core0 > Core7: accumulateMatrices_3__implod__0 
		receiveEnd(0); // Core0 > Core7: accumulateMatrices_3__implod__0 
		cache_inv(accumulateMatrices_3__implod__0, 32*sizeof(char));
		receiveStart(); // Core4 > Core7: accumulateMatrices_4__implod__0 
		receiveEnd(4); // Core4 > Core7: accumulateMatrices_4__implod__0 
		cache_inv(accumulateMatrices_4__implod__0, 32*sizeof(char));
		receiveStart(); // Core1 > Core7: accumulateMatrices_5__implod__0 
		receiveEnd(1); // Core1 > Core7: accumulateMatrices_5__implod__0 
		cache_inv(accumulateMatrices_5__implod__0, 32*sizeof(char));
		receiveStart(); // Core2 > Core7: accumulateMatrices_6__implod__0 
		receiveEnd(2); // Core2 > Core7: accumulateMatrices_6__implod__0 
		cache_inv(accumulateMatrices_6__implod__0, 32*sizeof(char));
		receiveStart(); // Core3 > Core7: accumulateMatrices_7__implod__0 
		receiveEnd(3); // Core3 > Core7: accumulateMatrices_7__implod__0 
		cache_inv(accumulateMatrices_7__implod__0, 32*sizeof(char));
		// Join implode_broadcastOutput_input
		{
			memcpy((void*)(output__input__0+0),(void*)( output__input_0__0+0), 8*sizeof(long));
			memcpy((void*)(output__input__0+8),(void*)( output__input_8__0+0), 8*sizeof(long));
			memcpy((void*)(output__input__0+16),(void*)( output__input_16__0+0), 8*sizeof(long));
			memcpy((void*)(output__input__0+24),(void*)( output__input_24__0+0), 8*sizeof(long));
			memcpy((void*)(output__input__0+32),(void*)( output__input_32__0+0), 8*sizeof(long));
			memcpy((void*)(output__input__0+40),(void*)( output__input_40__0+0), 8*sizeof(long));
			memcpy((void*)(output__input__0+48),(void*)( output__input_48__0+0), 8*sizeof(long));
			memcpy((void*)(output__input__0+56),(void*)( output__input_56__0+0), 8*sizeof(long));
		}
		cache_inv(output__input_0__0, 8*sizeof(long));
		cache_inv(output__input_8__0, 8*sizeof(long));
		cache_inv(output__input_16__0, 8*sizeof(long));
		cache_inv(output__input_24__0, 8*sizeof(long));
		cache_inv(output__input_32__0, 8*sizeof(long));
		cache_inv(output__input_40__0, 8*sizeof(long));
		cache_inv(output__input_48__0, 8*sizeof(long));
		cache_inv(output__input_56__0, 8*sizeof(long));
		// Broadcast broadcastOutput
		{
			memcpy((void*)(output2__outputArray__0+0),(void*)( output__input__0+0), 64*sizeof(long));
			memcpy((void*)(output1_32__end_in__0+0),(void*)( output__input__0+0), 8*sizeof(long));
			memcpy((void*)(output1_8__end_in__0+0),(void*)( output__input__0+8), 8*sizeof(long));
			memcpy((void*)(output1_0__end_in__0+0),(void*)( output__input__0+16), 8*sizeof(long));
			memcpy((void*)(output1_16__end_in__0+0),(void*)( output__input__0+24), 8*sizeof(long));
			memcpy((void*)(output1_24__end_in__0+0),(void*)( output__input__0+32), 8*sizeof(long));
			memcpy((void*)(output1_40__end_in__0+0),(void*)( output__input__0+40), 8*sizeof(long));
			memcpy((void*)(output1_48__end_in__0+0),(void*)( output__input__0+48), 8*sizeof(long));
			memcpy((void*)(output1_56__end_in__0+0),(void*)( output__input__0+56), 8*sizeof(long));
		}
		cache_inv(output__input__0, 64*sizeof(long));
		cache_wbInv(broadcastOutput__broadcastOu__6, 32*sizeof(char));
		sendStart(1); // Core7 > Core1: broadcastOutput__broadcastOu__6 
		sendEnd(); // Core7 > Core1: broadcastOutput__broadcastOu__6 
		cache_wbInv(broadcastOutput__broadcastOu__0, 32*sizeof(char));
		sendStart(2); // Core7 > Core2: broadcastOutput__broadcastOu__0 
		sendEnd(); // Core7 > Core2: broadcastOutput__broadcastOu__0 
		cache_wbInv(broadcastOutput__broadcastOu__5, 32*sizeof(char));
		sendStart(5); // Core7 > Core5: broadcastOutput__broadcastOu__5 
		sendEnd(); // Core7 > Core5: broadcastOutput__broadcastOu__5 
		cache_wbInv(broadcastOutput__broadcastOu__7, 32*sizeof(char));
		sendStart(6); // Core7 > Core6: broadcastOutput__broadcastOu__7 
		sendEnd(); // Core7 > Core6: broadcastOutput__broadcastOu__7 
		cache_wbInv(broadcastOutput__broadcastOu__2, 32*sizeof(char));
		sendStart(3); // Core7 > Core3: broadcastOutput__broadcastOu__2 
		sendEnd(); // Core7 > Core3: broadcastOutput__broadcastOu__2 
		cache_wbInv(broadcastOutput__broadcastOu__4, 32*sizeof(char));
		sendStart(4); // Core7 > Core4: broadcastOutput__broadcastOu__4 
		sendEnd(); // Core7 > Core4: broadcastOutput__broadcastOu__4 
		cache_wbInv(broadcastOutput__displayMatr__0, 256*sizeof(char));
		sendStart(0); // Core7 > Core0: broadcastOutput__displayMatr__0 
		sendEnd(); // Core7 > Core0: broadcastOutput__displayMatr__0 
		fifoPush(output1_48__end_in__0, FIFO_Head_broadcastOutput_en__7, 32*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__7, 32*sizeof(char));
		cache_inv(output1_48__end_in__0, 8*sizeof(long));
		fifoPush(output1_56__end_in__0, FIFO_Head_broadcastOutput_en__0, 32*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__0, 32*sizeof(char));
		cache_inv(output1_56__end_in__0, 8*sizeof(long));
	}
}
