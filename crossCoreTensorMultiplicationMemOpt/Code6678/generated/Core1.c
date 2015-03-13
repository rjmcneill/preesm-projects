/** 
 * @file Core1.c
 * @generated by C6678CPrinter
 * @date Fri Mar 13 00:17:40 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__13;  // explode_generateTensors_arrayA > multiplyTensors_2 size:= 512*char defined in Core0
extern char *const explode_generateTensors_arra__2;  // explode_generateTensors_arrayA > multiplyTensors_1 size:= 512*char defined in Core0
extern char *const broadcastTensorB_0__multiply__7;  // broadcastTensorB_0 > multiplyTensors_2 size:= 4096*char defined in Core0
extern char *const broadcastTensorB_0__multiply__0;  // broadcastTensorB_0 > multiplyTensors_1 size:= 4096*char defined in Core0
extern int *const arrayA_128__arrayA__0;  // explode_generateTensors_arrayA_arrayA_128 > multiplyTensors_1_arrayA size:= 128*int defined in Core0
extern int *const output_1024__arrayB__0;  // broadcastTensorB_0_output_1024 > multiplyTensors_1_arrayB size:= 1024*int defined in Core0
extern long *const arrayC__arrayC_128__0;  // multiplyTensors_1_arrayC > implode_displayTensor_arrayC_arrayC_128 size:= 128*long defined in Core0
extern char *const multiplyTensors_1__implode_d__0;  // multiplyTensors_1 > implode_displayTensor_arrayC size:= 512*char defined in Core0
extern int *const arrayA_256__arrayA__0;  // explode_generateTensors_arrayA_arrayA_256 > multiplyTensors_2_arrayA size:= 128*int defined in Core0
extern int *const output_2048__arrayB__1;  // broadcastTensorB_0_output_2048 > multiplyTensors_2_arrayB size:= 1024*int defined in Core0
extern long *const arrayC__arrayC_256__0;  // multiplyTensors_2_arrayC > implode_displayTensor_arrayC_arrayC_256 size:= 128*long defined in Core0
extern char *const multiplyTensors_2__implode_d__0;  // multiplyTensors_2 > implode_displayTensor_arrayC size:= 512*char defined in Core0

// Core Global Definitions

void core1(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core7 > Core1: explode_generateTensors_arra__13 
		receiveEnd(7); // Core7 > Core1: explode_generateTensors_arra__13 
		cache_inv(explode_generateTensors_arra__13, 512*sizeof(char));
		receiveStart(); // Core7 > Core1: explode_generateTensors_arra__2 
		receiveEnd(7); // Core7 > Core1: explode_generateTensors_arra__2 
		cache_inv(explode_generateTensors_arra__2, 512*sizeof(char));
		receiveStart(); // Core4 > Core1: broadcastTensorB_0__multiply__7 
		receiveEnd(4); // Core4 > Core1: broadcastTensorB_0__multiply__7 
		cache_inv(broadcastTensorB_0__multiply__7, 4096*sizeof(char));
		receiveStart(); // Core4 > Core1: broadcastTensorB_0__multiply__0 
		receiveEnd(4); // Core4 > Core1: broadcastTensorB_0__multiply__0 
		cache_inv(broadcastTensorB_0__multiply__0, 4096*sizeof(char));
		multiply(32/*rowsA*/,32/*columnsA*/,2/*depthA*/,32/*rowsB*/,32/*columnsB*/,2/*depthB*/,arrayA_128__arrayA__0,output_1024__arrayB__0,arrayC__arrayC_128__0); // multiplyTensors_1
		cache_inv(arrayA_128__arrayA__0, 128*sizeof(int));
		cache_inv(output_1024__arrayB__0, 1024*sizeof(int));
		cache_wbInv(multiplyTensors_1__implode_d__0, 512*sizeof(char));
		sendStart(7); // Core1 > Core7: multiplyTensors_1__implode_d__0 
		sendEnd(); // Core1 > Core7: multiplyTensors_1__implode_d__0 
		multiply(32/*rowsA*/,32/*columnsA*/,2/*depthA*/,32/*rowsB*/,32/*columnsB*/,2/*depthB*/,arrayA_256__arrayA__0,output_2048__arrayB__1,arrayC__arrayC_256__0); // multiplyTensors_2
		cache_inv(arrayA_256__arrayA__0, 128*sizeof(int));
		cache_inv(output_2048__arrayB__1, 1024*sizeof(int));
		cache_wbInv(multiplyTensors_2__implode_d__0, 512*sizeof(char));
		sendStart(7); // Core1 > Core7: multiplyTensors_2__implode_d__0 
		sendEnd(); // Core1 > Core7: multiplyTensors_2__implode_d__0 
	}
}
