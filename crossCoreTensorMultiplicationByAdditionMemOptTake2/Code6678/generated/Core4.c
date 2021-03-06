/** 
 * @file Core4.c
 * @generated by C6678CPrinter
 * @date Thu Apr 02 23:19:58 BST 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__61;  // explode_generateTensors_arrayA > transposeTensor_9 size:= 1024*char defined in Core0
extern char *const explode_generateTensors_arra__35;  // explode_generateTensors_arrayB > multiplyTensors_119 size:= 128*char defined in Core0
extern char *const explode_generateTensors_arra__136;  // explode_generateTensors_arrayB > multiplyTensors_79 size:= 128*char defined in Core0
extern char *const explode_generateTensors_arra__82;  // explode_generateTensors_arrayB > multiplyTensors_78 size:= 128*char defined in Core0
extern char *const explode_generateTensors_arra__65;  // explode_generateTensors_arrayB > multiplyTensors_77 size:= 128*char defined in Core0
extern char *const explode_generateTensors_arra__129;  // explode_generateTensors_arrayB > multiplyTensors_76 size:= 128*char defined in Core0
extern char *const explode_generateTensors_arra__133;  // explode_generateTensors_arrayB > multiplyTensors_75 size:= 128*char defined in Core0
extern char *const explode_generateTensors_arra__88;  // explode_generateTensors_arrayB > multiplyTensors_74 size:= 128*char defined in Core0
extern char *const explode_generateTensors_arra__11;  // explode_generateTensors_arrayB > multiplyTensors_73 size:= 128*char defined in Core0
extern char *const explode_generateTensors_arra__68;  // explode_generateTensors_arrayB > multiplyTensors_72 size:= 128*char defined in Core0
extern char *const explode_generateTensors_arra__34;  // explode_generateTensors_arrayB > multiplyTensors_29 size:= 128*char defined in Core0
extern int *const arrayA_2304__input__0;  // explode_generateTensors_arrayA_arrayA_2304 > transposeTensor_9_input size:= 256*int defined in Core0
extern int *const output__arrayA__5;  // transposeTensor_9_output > explode_transposeTensor_9_output_arrayA size:= 256*int defined in Core0
extern char *const explode_transposeTensor_14_o__0;  // explode_transposeTensor_14_output > multiplyTensors_119 size:= 128*char defined in Core0
extern char *const explode_transposeTensor_3_ou__0;  // explode_transposeTensor_3_output > multiplyTensors_29 size:= 128*char defined in Core0
extern int *const output_0__arrayA__12;  // explode_transposeTensor_9_output_output_0 > multiplyTensors_72_arrayA size:= 32*int defined in Core0
extern int *const output_32__arrayA__15;  // explode_transposeTensor_9_output_output_32 > multiplyTensors_73_arrayA size:= 32*int defined in Core0
extern int *const output_64__arrayA__7;  // explode_transposeTensor_9_output_output_64 > multiplyTensors_74_arrayA size:= 32*int defined in Core0
extern int *const output_96__arrayA__8;  // explode_transposeTensor_9_output_output_96 > multiplyTensors_75_arrayA size:= 32*int defined in Core0
extern int *const output_128__arrayA__1;  // explode_transposeTensor_9_output_output_128 > multiplyTensors_76_arrayA size:= 32*int defined in Core0
extern int *const output_160__arrayA__8;  // explode_transposeTensor_9_output_output_160 > multiplyTensors_77_arrayA size:= 32*int defined in Core0
extern int *const output_192__arrayA__15;  // explode_transposeTensor_9_output_output_192 > multiplyTensors_78_arrayA size:= 32*int defined in Core0
extern int *const output_224__arrayA__14;  // explode_transposeTensor_9_output_output_224 > multiplyTensors_79_arrayA size:= 32*int defined in Core0
extern char *const multiplyTensors_112__implode__0;  // multiplyTensors_112 > implode_sumResults_14_input size:= 1024*char defined in Core0
extern char *const multiplyTensors_113__implode__0;  // multiplyTensors_113 > implode_sumResults_14_input size:= 1024*char defined in Core0
extern char *const multiplyTensors_114__implode__0;  // multiplyTensors_114 > implode_sumResults_14_input size:= 1024*char defined in Core0
extern char *const multiplyTensors_115__implode__0;  // multiplyTensors_115 > implode_sumResults_14_input size:= 1024*char defined in Core0
extern char *const multiplyTensors_116__implode__0;  // multiplyTensors_116 > implode_sumResults_14_input size:= 1024*char defined in Core0
extern char *const multiplyTensors_117__implode__0;  // multiplyTensors_117 > implode_sumResults_14_input size:= 1024*char defined in Core0
extern char *const multiplyTensors_118__implode__0;  // multiplyTensors_118 > implode_sumResults_14_input size:= 1024*char defined in Core0
extern int *const output_224__arrayA__0;  // explode_transposeTensor_14_output_output_224 > multiplyTensors_119_arrayA size:= 32*int defined in Core0
extern int *const arrayB_3808__arrayB__0;  // explode_generateTensors_arrayB_arrayB_3808 > multiplyTensors_119_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_1792__14;  // multiplyTensors_119_arrayC > implode_sumResults_14_input_input_1792 size:= 256*long defined in Core0
extern int *const output_160__arrayA__0;  // explode_transposeTensor_3_output_output_160 > multiplyTensors_29_arrayA size:= 32*int defined in Core0
extern int *const arrayB_928__arrayB__0;  // explode_generateTensors_arrayB_arrayB_928 > multiplyTensors_29_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_1280__1;  // multiplyTensors_29_arrayC > implode_sumResults_3_input_input_1280 size:= 256*long defined in Core0
extern char *const multiplyTensors_29__implode___0;  // multiplyTensors_29 > implode_sumResults_3_input size:= 1024*char defined in Core0
extern int *const arrayB_2304__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2304 > multiplyTensors_72_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_0__0;  // multiplyTensors_72_arrayC > implode_sumResults_9_input_input_0 size:= 256*long defined in Core0
extern int *const arrayB_2336__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2336 > multiplyTensors_73_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_256__1;  // multiplyTensors_73_arrayC > implode_sumResults_9_input_input_256 size:= 256*long defined in Core0
extern int *const arrayB_2368__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2368 > multiplyTensors_74_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_512__10;  // multiplyTensors_74_arrayC > implode_sumResults_9_input_input_512 size:= 256*long defined in Core0
extern int *const arrayB_2400__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2400 > multiplyTensors_75_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_768__3;  // multiplyTensors_75_arrayC > implode_sumResults_9_input_input_768 size:= 256*long defined in Core0
extern int *const arrayB_2432__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2432 > multiplyTensors_76_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_1024__13;  // multiplyTensors_76_arrayC > implode_sumResults_9_input_input_1024 size:= 256*long defined in Core0
extern int *const arrayB_2464__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2464 > multiplyTensors_77_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_1280__0;  // multiplyTensors_77_arrayC > implode_sumResults_9_input_input_1280 size:= 256*long defined in Core0
extern int *const arrayB_2496__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2496 > multiplyTensors_78_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_1536__0;  // multiplyTensors_78_arrayC > implode_sumResults_9_input_input_1536 size:= 256*long defined in Core0
extern int *const arrayB_2528__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2528 > multiplyTensors_79_arrayB size:= 32*int defined in Core0
extern long *const arrayC__input_1792__1;  // multiplyTensors_79_arrayC > implode_sumResults_9_input_input_1792 size:= 256*long defined in Core0
extern long *const arrayC__input_0__4;  // multiplyTensors_112_arrayC > implode_sumResults_14_input_input_0 size:= 256*long defined in Core0
extern long *const arrayC__input_256__5;  // multiplyTensors_113_arrayC > implode_sumResults_14_input_input_256 size:= 256*long defined in Core0
extern long *const arrayC__input_512__13;  // multiplyTensors_114_arrayC > implode_sumResults_14_input_input_512 size:= 256*long defined in Core0
extern long *const arrayC__input_768__10;  // multiplyTensors_115_arrayC > implode_sumResults_14_input_input_768 size:= 256*long defined in Core0
extern long *const arrayC__input_1024__6;  // multiplyTensors_116_arrayC > implode_sumResults_14_input_input_1024 size:= 256*long defined in Core0
extern long *const arrayC__input_1280__6;  // multiplyTensors_117_arrayC > implode_sumResults_14_input_input_1280 size:= 256*long defined in Core0
extern long *const arrayC__input_1536__12;  // multiplyTensors_118_arrayC > implode_sumResults_14_input_input_1536 size:= 256*long defined in Core0
extern long *const arrayC__input__1;  // implode_sumResults_14_input_arrayC > sumResults_14_input size:= 2048*long defined in Core0
extern char *const implode_sumResults_6_input____0;  // implode_sumResults_6_input > sumResults_6 size:= 8192*char defined in Core0
extern long *const arrayC__input__6;  // implode_sumResults_9_input_arrayC > sumResults_9_input size:= 2048*long defined in Core0
extern char *const implode_sumResults_9_input____0;  // implode_sumResults_9_input > sumResults_9 size:= 8192*char defined in Core0
extern long *const output__arrayC_3584__0;  // sumResults_14_output > implode_displayTensor_arrayC_arrayC_3584 size:= 256*long defined in Core0
extern char *const sumResults_14__implode_displ__0;  // sumResults_14 > implode_displayTensor_arrayC size:= 1024*char defined in Core0
extern long *const arrayC__input__5;  // implode_sumResults_6_input_arrayC > sumResults_6_input size:= 2048*long defined in Core0
extern long *const output__arrayC_1536__0;  // sumResults_6_output > implode_displayTensor_arrayC_arrayC_1536 size:= 256*long defined in Core0
extern char *const sumResults_6__implode_displa__0;  // sumResults_6 > implode_displayTensor_arrayC size:= 1024*char defined in Core0

// Core Global Definitions

void core4(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core4: explode_generateTensors_arra__61 
		receiveEnd(0); // Core0 > Core4: explode_generateTensors_arra__61 
		cache_inv(explode_generateTensors_arra__61, 1024*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__35 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__35 
		cache_inv(explode_generateTensors_arra__35, 128*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__136 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__136 
		cache_inv(explode_generateTensors_arra__136, 128*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__82 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__82 
		cache_inv(explode_generateTensors_arra__82, 128*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__65 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__65 
		cache_inv(explode_generateTensors_arra__65, 128*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__129 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__129 
		cache_inv(explode_generateTensors_arra__129, 128*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__133 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__133 
		cache_inv(explode_generateTensors_arra__133, 128*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__88 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__88 
		cache_inv(explode_generateTensors_arra__88, 128*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__11 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__11 
		cache_inv(explode_generateTensors_arra__11, 128*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__68 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__68 
		cache_inv(explode_generateTensors_arra__68, 128*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__34 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__34 
		cache_inv(explode_generateTensors_arra__34, 128*sizeof(char));
		transpose(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,arrayA_2304__input__0,output__arrayA__5); // transposeTensor_9
		cache_inv(arrayA_2304__input__0, 256*sizeof(int));
		receiveStart(); // Core1 > Core4: explode_transposeTensor_14_o__0 
		receiveEnd(1); // Core1 > Core4: explode_transposeTensor_14_o__0 
		cache_inv(explode_transposeTensor_14_o__0, 128*sizeof(char));
		receiveStart(); // Core0 > Core4: explode_transposeTensor_3_ou__0 
		receiveEnd(0); // Core0 > Core4: explode_transposeTensor_3_ou__0 
		cache_inv(explode_transposeTensor_3_ou__0, 128*sizeof(char));
		// Fork explode_transposeTensor_9_output
		{
			cache_wb(output__arrayA__5, 256*sizeof(int));
		}
		cache_wb(((char*)output__arrayA__5) + 0, 1024);
		cache_inv(output__arrayA__5, 256*sizeof(int));
		receiveStart(); // Core6 > Core4: multiplyTensors_112__implode__0 
		receiveEnd(6); // Core6 > Core4: multiplyTensors_112__implode__0 
		cache_inv(multiplyTensors_112__implode__0, 1024*sizeof(char));
		receiveStart(); // Core2 > Core4: multiplyTensors_113__implode__0 
		receiveEnd(2); // Core2 > Core4: multiplyTensors_113__implode__0 
		cache_inv(multiplyTensors_113__implode__0, 1024*sizeof(char));
		receiveStart(); // Core1 > Core4: multiplyTensors_114__implode__0 
		receiveEnd(1); // Core1 > Core4: multiplyTensors_114__implode__0 
		cache_inv(multiplyTensors_114__implode__0, 1024*sizeof(char));
		receiveStart(); // Core5 > Core4: multiplyTensors_115__implode__0 
		receiveEnd(5); // Core5 > Core4: multiplyTensors_115__implode__0 
		cache_inv(multiplyTensors_115__implode__0, 1024*sizeof(char));
		receiveStart(); // Core1 > Core4: multiplyTensors_116__implode__0 
		receiveEnd(1); // Core1 > Core4: multiplyTensors_116__implode__0 
		cache_inv(multiplyTensors_116__implode__0, 1024*sizeof(char));
		receiveStart(); // Core0 > Core4: multiplyTensors_117__implode__0 
		receiveEnd(0); // Core0 > Core4: multiplyTensors_117__implode__0 
		cache_inv(multiplyTensors_117__implode__0, 1024*sizeof(char));
		receiveStart(); // Core3 > Core4: multiplyTensors_118__implode__0 
		receiveEnd(3); // Core3 > Core4: multiplyTensors_118__implode__0 
		cache_inv(multiplyTensors_118__implode__0, 1024*sizeof(char));
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_224__arrayA__0,arrayB_3808__arrayB__0,arrayC__input_1792__14); // multiplyTensors_119
		cache_inv(output_224__arrayA__0, 32*sizeof(int));
		cache_inv(arrayB_3808__arrayB__0, 32*sizeof(int));
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_160__arrayA__0,arrayB_928__arrayB__0,arrayC__input_1280__1); // multiplyTensors_29
		cache_inv(output_160__arrayA__0, 32*sizeof(int));
		cache_inv(arrayB_928__arrayB__0, 32*sizeof(int));
		cache_wbInv(multiplyTensors_29__implode___0, 1024*sizeof(char));
		sendStart(7); // Core4 > Core7: multiplyTensors_29__implode___0 
		sendEnd(); // Core4 > Core7: multiplyTensors_29__implode___0 
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_0__arrayA__12,arrayB_2304__arrayB__0,arrayC__input_0__0); // multiplyTensors_72
		cache_inv(output_0__arrayA__12, 32*sizeof(int));
		cache_inv(arrayB_2304__arrayB__0, 32*sizeof(int));
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_32__arrayA__15,arrayB_2336__arrayB__0,arrayC__input_256__1); // multiplyTensors_73
		cache_inv(output_32__arrayA__15, 32*sizeof(int));
		cache_inv(arrayB_2336__arrayB__0, 32*sizeof(int));
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_64__arrayA__7,arrayB_2368__arrayB__0,arrayC__input_512__10); // multiplyTensors_74
		cache_inv(output_64__arrayA__7, 32*sizeof(int));
		cache_inv(arrayB_2368__arrayB__0, 32*sizeof(int));
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_96__arrayA__8,arrayB_2400__arrayB__0,arrayC__input_768__3); // multiplyTensors_75
		cache_inv(output_96__arrayA__8, 32*sizeof(int));
		cache_inv(arrayB_2400__arrayB__0, 32*sizeof(int));
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_128__arrayA__1,arrayB_2432__arrayB__0,arrayC__input_1024__13); // multiplyTensors_76
		cache_inv(output_128__arrayA__1, 32*sizeof(int));
		cache_inv(arrayB_2432__arrayB__0, 32*sizeof(int));
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_160__arrayA__8,arrayB_2464__arrayB__0,arrayC__input_1280__0); // multiplyTensors_77
		cache_inv(output_160__arrayA__8, 32*sizeof(int));
		cache_inv(arrayB_2464__arrayB__0, 32*sizeof(int));
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_192__arrayA__15,arrayB_2496__arrayB__0,arrayC__input_1536__0); // multiplyTensors_78
		cache_inv(output_192__arrayA__15, 32*sizeof(int));
		cache_inv(arrayB_2496__arrayB__0, 32*sizeof(int));
		multiply(16/*rowsA*/,16/*columnsA*/,16/*depthA*/,16/*rowsB*/,16/*columnsB*/,16/*depthB*/,output_224__arrayA__14,arrayB_2528__arrayB__0,arrayC__input_1792__1); // multiplyTensors_79
		cache_inv(output_224__arrayA__14, 32*sizeof(int));
		cache_inv(arrayB_2528__arrayB__0, 32*sizeof(int));
		// Join implode_sumResults_14_input
		{
			cache_wb(arrayC__input_0__4, 256*sizeof(long));
			memcpy((void*)(arrayC__input__1+256),(void*)( arrayC__input_256__5+0), 256*sizeof(long));
			cache_wb(arrayC__input_512__13, 256*sizeof(long));
			memcpy((void*)(arrayC__input__1+768),(void*)( arrayC__input_768__10+0), 256*sizeof(long));
			cache_wb(arrayC__input_1024__6, 256*sizeof(long));
			memcpy((void*)(arrayC__input__1+1280),(void*)( arrayC__input_1280__6+0), 256*sizeof(long));
			cache_wb(arrayC__input_1536__12, 256*sizeof(long));
			memcpy((void*)(arrayC__input__1+1792),(void*)( arrayC__input_1792__14+0), 256*sizeof(long));
		}
		cache_wb(((char*)arrayC__input_0__4) + 0, 1024);
		cache_inv(arrayC__input_0__4, 256*sizeof(long));
		cache_inv(arrayC__input_256__5, 256*sizeof(long));
		cache_wb(((char*)arrayC__input_512__13) + 0, 1024);
		cache_inv(arrayC__input_512__13, 256*sizeof(long));
		cache_inv(arrayC__input_768__10, 256*sizeof(long));
		cache_wb(((char*)arrayC__input_1024__6) + 0, 1024);
		cache_inv(arrayC__input_1024__6, 256*sizeof(long));
		cache_inv(arrayC__input_1280__6, 256*sizeof(long));
		cache_wb(((char*)arrayC__input_1536__12) + 0, 1024);
		cache_inv(arrayC__input_1536__12, 256*sizeof(long));
		cache_inv(arrayC__input_1792__14, 256*sizeof(long));
		receiveStart(); // Core3 > Core4: implode_sumResults_6_input____0 
		receiveEnd(3); // Core3 > Core4: implode_sumResults_6_input____0 
		cache_inv(implode_sumResults_6_input____0, 8192*sizeof(char));
		// Join implode_sumResults_9_input
		{
			cache_wb(arrayC__input_0__0, 256*sizeof(long));
			memcpy((void*)(arrayC__input__6+256),(void*)( arrayC__input_256__1+0), 256*sizeof(long));
			cache_wb(arrayC__input_512__10, 256*sizeof(long));
			memcpy((void*)(arrayC__input__6+768),(void*)( arrayC__input_768__3+0), 256*sizeof(long));
			cache_wb(arrayC__input_1024__13, 256*sizeof(long));
			memcpy((void*)(arrayC__input__6+1280),(void*)( arrayC__input_1280__0+0), 256*sizeof(long));
			cache_wb(arrayC__input_1536__0, 256*sizeof(long));
			memcpy((void*)(arrayC__input__6+1792),(void*)( arrayC__input_1792__1+0), 256*sizeof(long));
		}
		cache_wb(((char*)arrayC__input_0__0) + 0, 1024);
		cache_inv(arrayC__input_0__0, 256*sizeof(long));
		cache_inv(arrayC__input_256__1, 256*sizeof(long));
		cache_wb(((char*)arrayC__input_512__10) + 0, 1024);
		cache_inv(arrayC__input_512__10, 256*sizeof(long));
		cache_inv(arrayC__input_768__3, 256*sizeof(long));
		cache_wb(((char*)arrayC__input_1024__13) + 0, 1024);
		cache_inv(arrayC__input_1024__13, 256*sizeof(long));
		cache_inv(arrayC__input_1280__0, 256*sizeof(long));
		cache_wb(((char*)arrayC__input_1536__0) + 0, 1024);
		cache_inv(arrayC__input_1536__0, 256*sizeof(long));
		cache_inv(arrayC__input_1792__1, 256*sizeof(long));
		cache_wbInv(implode_sumResults_9_input____0, 8192*sizeof(char));
		sendStart(1); // Core4 > Core1: implode_sumResults_9_input____0 
		sendEnd(); // Core4 > Core1: implode_sumResults_9_input____0 
		sum(16/*rowsA*/,16/*columnsB*/,16/*depthA*/,arrayC__input__1,output__arrayC_3584__0); // sumResults_14
		cache_inv(arrayC__input__1, 2048*sizeof(long));
		cache_wbInv(sumResults_14__implode_displ__0, 1024*sizeof(char));
		sendStart(3); // Core4 > Core3: sumResults_14__implode_displ__0 
		sendEnd(); // Core4 > Core3: sumResults_14__implode_displ__0 
		sum(16/*rowsA*/,16/*columnsB*/,16/*depthA*/,arrayC__input__5,output__arrayC_1536__0); // sumResults_6
		cache_inv(arrayC__input__5, 2048*sizeof(long));
		cache_wbInv(sumResults_6__implode_displa__0, 1024*sizeof(char));
		sendStart(3); // Core4 > Core3: sumResults_6__implode_displa__0 
		sendEnd(); // Core4 > Core3: sumResults_6__implode_displa__0 
	}
}
