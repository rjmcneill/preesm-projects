/** 
 * @file Core7.c
 * @generated by C6678CPrinter
 * @date Wed Mar 11 22:27:57 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const generateTensors__explode_gen__0;  // generateTensors > explode_generateTensors_arrayA size:= 512*char defined in Core0
extern int *const arrayA_0__arrayA__0;  // explode_generateTensors_arrayA_arrayA_0 > multiplyTensors_0_arrayA size:= 8*int defined in Core0
extern int *const arrayA_8__arrayA__0;  // explode_generateTensors_arrayA_arrayA_8 > multiplyTensors_1_arrayA size:= 8*int defined in Core0
extern int *const arrayA_16__arrayA__0;  // explode_generateTensors_arrayA_arrayA_16 > multiplyTensors_2_arrayA size:= 8*int defined in Core0
extern int *const arrayA_24__arrayA__0;  // explode_generateTensors_arrayA_arrayA_24 > multiplyTensors_3_arrayA size:= 8*int defined in Core0
extern int *const arrayA_32__arrayA__0;  // explode_generateTensors_arrayA_arrayA_32 > multiplyTensors_4_arrayA size:= 8*int defined in Core0
extern int *const arrayA_40__arrayA__0;  // explode_generateTensors_arrayA_arrayA_40 > multiplyTensors_5_arrayA size:= 8*int defined in Core0
extern int *const arrayA_48__arrayA__0;  // explode_generateTensors_arrayA_arrayA_48 > multiplyTensors_6_arrayA size:= 8*int defined in Core0
extern int *const arrayA_56__arrayA__0;  // explode_generateTensors_arrayA_arrayA_56 > multiplyTensors_7_arrayA size:= 8*int defined in Core0
extern int *const arrayA_64__arrayA__0;  // explode_generateTensors_arrayA_arrayA_64 > multiplyTensors_8_arrayA size:= 8*int defined in Core0
extern int *const arrayA_72__arrayA__0;  // explode_generateTensors_arrayA_arrayA_72 > multiplyTensors_9_arrayA size:= 8*int defined in Core0
extern int *const arrayA_80__arrayA__0;  // explode_generateTensors_arrayA_arrayA_80 > multiplyTensors_10_arrayA size:= 8*int defined in Core0
extern int *const arrayA_88__arrayA__0;  // explode_generateTensors_arrayA_arrayA_88 > multiplyTensors_11_arrayA size:= 8*int defined in Core0
extern int *const arrayA_96__arrayA__0;  // explode_generateTensors_arrayA_arrayA_96 > multiplyTensors_12_arrayA size:= 8*int defined in Core0
extern int *const arrayA_104__arrayA__0;  // explode_generateTensors_arrayA_arrayA_104 > multiplyTensors_13_arrayA size:= 8*int defined in Core0
extern int *const arrayA_112__arrayA__0;  // explode_generateTensors_arrayA_arrayA_112 > multiplyTensors_14_arrayA size:= 8*int defined in Core0
extern int *const arrayA_120__arrayA__0;  // explode_generateTensors_arrayA_arrayA_120 > multiplyTensors_15_arrayA size:= 8*int defined in Core0
extern int *const arrayA__arrayA__0;  // generateTensors_arrayA > explode_generateTensors_arrayA_arrayA size:= 128*int defined in Core0
extern char *const explode_generateTensors_arra__13;  // explode_generateTensors_arrayA > multiplyTensors_15 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__6;  // explode_generateTensors_arrayA > multiplyTensors_14 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__10;  // explode_generateTensors_arrayA > multiplyTensors_13 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__8;  // explode_generateTensors_arrayA > multiplyTensors_11 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__1;  // explode_generateTensors_arrayA > multiplyTensors_10 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__3;  // explode_generateTensors_arrayA > multiplyTensors_9 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__11;  // explode_generateTensors_arrayA > multiplyTensors_8 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__2;  // explode_generateTensors_arrayA > multiplyTensors_7 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__12;  // explode_generateTensors_arrayA > multiplyTensors_6 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__16;  // explode_generateTensors_arrayA > multiplyTensors_5 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__9;  // explode_generateTensors_arrayA > multiplyTensors_4 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__0;  // explode_generateTensors_arrayA > multiplyTensors_3 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__17;  // explode_generateTensors_arrayA > multiplyTensors_2 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__5;  // explode_generateTensors_arrayA > multiplyTensors_1 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__7;  // explode_generateTensors_arrayB > broadcastTensorB_0 size:= 256*char defined in Core0
extern int *const output_0__arrayB__0;  // broadcastTensorB_0_output_0 > multiplyTensors_0_arrayB size:= 64*int defined in Core0
extern int *const output_64__arrayB__0;  // broadcastTensorB_0_output_64 > multiplyTensors_1_arrayB size:= 64*int defined in Core0
extern int *const output_128__arrayB__0;  // broadcastTensorB_0_output_128 > multiplyTensors_2_arrayB size:= 64*int defined in Core0
extern int *const output_192__arrayB__0;  // broadcastTensorB_0_output_192 > multiplyTensors_3_arrayB size:= 64*int defined in Core0
extern int *const output_256__arrayB__1;  // broadcastTensorB_0_output_256 > multiplyTensors_4_arrayB size:= 64*int defined in Core0
extern int *const output_320__arrayB__1;  // broadcastTensorB_0_output_320 > multiplyTensors_5_arrayB size:= 64*int defined in Core0
extern int *const output_384__arrayB__1;  // broadcastTensorB_0_output_384 > multiplyTensors_6_arrayB size:= 64*int defined in Core0
extern int *const output_448__arrayB__1;  // broadcastTensorB_0_output_448 > multiplyTensors_7_arrayB size:= 64*int defined in Core0
extern int *const arrayB_0__input__0;  // explode_generateTensors_arrayB_arrayB_0 > broadcastTensorB_0_input size:= 64*int defined in Core0
extern char *const broadcastTensorB_0__multiply__4;  // broadcastTensorB_0 > multiplyTensors_7 size:= 256*char defined in Core0
extern char *const broadcastTensorB_0__multiply__5;  // broadcastTensorB_0 > multiplyTensors_6 size:= 256*char defined in Core0
extern char *const broadcastTensorB_0__multiply__6;  // broadcastTensorB_0 > multiplyTensors_5 size:= 256*char defined in Core0
extern char *const broadcastTensorB_0__multiply__7;  // broadcastTensorB_0 > multiplyTensors_4 size:= 256*char defined in Core0
extern char *const broadcastTensorB_0__multiply__3;  // broadcastTensorB_0 > multiplyTensors_3 size:= 256*char defined in Core0
extern char *const broadcastTensorB_0__multiply__2;  // broadcastTensorB_0 > multiplyTensors_2 size:= 256*char defined in Core0
extern char *const broadcastTensorB_0__multiply__0;  // broadcastTensorB_0 > multiplyTensors_1 size:= 256*char defined in Core0
extern char *const broadcastTensorB_1__multiply__0;  // broadcastTensorB_1 > multiplyTensors_12 size:= 256*char defined in Core0
extern long *const arrayC__arrayC_0__0;  // multiplyTensors_0_arrayC > implode_displayTensor_arrayC_arrayC_0 size:= 8*long defined in Core0
extern char *const multiplyTensors_1__implode_d__0;  // multiplyTensors_1 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_10__implode___0;  // multiplyTensors_10 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_11__implode___0;  // multiplyTensors_11 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern int *const output_256__arrayB__0;  // broadcastTensorB_1_output_256 > multiplyTensors_12_arrayB size:= 64*int defined in Core0
extern long *const arrayC__arrayC_96__0;  // multiplyTensors_12_arrayC > implode_displayTensor_arrayC_arrayC_96 size:= 8*long defined in Core0
extern char *const multiplyTensors_13__implode___0;  // multiplyTensors_13 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_14__implode___0;  // multiplyTensors_14 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_15__implode___0;  // multiplyTensors_15 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_2__implode_d__0;  // multiplyTensors_2 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_3__implode_d__0;  // multiplyTensors_3 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_4__implode_d__0;  // multiplyTensors_4 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_5__implode_d__0;  // multiplyTensors_5 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_6__implode_d__0;  // multiplyTensors_6 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_7__implode_d__0;  // multiplyTensors_7 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_8__implode_d__0;  // multiplyTensors_8 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern char *const multiplyTensors_9__implode_d__0;  // multiplyTensors_9 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern long *const arrayC__arrayC_8__0;  // multiplyTensors_1_arrayC > implode_displayTensor_arrayC_arrayC_8 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_16__0;  // multiplyTensors_2_arrayC > implode_displayTensor_arrayC_arrayC_16 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_24__0;  // multiplyTensors_3_arrayC > implode_displayTensor_arrayC_arrayC_24 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_32__0;  // multiplyTensors_4_arrayC > implode_displayTensor_arrayC_arrayC_32 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_40__0;  // multiplyTensors_5_arrayC > implode_displayTensor_arrayC_arrayC_40 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_48__0;  // multiplyTensors_6_arrayC > implode_displayTensor_arrayC_arrayC_48 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_56__0;  // multiplyTensors_7_arrayC > implode_displayTensor_arrayC_arrayC_56 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_64__0;  // multiplyTensors_8_arrayC > implode_displayTensor_arrayC_arrayC_64 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_72__0;  // multiplyTensors_9_arrayC > implode_displayTensor_arrayC_arrayC_72 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_80__0;  // multiplyTensors_10_arrayC > implode_displayTensor_arrayC_arrayC_80 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_88__0;  // multiplyTensors_11_arrayC > implode_displayTensor_arrayC_arrayC_88 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_104__0;  // multiplyTensors_13_arrayC > implode_displayTensor_arrayC_arrayC_104 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_112__0;  // multiplyTensors_14_arrayC > implode_displayTensor_arrayC_arrayC_112 size:= 8*long defined in Core0
extern long *const arrayC__arrayC_120__0;  // multiplyTensors_15_arrayC > implode_displayTensor_arrayC_arrayC_120 size:= 8*long defined in Core0
extern long *const arrayC__arrayC__0;  // implode_displayTensor_arrayC_arrayC > displayTensor_arrayC size:= 128*long defined in Core0
extern char *const implode_displayTensor_arrayC__0;  // implode_displayTensor_arrayC > displayTensor size:= 512*char defined in Core0

// Core Global Definitions

void core7(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core7: generateTensors__explode_gen__0 
		receiveEnd(0); // Core0 > Core7: generateTensors__explode_gen__0 
		cache_inv(generateTensors__explode_gen__0, 512*sizeof(char));
		// Fork explode_generateTensors_arrayA
		{
			memcpy((void*)(arrayA_0__arrayA__0+0),(void*)( arrayA__arrayA__0+0), 8*sizeof(int));
			memcpy((void*)(arrayA_8__arrayA__0+0),(void*)( arrayA__arrayA__0+8), 8*sizeof(int));
			memcpy((void*)(arrayA_16__arrayA__0+0),(void*)( arrayA__arrayA__0+16), 8*sizeof(int));
			memcpy((void*)(arrayA_24__arrayA__0+0),(void*)( arrayA__arrayA__0+24), 8*sizeof(int));
			memcpy((void*)(arrayA_32__arrayA__0+0),(void*)( arrayA__arrayA__0+32), 8*sizeof(int));
			memcpy((void*)(arrayA_40__arrayA__0+0),(void*)( arrayA__arrayA__0+40), 8*sizeof(int));
			memcpy((void*)(arrayA_48__arrayA__0+0),(void*)( arrayA__arrayA__0+48), 8*sizeof(int));
			memcpy((void*)(arrayA_56__arrayA__0+0),(void*)( arrayA__arrayA__0+56), 8*sizeof(int));
			memcpy((void*)(arrayA_64__arrayA__0+0),(void*)( arrayA__arrayA__0+64), 8*sizeof(int));
			memcpy((void*)(arrayA_72__arrayA__0+0),(void*)( arrayA__arrayA__0+72), 8*sizeof(int));
			memcpy((void*)(arrayA_80__arrayA__0+0),(void*)( arrayA__arrayA__0+80), 8*sizeof(int));
			memcpy((void*)(arrayA_88__arrayA__0+0),(void*)( arrayA__arrayA__0+88), 8*sizeof(int));
			memcpy((void*)(arrayA_96__arrayA__0+0),(void*)( arrayA__arrayA__0+96), 8*sizeof(int));
			memcpy((void*)(arrayA_104__arrayA__0+0),(void*)( arrayA__arrayA__0+104), 8*sizeof(int));
			memcpy((void*)(arrayA_112__arrayA__0+0),(void*)( arrayA__arrayA__0+112), 8*sizeof(int));
			memcpy((void*)(arrayA_120__arrayA__0+0),(void*)( arrayA__arrayA__0+120), 8*sizeof(int));
		}
		cache_inv(arrayA__arrayA__0, 128*sizeof(int));
		cache_wbInv(explode_generateTensors_arra__13, 32*sizeof(char));
		sendStart(0); // Core7 > Core0: explode_generateTensors_arra__13 
		sendEnd(); // Core7 > Core0: explode_generateTensors_arra__13 
		cache_wbInv(explode_generateTensors_arra__6, 32*sizeof(char));
		sendStart(5); // Core7 > Core5: explode_generateTensors_arra__6 
		sendEnd(); // Core7 > Core5: explode_generateTensors_arra__6 
		cache_wbInv(explode_generateTensors_arra__10, 32*sizeof(char));
		sendStart(0); // Core7 > Core0: explode_generateTensors_arra__10 
		sendEnd(); // Core7 > Core0: explode_generateTensors_arra__10 
		cache_wbInv(explode_generateTensors_arra__8, 32*sizeof(char));
		sendStart(6); // Core7 > Core6: explode_generateTensors_arra__8 
		sendEnd(); // Core7 > Core6: explode_generateTensors_arra__8 
		cache_wbInv(explode_generateTensors_arra__1, 32*sizeof(char));
		sendStart(3); // Core7 > Core3: explode_generateTensors_arra__1 
		sendEnd(); // Core7 > Core3: explode_generateTensors_arra__1 
		cache_wbInv(explode_generateTensors_arra__3, 32*sizeof(char));
		sendStart(4); // Core7 > Core4: explode_generateTensors_arra__3 
		sendEnd(); // Core7 > Core4: explode_generateTensors_arra__3 
		cache_wbInv(explode_generateTensors_arra__11, 32*sizeof(char));
		sendStart(4); // Core7 > Core4: explode_generateTensors_arra__11 
		sendEnd(); // Core7 > Core4: explode_generateTensors_arra__11 
		cache_wbInv(explode_generateTensors_arra__2, 32*sizeof(char));
		sendStart(3); // Core7 > Core3: explode_generateTensors_arra__2 
		sendEnd(); // Core7 > Core3: explode_generateTensors_arra__2 
		cache_wbInv(explode_generateTensors_arra__12, 32*sizeof(char));
		sendStart(1); // Core7 > Core1: explode_generateTensors_arra__12 
		sendEnd(); // Core7 > Core1: explode_generateTensors_arra__12 
		cache_wbInv(explode_generateTensors_arra__16, 32*sizeof(char));
		sendStart(2); // Core7 > Core2: explode_generateTensors_arra__16 
		sendEnd(); // Core7 > Core2: explode_generateTensors_arra__16 
		cache_wbInv(explode_generateTensors_arra__9, 32*sizeof(char));
		sendStart(6); // Core7 > Core6: explode_generateTensors_arra__9 
		sendEnd(); // Core7 > Core6: explode_generateTensors_arra__9 
		cache_wbInv(explode_generateTensors_arra__0, 32*sizeof(char));
		sendStart(5); // Core7 > Core5: explode_generateTensors_arra__0 
		sendEnd(); // Core7 > Core5: explode_generateTensors_arra__0 
		cache_wbInv(explode_generateTensors_arra__17, 32*sizeof(char));
		sendStart(1); // Core7 > Core1: explode_generateTensors_arra__17 
		sendEnd(); // Core7 > Core1: explode_generateTensors_arra__17 
		cache_wbInv(explode_generateTensors_arra__5, 32*sizeof(char));
		sendStart(2); // Core7 > Core2: explode_generateTensors_arra__5 
		sendEnd(); // Core7 > Core2: explode_generateTensors_arra__5 
		receiveStart(); // Core0 > Core7: explode_generateTensors_arra__7 
		receiveEnd(0); // Core0 > Core7: explode_generateTensors_arra__7 
		cache_inv(explode_generateTensors_arra__7, 256*sizeof(char));
		// Broadcast broadcastTensorB_0
		{
			memcpy((void*)(output_0__arrayB__0+0),(void*)( arrayB_0__input__0+0), 64*sizeof(int));
			memcpy((void*)(output_64__arrayB__0+0),(void*)( arrayB_0__input__0+0), 64*sizeof(int));
			memcpy((void*)(output_128__arrayB__0+0),(void*)( arrayB_0__input__0+0), 64*sizeof(int));
			memcpy((void*)(output_192__arrayB__0+0),(void*)( arrayB_0__input__0+0), 64*sizeof(int));
			memcpy((void*)(output_256__arrayB__1+0),(void*)( arrayB_0__input__0+0), 64*sizeof(int));
			memcpy((void*)(output_320__arrayB__1+0),(void*)( arrayB_0__input__0+0), 64*sizeof(int));
			memcpy((void*)(output_384__arrayB__1+0),(void*)( arrayB_0__input__0+0), 64*sizeof(int));
			memcpy((void*)(output_448__arrayB__1+0),(void*)( arrayB_0__input__0+0), 64*sizeof(int));
		}
		cache_inv(arrayB_0__input__0, 64*sizeof(int));
		cache_wbInv(broadcastTensorB_0__multiply__4, 256*sizeof(char));
		sendStart(3); // Core7 > Core3: broadcastTensorB_0__multiply__4 
		sendEnd(); // Core7 > Core3: broadcastTensorB_0__multiply__4 
		cache_wbInv(broadcastTensorB_0__multiply__5, 256*sizeof(char));
		sendStart(1); // Core7 > Core1: broadcastTensorB_0__multiply__5 
		sendEnd(); // Core7 > Core1: broadcastTensorB_0__multiply__5 
		cache_wbInv(broadcastTensorB_0__multiply__6, 256*sizeof(char));
		sendStart(2); // Core7 > Core2: broadcastTensorB_0__multiply__6 
		sendEnd(); // Core7 > Core2: broadcastTensorB_0__multiply__6 
		cache_wbInv(broadcastTensorB_0__multiply__7, 256*sizeof(char));
		sendStart(6); // Core7 > Core6: broadcastTensorB_0__multiply__7 
		sendEnd(); // Core7 > Core6: broadcastTensorB_0__multiply__7 
		cache_wbInv(broadcastTensorB_0__multiply__3, 256*sizeof(char));
		sendStart(5); // Core7 > Core5: broadcastTensorB_0__multiply__3 
		sendEnd(); // Core7 > Core5: broadcastTensorB_0__multiply__3 
		cache_wbInv(broadcastTensorB_0__multiply__2, 256*sizeof(char));
		sendStart(1); // Core7 > Core1: broadcastTensorB_0__multiply__2 
		sendEnd(); // Core7 > Core1: broadcastTensorB_0__multiply__2 
		cache_wbInv(broadcastTensorB_0__multiply__0, 256*sizeof(char));
		sendStart(2); // Core7 > Core2: broadcastTensorB_0__multiply__0 
		sendEnd(); // Core7 > Core2: broadcastTensorB_0__multiply__0 
		receiveStart(); // Core0 > Core7: broadcastTensorB_1__multiply__0 
		receiveEnd(0); // Core0 > Core7: broadcastTensorB_1__multiply__0 
		cache_inv(broadcastTensorB_1__multiply__0, 256*sizeof(char));
		multiply(8/*rowsA*/,8/*columnsA*/,2/*depthA*/,8/*rowsB*/,8/*columnsB*/,2/*depthB*/,arrayA_0__arrayA__0,output_0__arrayB__0,arrayC__arrayC_0__0); // multiplyTensors_0
		cache_inv(arrayA_0__arrayA__0, 8*sizeof(int));
		cache_inv(output_0__arrayB__0, 64*sizeof(int));
		receiveStart(); // Core2 > Core7: multiplyTensors_1__implode_d__0 
		receiveEnd(2); // Core2 > Core7: multiplyTensors_1__implode_d__0 
		cache_inv(multiplyTensors_1__implode_d__0, 32*sizeof(char));
		receiveStart(); // Core3 > Core7: multiplyTensors_10__implode___0 
		receiveEnd(3); // Core3 > Core7: multiplyTensors_10__implode___0 
		cache_inv(multiplyTensors_10__implode___0, 32*sizeof(char));
		receiveStart(); // Core6 > Core7: multiplyTensors_11__implode___0 
		receiveEnd(6); // Core6 > Core7: multiplyTensors_11__implode___0 
		cache_inv(multiplyTensors_11__implode___0, 32*sizeof(char));
		multiply(8/*rowsA*/,8/*columnsA*/,2/*depthA*/,8/*rowsB*/,8/*columnsB*/,2/*depthB*/,arrayA_96__arrayA__0,output_256__arrayB__0,arrayC__arrayC_96__0); // multiplyTensors_12
		cache_inv(arrayA_96__arrayA__0, 8*sizeof(int));
		cache_inv(output_256__arrayB__0, 64*sizeof(int));
		receiveStart(); // Core0 > Core7: multiplyTensors_13__implode___0 
		receiveEnd(0); // Core0 > Core7: multiplyTensors_13__implode___0 
		cache_inv(multiplyTensors_13__implode___0, 32*sizeof(char));
		receiveStart(); // Core5 > Core7: multiplyTensors_14__implode___0 
		receiveEnd(5); // Core5 > Core7: multiplyTensors_14__implode___0 
		cache_inv(multiplyTensors_14__implode___0, 32*sizeof(char));
		receiveStart(); // Core0 > Core7: multiplyTensors_15__implode___0 
		receiveEnd(0); // Core0 > Core7: multiplyTensors_15__implode___0 
		cache_inv(multiplyTensors_15__implode___0, 32*sizeof(char));
		receiveStart(); // Core1 > Core7: multiplyTensors_2__implode_d__0 
		receiveEnd(1); // Core1 > Core7: multiplyTensors_2__implode_d__0 
		cache_inv(multiplyTensors_2__implode_d__0, 32*sizeof(char));
		receiveStart(); // Core5 > Core7: multiplyTensors_3__implode_d__0 
		receiveEnd(5); // Core5 > Core7: multiplyTensors_3__implode_d__0 
		cache_inv(multiplyTensors_3__implode_d__0, 32*sizeof(char));
		receiveStart(); // Core6 > Core7: multiplyTensors_4__implode_d__0 
		receiveEnd(6); // Core6 > Core7: multiplyTensors_4__implode_d__0 
		cache_inv(multiplyTensors_4__implode_d__0, 32*sizeof(char));
		receiveStart(); // Core2 > Core7: multiplyTensors_5__implode_d__0 
		receiveEnd(2); // Core2 > Core7: multiplyTensors_5__implode_d__0 
		cache_inv(multiplyTensors_5__implode_d__0, 32*sizeof(char));
		receiveStart(); // Core1 > Core7: multiplyTensors_6__implode_d__0 
		receiveEnd(1); // Core1 > Core7: multiplyTensors_6__implode_d__0 
		cache_inv(multiplyTensors_6__implode_d__0, 32*sizeof(char));
		receiveStart(); // Core3 > Core7: multiplyTensors_7__implode_d__0 
		receiveEnd(3); // Core3 > Core7: multiplyTensors_7__implode_d__0 
		cache_inv(multiplyTensors_7__implode_d__0, 32*sizeof(char));
		receiveStart(); // Core4 > Core7: multiplyTensors_8__implode_d__0 
		receiveEnd(4); // Core4 > Core7: multiplyTensors_8__implode_d__0 
		cache_inv(multiplyTensors_8__implode_d__0, 32*sizeof(char));
		receiveStart(); // Core4 > Core7: multiplyTensors_9__implode_d__0 
		receiveEnd(4); // Core4 > Core7: multiplyTensors_9__implode_d__0 
		cache_inv(multiplyTensors_9__implode_d__0, 32*sizeof(char));
		// Join implode_displayTensor_arrayC
		{
			memcpy((void*)(arrayC__arrayC__0+0),(void*)( arrayC__arrayC_0__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+8),(void*)( arrayC__arrayC_8__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+16),(void*)( arrayC__arrayC_16__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+24),(void*)( arrayC__arrayC_24__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+32),(void*)( arrayC__arrayC_32__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+40),(void*)( arrayC__arrayC_40__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+48),(void*)( arrayC__arrayC_48__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+56),(void*)( arrayC__arrayC_56__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+64),(void*)( arrayC__arrayC_64__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+72),(void*)( arrayC__arrayC_72__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+80),(void*)( arrayC__arrayC_80__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+88),(void*)( arrayC__arrayC_88__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+96),(void*)( arrayC__arrayC_96__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+104),(void*)( arrayC__arrayC_104__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+112),(void*)( arrayC__arrayC_112__0+0), 8*sizeof(long));
			memcpy((void*)(arrayC__arrayC__0+120),(void*)( arrayC__arrayC_120__0+0), 8*sizeof(long));
		}
		cache_inv(arrayC__arrayC_0__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_8__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_16__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_24__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_32__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_40__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_48__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_56__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_64__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_72__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_80__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_88__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_96__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_104__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_112__0, 8*sizeof(long));
		cache_inv(arrayC__arrayC_120__0, 8*sizeof(long));
		cache_wbInv(implode_displayTensor_arrayC__0, 512*sizeof(char));
		sendStart(0); // Core7 > Core0: implode_displayTensor_arrayC__0 
		sendEnd(); // Core7 > Core0: implode_displayTensor_arrayC__0 
	}
}
